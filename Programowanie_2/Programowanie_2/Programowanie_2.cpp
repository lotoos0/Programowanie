#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <time.h>

int main()
{
	time_t czas;
	time(&czas);
	printf("Czas lokalny: %s\n", ctime(&czas));
	return 0;
}

