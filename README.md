# learn cpp gtest
 VS code setup for unittesting cpp code via gtest, also this repository contains a simple code with unittest to let you start with your cpp unittsting. The whole process is automated with Cmake. Unlike other programming languages, CPP leanring curve is steeper and setting up project develpment environment (Suitable Compiler, automating building, testing, documenting, etc...) is even more complex task get it right in first attempt. So before starting with any of the coding part, I would like to describe my CPP project development environment. I am using WINDOWS 10 OS, and this setup process helps you. Otherwise please any other resource for your project setup.
 
 
## Configuration:
Even though this repository dedicated runnig unittest via gtest, this configuration and setup best suitable C++ project management and development. Follow all the instructions mentioned in this repo to better C++ development environment in Windows.

* **OS**	:	WINDOWS 10
* **VSCODE**	: Code Editor developed by MicroSoft. [VS code download](https://code.visualstudio.com/download)
* **MSYS MinGW**	: 'MSYS2 is a collection of tools and libraries providing you with an easy-to-use environment for building, installing and running native Windows software'.
* **CMake**	: Scripting language that automates the C/C++ project building procedure and many more.

	

## Setting up:
Now, to install C++ compiler MinGW via MSYS and C/C++ extension in VSCode, VScode official website contained instructions to follow  [VSC setup](https://code.visualstudio.com/docs/cpp/config-mingw). But, this is not an entire setup for our requirement, there are few more installation/configuration procedures to follow.

### 1. Install VS Code
* Download VS Code from offical website [VS code download](https://code.visualstudio.com/download).
* After complete installation, open VS Code then open extensions window by pressing (Ctrl + Shift + X), type C/C++ in search bar, and install a pakage that deveoloped by MicroSoft.
* Then, install CMake and CMake Tools. (Note: These are for project automation.)

### 2. Install Windows C/C++ package manager - MSYS
* Open [MSYS](https://www.msys2.org/) and follow the each and every instruction. While installing the packages mentions in the blog, make sure you internet connections is stable and fast. Weak connections will cause installation error.
* After successful completion of all the steps, try below below commands one at a time to install cmake and gtest.
	*  `pacman -S mingw-w64-x86_64-cmake`
	*  `pacman -S mingw-w64-x86_64-gtest`
* After complete installation, Add `C:\msys64\mingw64\bin` to user's environmental variable.

### 3. Downlaoded CMake
* [CMake download](https://cmake.org/download/)
* While installing, Install for all the users.
* In case of CMAKE, installation automatically adds the executable path to environmental variable.

All the required software packages and extensions are installed. Lets move onto coding.

## gtest

After completing the installation, clone/download this repository, Open the project with VS Code, and delete build directory. 
* If VS Code prompt to choose `active kit` for CMake build settings:
Choose `GCC 12.1.0 x86_64-w64-mingw32`,
* Otherwise, press CTRL+SHIFT+P and type `reload window`, active kit selection window will pop at top, then choose `GCC 12.1.0 x86_64-w64-mingw32`.

This fill detects the CMakeLists.txt file and configures the project 
- Press build button in the bottom window to build the project. 

- Press run test to run the test that written in `test_trial.cpp`.

This is simple gtest that tested `m_add` function in the maths.h file. WIth this setup, try runnig your own tests. If you add any new test file, do not forget to add that file name with cpp extension (file_name.cpp) as add_executable() function input.

`(unittest test_trial.cpp)`

## Authors note: 
This is just a initial stage of this documentation process. I would like to add even more detailed explaination about gtest and various functionalities avialable within it. 

Please raise an issue in the repo, if you
* are unable to configure your windows system for C/C++ project development.
* would like to know more about cmake or gtest or anything related C++.

I have gather all this information by browsing all over the internet i.e. other github repositories and stackoverflow questions. We can find solution for any problem that we may encounter in programming, but those solutions are scattered all around the internet. So, I thought it good to have all the thing at one place. That's why came up with this repository idea. To improve this repository by adding any additions resources, please do suggest modifications/suggestions that helps in widening the C++ knowledge of all.

Bhagath Mamindlapelly