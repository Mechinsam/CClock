# TimeC
---
Simple clock that displays the time in HH:MM:SS. Can print the time continously every second (may not be accurate).
This is one of my first C projects since I have decided to try programming in it a bit (after giving up years ago) which is why the code is a bit messy..

## Installation (Linux/MacOS)
Make sure you have gcc installed then simply run compile.sh to compile the program to a binary in the same directory called `timec`

You can also use install.sh to compile to a binary then move it to the /bin/ folder so it auto-adds to path

Unfortunately you cannot install on Windows because this project uses the `unistd.h` header which is for POSIX adjacent systems only
