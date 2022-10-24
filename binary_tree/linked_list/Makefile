intro_exe : BinaryTreeList.o main.o
	gcc -o intro_exe BinaryTreeList.o main.o

BinaryTreeList.o : BinaryTreeList.c
	gcc -c -o BinaryTreeList.o BinaryTreeList.c

main.o : main.c
	gcc -c -o main.o main.c

clean : 
	rm *.o intro_exe