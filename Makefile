main: main.c os.o
	gcc -Werror -Wall -nostdlib -nostartfiles -static os.o main.c -o main
	strip main

os.o: os.asm
	nasm -felf64 ./os.asm -o os.o

