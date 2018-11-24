#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include "Programowanie_1.h"
#include <string>




int Days[] = {31,59,90,120,151,181,212,243,273,304,334,365};
int nDays[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

char tydzien[7][13] = { "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };


int CoutDay(int day, int month, int year)
{
	int dayofyear;
	int score;
	int yy, c, g;

	dayofyear = day + nDays[month - 1]; //13


	yy = (year - 1) % 100; //18
	c = (year - 1) - yy; //2000
	g = yy + (yy / 4); //22
	score = (((((c / 100) % 4) * 5) + g) % 7); //1
	score += dayofyear - 1;
	score %= 7; //6
	return score;
}

int main()
{
	int m, d, r, score;
	printf("Podaj d: ");
	scanf("%d", &d);
	printf("Podaj m: ");
	scanf("%d", &m);
	printf("Podaj r:");
	scanf("%d", &r);
	score = CoutDay(d, m, r);
	printf("%s", tydzien[score]);

	return 0;
}