// WICLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"

#define _CRTDBG_MAP_ALLOC  
#include <crtdbg.h>

void printAndReverse()
{
	List list;
	list.printCSWomen();
	list.reverse();
	list.printCSWomen();
}

int main()
{
	printAndReverse();
	_CrtDumpMemoryLeaks();
    return 0;
}

