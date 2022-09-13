#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Title: 0-positive_or_negative.c
 *main - assigns a random number to n where n is positive or zero or negative
 *explanation: variable n stores a different value at every program run
 *Return: 0
 */

int main(void);

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
return (0);
}
