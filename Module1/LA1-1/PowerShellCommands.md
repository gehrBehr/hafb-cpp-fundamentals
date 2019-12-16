## C++ environment in Windows
- git //for source control
- cmake //to work with projects
- g++ (mingw) //compliler for windows. Make sure it is in the environment variables path.
- vs code // editor to write code
## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls      # list folder 
$ cd  <dest># change directories
$ cd   ..	# .. parent directory 
$ pwd       # show present working directory
$ rm <name> # remove/delete file/directory
```
## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```
## C++ Basics
- File extension: `.cpp`

## g++ Compiler
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## C++ File Template

```cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```

## Plugins and Doxygen Documentation
```cpp
// Add C/C++ Intellisense
//add code spell
//add Doxygen Documentation
//in a file type: /** 
//hit enter
```