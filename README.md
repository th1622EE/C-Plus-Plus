# Welcome to my Learning Basic C++ Repository

## Introduction

C++ is a general purpose, compiled, statically typed, object-oriented, high-level programming language. The C++ language is compliled, which means the software must be converted from high-level source code into machine code executables which are specific to **each** operating system for which the code is intended to run. This means a program and/or application for which you intend to run on Windows and Linux, must both be independently compiled for each of the two systems. Statically typed means the data types of variables and objects must be defined at compile time. While the language is object-oriented, the language also supports generic and procedural programming as well. While often considered to be a high-level language, the code it notoriously closer to the hardware than other "high-level" languages such as Python, which is why you may also see it referred to as a mid-level language.

The language itself is built around the C++ Standard Library which is composed of the entire C Standard Library, with additional libraries to support object-oriented programming, as well as additional features which have evolved with the language over the years. There are also a large number of third-party libraries available for use extending the functionality of C++ to more specific use cases. In addition to the C++ Standard Library, there is the Standard Template Library which was developed to more easily implement data structures and algorithms. The C++ language is considered to be a more difficult language for beginners to learn; however, it is very commonly the first language taught to Electrical Engineering graduates because of how closely the language is built around the manipulation and/or interfacing of hardware through software in many common use cases for the language. Some of these common use cases for the language include the following:

   1. Compiler design
   2. Embedded systems
   3. Operating systems
   4. Game development
   5. Distributed systems 

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

   ```
   ctrl + alt + t
   ```
   
2. Verify the g++ (C++) compiler is installed on your system by typing the following command in bash terminal. If so, information about g++ to include but not limited to version will be displayed, and you will skip the second command. If not, you will receive a **g++: command not found** output to the terminal window, and you will execute both of the following commands: 

    ```
    g++ --version
    ```
    
    ```
    sudo apt update && sudo apt install g++
    ```
    
3. IFF you would like to use Visual Studio Code (VS Code) ensure you have it installed on your system. Click on **Show Applications** (3x3 matrix of squares) in the bottom left of your screen to verify VS Code is installed. If not, simply open **Ubuntu Software** and download and install VS Code (referred to as simply code) from the software store. If you'd prefer to verify, and if necessary to do everything from the terminal use the following commands (if first command outputs version data skip the other step):

    ```
    code --version
    ```
    
    ```
    sudo apt update && sudo apt install code
    ```
    
4. Setting up Visual Studio Code and download necessary extensions. To access VS Code extensions click on the extensions icon in the vertical list of icons along the left side of an open VS Code window. At the very least, you will need to download the C/C++ Microsoft verified extension to use VS Code for C++ development:

    - C/C++
    

