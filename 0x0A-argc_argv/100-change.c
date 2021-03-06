#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/**
* coin_cal - Helper function that does all the mathematics
* @cents: int for number of cents
* Return: int for minimum number of coins
*/
int coin_cal(int cents)
{
int coins[5] = {25, 10, 5, 2, 1};
int coin_type[5] = {0, 0, 0, 0, 0};
int i, j = 0, s = 0;
for (i = 0; i < 5; i++)
{
j = 0;
while (cents > 0)
{
cents -= coins[i];
if (cents < 0)
{
cents += coins[i];
break;
}
++j;
coin_type[i] = j;
}
if (cents < 0)
{
cents += coins[i];
break;
}
}
for (i = 0; i < 5; i++)
s += coin_type[i];
return (s);
}
/**
* main - program that print the minimum number of coins to make
* change for an amount of money
* @argc: int of arguments passed into program including command
* @argv: array of pointers to the strings of arguments passed
* Return: 0
*/
int main(int argc, char *argv)
{
int cents, sum = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(*(argv + 1));
if (cents < 0)
printf("%d\n", sum);
else
{
sum = coin_calc(cents);
printf("%d\n", sum);
}
return (0);
}
