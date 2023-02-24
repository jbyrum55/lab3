#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/types.h>

using std::cout; using std::endl; using std::string;
 
int main(int argc, char** argv)
{
    // Setuid needs to be specified in c++ now otherwise compiler will
    // hate me
    //setuid(0);
    setuid(0);

    // get arguments from the user.  Basically anything passed on the same
    // line when executing
    if (argc == 1 ) {
        cout << "Use this program to execute commands as another user.\n";
        cout << "Example: ./setuid [commands] \n";
        int real = getuid();
        int euid = geteuid();
        printf("The REAL UID =: %d\n", real);
        printf("The EFFECTIVE UID =: %d\n", euid);
        return 0;
    }

    //parse arguments and store
    std::string str;
    for(int i = 1; i < argc; i++){
        str = str + " " + argv[i];
    }

    // run arguments as commands in the system from within this executable
    // lets hope no shady business happens 
    cout << "Running: " << str << "\n";
    const char *command = str.c_str();
    //std::system(command);
    execlp(argv[1], argv[1], argv[2], argv[3], argv[4], NULL);
    return 0;
}


