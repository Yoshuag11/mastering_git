all: src/rand.c
	gcc -std=c99 -Wall -Wextra -o rand src/rand.c