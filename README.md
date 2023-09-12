# Quick Info
### Clone this folder
`git clone https://github.com/Simpson-Computer-Technologies-Research/cstarterfiles.git`

### Where to put files read by main.c
Put all of the files read by main.c (ex: file.txt) in the same area as the Makefile
Example Directory:
```
/src
/build
Makefile
file.txt
```

```c
// main.c

#include <stdio.h>

int main()
{
  fopen("file.txt", "r");
  return 0;
}
```

# Installing C
### Windows

1. Install MinGW

2. Restart your computer

3. Add MinGW to your PATH if it's not there already. Check by typing "gcc -v" in your terminal.

4. Go into the terminal for this directory and type "make"

5. The program will run.


### Mac

1. Install Xcode from the App Store.

2. Restart your computer

4. Go into the terminal for this directory and type "make"

5. The program will run.


### If using VSCode

1. Install the required C/C++ Extensions

2. Open this directory in vscode

3. Open the terminal in vscode

4. Type "make" into the terminal

5. The program will run.

#### Made by tristan
