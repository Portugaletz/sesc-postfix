run:prog
	./prog
prog:prog.c
	gcc -std=c11 prog.c -o prog
build:prog
