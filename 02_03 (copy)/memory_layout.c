#include<stdio.h>
#include<stdlib.h>
int global;//uninitialised global variable store in bss-block started by symbol
int globall=2;// initialised global variable store in data segment
int main()
{
	static int stat;//unisitialised static variable store in bss
	static int statt=3;//inistialised static variable store in data segment
	int local=5;// local variable store in stack segment
	int *heap=malloc(sizeof(int)*2);// dma in heap


	
	printf("global uninitialised=%d --address=%p\n",global,&global);
	printf("globall initialised=%d --address=%p\n",globall,&globall);
	printf("static uninitialised=%d --address=%p\n",stat,&stat);
	printf("static initialised=%d --address=%p\n",statt,&statt);
	printf("local =%d --address=%p\n",local,&local);
	printf("heap--address=%p\n",heap);
}

