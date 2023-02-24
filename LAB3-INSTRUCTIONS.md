## Lab 3 : CEG 3400

### Authentication and Permissions

Table of contents:
* [Background](LAB3-INSTRUCTIONS.md#background)
* [Objectives](LAB3-INSTRUCTIONS.md#objectives)
* [Preparation](LAB3-INSTRUCTIONS.md#preparation)
* [Task 1: Account Setup](LAB3-INSTRUCTIONS.md#task-1---users)
* [Task 2: Permissions Issues](LAB3-INSTRUCTIONS.md#task-2---permissions-issues)
* [Task 3: Advanced Permissions Issues](LAB3-INSTRUCTIONS.md#task-3---setuid)

---

#### Background

Setting up accounts on a system can be a difficult task to do securely.  
In part one students will work in groups of 3 to setup multiple users on your 
***AWS*** environment.  Students will extract information from this virtual machine 
and document the process.

Parts 2 and 3 will involve checking and changing file permissions.

* Instructions for using AWS can be found [in the class repository here.](https://github.com/mkijowski/ceg3400-fall/blob/master/AWS_GUIDE.md)
* After signing into the AWS console via AWS Academy use [this link to provision a Ubuntu system.](https://console.aws.amazon.com/cloudformation/home?region=us-east-1#/stacks/new?stackName=ceg3400Lab&templateURL=https:%2F%2Fwsu-cecs-cf-templates.s3.us-east-2.amazonaws.com%2Fcourse-templates%2Fceg3400-mek.yml)

---

#### Objectives

Students should become familiar with the following:

* using encryption to secure communication within a team
* following instructions
* Standard authentication methods in linux
* File permissions in linux
* Special file permissions in linux

---

### Task 1 - Users

Intended to be done in a team of 2-3, but a single person *could* perform
all tasks.  ***Each student should make at least 1 commit to their team repository***

* create a simple / insecure password you can share 
  (one or two words and numbers, no padding or substitution)
* create an SSH key pair for yourself and swap public keys with teammates
* exchange (insecure) passwords using gpg encryption (use the `--recipient` option)
* create ***a local account for each team member*** using the above
* Back up the `/etc/shadow` file entries for these users ***Submit this file to the pilot dropbox by next Thursday***

***Input needed in `README.md`***

---

### Task 2 - Permissions

It appears someone on your system *might* have used an insecure password.
Lets lock some things down.

* Check the permissions on each users home directory `~` (their username folder in `/home`)
* Change each users' home directory (and all contents of) permissions so only the file owner (`u`) and file group (`g`) can read/write/execute files.
* Check the permissions on `/etc/shadow`
* Using standard linux file permissions (no setfacl), allow ***your user***  read access to your teammates local home directories.

---

### Task 3 - SetUID

The SetUID and SetGID bits can be tricky to think about.  Check out the 
`/code` provided to you in this lab.  Edit this as necessary to allow
***ANY*** user on this system to list contents of your home directory WITHOUT using roots effective UID 
(using the executable generated by this code).

* Edit the code as necessary and compile
* Check ownership of this file
* Set the SetUID bit of this file
* Make sure others can read/execute this file
* Verify your teammates have successfully performed this task

Hints: This will require some tweaking of the code and environment.  
Some useful commands: 
* `g++ <filename>`
* `man whoami`
* `./a.out whoami`

### EC Task - What happens if?

Write down three questions that start with "What happens if...?" related to one or multiple of the setuid example programs. Then, do that and answer the question.

Points will not be awarded to trivial questions.  Think of this as actual Computer *Science* (hah), write down your hypothesis (what if question) and what you think the outcome will be, then try to answer that **beforfe** you perform your experiment.

Then, outline your experiment (in writing) and tell me what happened!  That's science.
