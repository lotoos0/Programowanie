// prog_1_4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <stdio.h>
#include <math.h>

float add(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	return a - b;
}

float mul(float a, float b)
{
	return a * b;
}

float divi(float a, float b)
{
	return a / b;
}



void test_add()
{
	printf("Test 1 \n\t Oczekiwano: 3\n\t a uzyskano: %g", add(1, 2));
	printf("\nTest 2 \n\t Oczekiwano: 4.1\n\t a uzyskano: %g", add(2.1, 2.0));
	printf("\nTest 3 \n\t Oczekiwano: 0.5\n\t a uzyskano: %g", add(0.2, 0.3));
	printf("\nTest 4 \n\t Oczekiwano: 6.4\n\t a uzyskano: %g", add(6, 0.4));
	printf("\nTest 5 \n\t Oczekiwano: 42\n\t a uzyskano: %g", add(42, 0.0));
	printf("\nTest 6 \n\t Oczekiwano: 0.000001\n\t a uzyskano: %g", add(0.000001, 0.0));
}	 

void test_sub()
{
	printf("Test 1 \n\t Oczekiwano: -1\n\t a uzyskano: %g", sub(1, 2));
	printf("\nTest 2 \n\t Oczekiwano: 0.5 \n\t a uzyskano: %g", sub(2.0, 1.5));
	printf("\nTest 3 \n\t Oczekiwano: 0.1\n\t a uzyskano: %g", sub(0.2, 0.1));
	printf("\nTest 4 \n\t Oczekiwano: 5.6\n\t a uzyskano: %g", sub(6, 0.4));
	printf("\nTest 5 \n\t Oczekiwano: 42\n\t a uzyskano: %g", sub(42, 0.0));
	printf("\nTest 6 \n\t Oczekiwano: 0.000001\n\t a uzyskano: %g", sub(0.000001, 0.0));
}

void test_mul()
{
	printf("Test 1 \n\t Oczekiwano: 2\n\t a uzyskano: %g", mul(1, 2));
	printf("\nTest 2 \n\t Oczekiwano: 3 \n\t a uzyskano: %g", mul(2.0, 1.5));
	printf("\nTest 3 \n\t Oczekiwano: 0.02\n\t a uzyskano: %g", mul(0.2, 0.1));
	printf("\nTest 4 \n\t Oczekiwano: 2.4\n\t a uzyskano: %g", mul(6, 0.4));
	printf("\nTest 5 \n\t Oczekiwano: 0\n\t a uzyskano: %g", mul(42, 0.0));
	printf("\nTest 6 \n\t Oczekiwano: 0.000001\n\t a uzyskano: %g", mul(0.000001, 1.0));
}

void test_divi()
{
	printf("Test 1 \n\t Oczekiwano: 0.5\n\t a uzyskano: %g", divi(1, 2));
	printf("\nTest 2 \n\t Oczekiwano: 8.2  \n\t a uzyskano: %g", divi(20.5, 2.5));
	printf("\nTest 3 \n\t Oczekiwano: 2\n\t a uzyskano: %g", divi(0.2, 0.1));
	printf("\nTest 4 \n\t Oczekiwano: 15\n\t a uzyskano: %g", divi(6, 0.4));
	printf("\nTest 5 \n\t Oczekiwano: 1\n\t a uzyskano: %g", divi(42, 1));
	printf("\nTest 6 \n\t Oczekiwano: 0.000001\n\t a uzyskano: %g", divi(0.000001, 1.0));
}

void test_sin()
{

}
void test_cos()
{

}





void main(void)
{
	test_divi();
	
	
}

