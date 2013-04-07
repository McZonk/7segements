# 7segements

The goal is to write a command line tool that displays a number as 7-segmented digits.

Currently the source is 165 bytes in length.

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

You can compiled and start the program in a single line of code with this snippet.

    echo -e "#define L(u,v)c=a[1];for(;*c;)printf(\"%c%c%c%c\",y&u?124:32,y&v?95:32,(y=\"|O6VYNnX~^\"[*c++-48]+1)&u*2?124:32,c[1]?32:10);\nmain(int y,int**a){char*L(0,1)L(8,2)L(32,4)}" | gcc -xc -w -o 7segments - && ./7segments 123