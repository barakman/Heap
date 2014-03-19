#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "..\Heap.h"


typedef int ITEM;
#define SIZE 1000
#define RANGE 100


int main()
{
	ITEM* pItem;
	ITEM aArray[SIZE];
	Heap<MIN_TYPE,ITEM> cHeap(SIZE);

	srand((unsigned int)time(NULL));

	for (int i=0; i<SIZE; i++)
	{
		aArray[i] = rand()%RANGE;
		cHeap.AddItem(aArray+i);
	}

	for (int i=0; i<SIZE; i++)
	{
		cHeap.GetBest(&pItem);
		printf("%d\n",*pItem);
	}

	return 0;
}
