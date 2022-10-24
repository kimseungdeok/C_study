intro_exe : BinaryTreeArray.o main.o
	gcc -o intro_exe BinaryTreeArray.o main.o

BinaryTreeArray.o : BinaryTreeArray.c
	gcc -c -o BinaryTreeArray.o BinaryTreeArray.c

main.o : main.c
	gcc -c -o main.o main.c

clean : 
	rm *.o intro_exe