# 7segements

The goal is to write a command line tool that displays a number as 7-segmented digits.

Currently the source is 157 bytes in length.

## Build:

    gcc -w -o 7segments 7segments.c

## Run:

    ./7segments 123

## Output:

        _   _
     |  _|  _|
     | |_   _|

This project is just for fun and learning purposes.

## Oneliner

You can compile and start the program in a single line of code with this snippet.

    echo -e "#define L(u)c=a[1];for(;*c;)printf(\"%c%c%c%c\",y&u/4?124:32,y&u?95:32,(y=\"t\!Zj+hx\$|l\"[*c++-48]+3)&u/2?124:32,c[1]?32:10);\nmain(int y,int**a){char*L(1)L(8)L(64)}" | gcc -xc -w -o 7segments - && ./7segments 1234567890