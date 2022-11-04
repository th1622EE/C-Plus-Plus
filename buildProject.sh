#! /bin/bash

# The top line of a bash shell script is called the shebang which indicates which shell
# is to be used to execute the file

# Change from top-level directory into the source directory
cd src

# The following lines change to the individual directories of the specific inmplementation
# file (i.e., file.cpp) and builds the file and outputs the executable to the executable dir

cd Inheritance && g++ -Wall inheritance.cpp -o ../../executable/inheritance.out

cd ../Maps && g++ -Wall maps.cpp -o ../../executable/maps.out
