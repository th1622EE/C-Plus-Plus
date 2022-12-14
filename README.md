# Welcome to my Learning Basic C++ Repository

## Introduction

This repository is a reference point for specific implementations using the C++ programming language. While the C++ source code will remain the same, the method of execution will vary depending on platform. Below you will find tables providing a system level overview relative to the Windows, Ubuntu (Linux), and Mac platforms used in the making of this repository. In each of the platform specific subsections below, there will be instructions on how to install, or where to get the information on how to install the dependencies, as well as platform specific setup. Lastly, I just want to say, I **am not** a professional C++ developer, and there may very well be (and likely is) a more optimal approach for some of the code contained within this repository. That said, **IFF** you have a better and/or more efficient implementation of **ANY** of the code contained within this repository, I welcome your contributions by submitting a pull request of your **tested** implementations.

## Windows

The following is a table describing the setup of my Windows 11 system relative to the tools and dependencies specific to writing, building, and executing the code contained in within the [src](src/) directory:

| Application | Version | Description |
| :--- | :--- | :--- |
| Visual Studio Code | 1.74.1  | Code Editor |
| Git | 2.38.0  | Git Version Control System (VCS) for Windows |
| MSYS2 | | Software Distribution and Building Platform |
| MINGW64 | | Minimalist GNU for Windows (MINGW) Development Environment |


### Getting Started with Windows 11

The following instructions are **NOT** required to execute the code. These instructions are simply available as a courtesy to those who **may or may not be** familiar with the language, or the tools used in the development and execution of the code contained within. However, you **MUST** have the *g++* C++ compiler installed on your system, and added to your path to execute the code using the instructions provided via the README.md file in every subdirectory within the [src](src/) directory.

#### Install Visual Studio Code

If VS Code is already installed on your system skip to step 2, and if VS Code is installed **and** you have already installed the *C/C++* extension skip this section entirely:

1. Download Visual Studio Code from the VS Code downloads page located [here](https://code.visualstudio.com/download). When the download completes, double-click the executable to complete installation.
2. Launch the VS Code application and select the extensions icon along the left side of the application window. In the search bar type *C/C++* and select *Install*.

#### Installing MYSYS2

MSYS2 is a Software Distribution and Building Platform for Windows based on cygwin, but varies in that MSYS2 builds the software against the Windows APIs. While you could simply download a C++ compiler, MSYS2 a variety of builds to include but not limited to gcc, mingw64, CPython, CMake, Rust, and Ruby, as well as a package management system *Pacman*, which can and likely will be very useful if you're primary system is Windows-based. However, if you'd prefer, you can simply install a standalone C++ compiler, use an existing one on your system (if applicable), and then skip the following steps. 

1. Download the MSYS2 installer from the MSYS2 website located [here](https://www.msys2.org/), or click [this link](https://github.com/msys2/msys2-installer/releases/download/2022-12-16/msys2-x86_64-20221216.exe) to automatically initiate the download of the installer.
2. Once downloaded, double-click to run the MSYS2 installer.
3. Follow the prompts to complete the installation.
4. Once installation is complete, ensure the *Run MSYS2 now.* box is checked and click *Finish* to launch the *UCRT64* default terminal window.
5. Type the following into the terminal window to download ming64 using the following command:
   ```
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```
6. Verify installation of g++ compiler by entering the following command in the *UCRT64* terminal window:
   ```
   g++ --version
   ```
   
#### Install Git for Windows

If Git is already installed on your system skip this step. If you do not know if git is installed on your system, select the search field located in your taskbar, and type *cmd* and select the Command Prompt application. Type the following into the command prompt:
```
git --version
```
If the version information is displayed, it is already installed, but if you receive *'g++' is not recognized as an internal or external command, operable program or batch file.*, then you will need to follow the steps below. 

1. Download the current 64-bit version (2.39.0 at the moment) from the Git website located [here](https://git-scm.com/download/win), or simply by clicking [this link](https://github.com/git-for-windows/git/releases/download/v2.39.0.windows.1/Git-2.39.0-64-bit.exe) to begin the download of the Windows 64-bit standalone installer.
2. Once the file finishes downloading, double-click the executable, and begin the installation. 
3. Simply follow the installation prompts selecting your preferred settings, but ensure you select the checkbox to create a desktop shortcut icon.
4. Once installation is complete, **right-click** the *Git Bash* icon, select *Show more options*, and then select *Properties*.
5. Ensure the *Shortcut* tab is selected, and append the following to the text within double quotes to the right of the *Target* field:
   ```
   --cd-to-home
   ```
   The *target* field should be similar to the following:
   ```
   "C:\Program Files\Git\git-bash.exe" --cd-to-home
   ```
7. Select *Apply* and then *OK* to close the window.
8. Double-click the *Git Bash* icon on your Desktop to open the terminal window, and type the following to launch Visual Studio Code from within your *HOME* directory:
   ```
   code .
   ```
11. In the *Explorer* on the left side of the VS Code application, double-click the *.bashrc* to open the file in the editor, and copy and paste the following to add the *g++* compiler to your path **IFF** you used the default location for the installation folder:
   ```
   # Export path of g++ compiler to run C++ code from Git Bash
   export PATH="/c/msys64/ucrt64/bin/:$PATH"
   ```
   If you stored the installation folder in a custom location, replace *<path-to-ucrt64/bin>* with the appropriate path as follows and add to *.bashrc*:
   ```
   export PATH="<path-to-ucrt64/bin>:$PATH"
   ```
12. Save the *.bashrc* file. 
