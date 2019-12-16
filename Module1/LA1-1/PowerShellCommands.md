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

## g++ Compiler for 1 file
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```
## g++ Compiler for 2 files
For example, if you have a library
under the `functions.cpp` and 
`functions.h` files, and you have
 a driver under `run_functions.cpp`
```bash
# To compile
# -o for output file name
$ g++ functions.cpp run_functions.cpp -o program_name
# To run
$ ./program_name.exe
```
2 files is max for one line, otherwise use a makefile
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