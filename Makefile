all: main.c
	gcc main.c -o pwdgen -O2 -Wall

clean:
	rm -f pwdgen
