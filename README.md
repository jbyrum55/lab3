## Lab 3 : CEG 3400

### Authentication and Permissions

#### Name: Jason Byrum

Names and usernames of teammates:
  User1
  User2
  User3

---

### Task 1 - Users

* Type your simple password here: 12
* Upload your `id_rsa.pub` to this repo (to the root directory as `id_rsa.pub`)
* Encrypt your password with matthew.kijowski@wright.edu as the `--recipient` and upload it to `password.gpg`
* Paste the commands used to encrypt your password to your teammates:

```
gpg <the rest>
```

* paste the relevant lines in `/etc/passwd` and `/etc/group` below that show you created your user

/etc/passwd
 ```
  User1:x:1001:1001::/home/User1:/bin/sh
  User2:x:1002:1002::/home/User2:/bin/sh
  User3:x:1003:1003::/home/User3:/bin/sh

/etc/group

  User1:x:1001:
  User2:x:1002:
  User3:x:1003:


### Task 2 - Permissions

* What were the permissions on each of the users' home directories?
    Each users home directory had the permissions of 755 read run and execute.

```
command and output
```

* What command did you use to change the permissions (full command used)?

  chmod 777 -R /home/User

* What are the permissions on `/etc/shadow`?
   ls -l /etc/shadow
    -rw-r----- 1 root shadow 1075 Feb 24 21:24 /etc/shadow


* Why does `/etc/shadow` have the permissions that it does?
    It is set with only the user root so that no other users can read the file and get the password hashes.

* How did you accomplish this task?  IF you updated any of the files above
  (`/etc/passwd` or `/etc/group`) paste the relevant lines here.  
  
  ```
  output of ls -lah /home
  also paste any file names and changed lines here
  ```
  Be thorough in your response, explain how given the above output and 
  a listing of commands run I can know for certain that your user can 
  access other users' files.

---

### Task 3 - SetUID

* Make sure your uncompiled and compiled code is in `/code`
* What were the final permissions on your executable?

```

```

* What user does the executable run as (use `whoami`)?

```
./a.out whoami output
```

* What command did you use to setUID?

```

```

* Copy paste each verification you did for the setuid on your teammates'
  systems into different code blocks below.

```
teammate 1 tests
```

```
teammate 2 tests
```

