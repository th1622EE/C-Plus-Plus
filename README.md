# Welcome to my Learning Basic C++ Repository

## Introduction

The purpose of the repo is to provide a reference for basic C++ code for those learning and/or refining fundamental programming skills specific to the C++ language. The examples contained within are simply references for how to utilize the basic functionality of the language through a collection of directories named consistently with the concept in which the interface (fileName.hpp) and implementation (fileName.cpp) files were written to demonstrate. For examples, the maps.hpp and maps.cpp files demonstrate an introductory reference on how to implement a map in the C++ language. Every subdirectory contained within the src directory will contain both an interface and implementation file using an object oriented design approach to build an executable file which will be stored using the same name as the implementation file in the out directory. 

## System Overview

The following is an operating system specific description of the applications used in the creation of the code contained within this repo:

| OS      | Application | Version | Description      |
| :---    | :---        | :---    | :---             |
| Ubuntu  | NA          | 22.04   | Operating System |
| Windows | NA          | 11      | Operating System |
| Ubuntu  | g++         | 11.3.0  | C++ compiler     |
| Ubuntu  | bash        | 5.1.16  | Unix shell       |
| Ubuntu  | VS Code     | 1.72.2  | Code editor      |
| Windows | VS Code     | x.xx.x  | Code editor      |

## Getting Started on Ubuntu System (if using Windows skip this section):

1. Open a terminal window by either right-clicking the desktop and selecting **Open in Terminal**, or use the following command from the keyboard:

   `ctrl + alt + t` 
   
2. Verify the g++ (C++) compiler is installed on your system by typing the following command in bash terminal. If so, information about g++ to include but not limited to version will be displayed, and you will skip the second command. If not, you will receive a **g++: command not found** output to the terminal window, and you will execute both of the following commands: 

    `g++ --version`
    
    `sudo apt install g++`
    
3. IFF you would like to use Visual Studio Code (VS Code) ensure you have it installed on your system. Click on **Show Applications** (3x3 matrix of squares) in the bottom left of your screen to verify VS Code is installed. If not, simply open **Ubuntu Software** and download and install VS Code (referred to as simply code) from the software store. If you'd prefer to verify, and if necessary to do everything from the terminal use the following commands (if first command outputs version data skip the other step):

    `code --version`
    
    `sudo apt update && sudo apt install code`
    
4. Setting up Visual Studio Code and download necessary extensions. To access VS Code extensions click on the extensions icon in the vertical list of icons along the left side of an open VS Code window. At the very least, you will need to download the C/C++ Microsoft verified extension to use VS Code for C++ development:

    - C/C++
    

