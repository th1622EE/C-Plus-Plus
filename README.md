# Welcome to my Learning Basic C++ Repository

## Introduction

This repository is a reference point for specific implementations using the C++ programming language. While the C++ source code will remain the same, the method of execution will vary depending on platform. Below you will find tables providing a system level overview relative to the Windows, Ubuntu (Linux), and Mac platforms used in the making of this repository. In each of the platform specific subsections below, there will be instructions on how to install, or where to get the information on how to install the dependencies, as well as platform specific setup. Lastly, I just want to say, I **am not** a professional C++ developer, and there may very well be (and likely is) a more optimal approach for some of the code contained within this repository. That said, **IFF** you have a better and/or more efficient implementation of **ANY** of the code contained within this repository, I welcome your contributions by submitting a pull request of your **tested** implementations.

## Windows

The following is a table describing the setup of my Windows 11 system relative to the tools and dependencies specific to writing, building, and executing the code contained in within the [src](src/) directory:

| Application        | Version | Description                              |
| :---               | :---    | :---                                     |
| Visual Studio Code | 1.74.1  | Code Editor                              |
| Git                | 2.38.0  | Git for Windows                          |
| MSYS2              |         | Software Distribution and Build Platform |
| g++                | 12.2.0  | C++ Compiler                             |

### Getting Started with Windows 11

#### Install Visual Studio Code

If VS Code is already installed on your system skip to step 2, and if VS Code is installed **and** you have already installed the *C/C++* extension skip this section entirely:

1. Download Visual Studio Code from the VS Code downloads page located [here](https://code.visualstudio.com/download). When the download completes, double-click the executable to complete installation.
2. Launch the VS Code application and select the extensions icon along the left side of the application window. In the search bar type *C/C++* and select *Install*.

#### Install Git for Windows

1. Download the current 64-bit version (2.39.0 at the moment) from the Git website located [here](https://git-scm.com/download/win), or simply by clicking [this link](https://github.com/git-for-windows/git/releases/download/v2.39.0.windows.1/Git-2.39.0-64-bit.exe) to begin the download of the Windows 64-bit standalone installer.
2. Once the file finishes downloading, double-click the executable, and begin the installation. Simply follow the installation prompts selecting your preferred settings. Once Git Bash is installed, open the a Git Bash terminal window by either selecting the Git Bash shortcut icon created on your desktop (if applicable), or open select the Windows icon in your taskbar, select *All apps*, scroll to the *Git* directory, and from the dropdown, select the Git Bash application.
3. 