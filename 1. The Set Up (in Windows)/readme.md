# Using Windows10`s  Ubuntu Support.
# Install gcc, g++, ncurses library  
    sudo apt-get update
    sudo apt-get install gcc
    sudo apt-get install g++
    sudo apt-get install libncurses5-dev libncursesw5-dev
# Compile
    gcc  filename  -lncurses -o  exename
        
