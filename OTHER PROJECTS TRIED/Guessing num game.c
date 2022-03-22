//C PROGRAM PROJECT:


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void g(int N) //guess is written as g
{
	int num, g, numberofguess = 1;

	num = rand() % N;

	printf("Can you Guess a number between"
		" 1 and %d\n",
		N);
	do {

		if (numberofguess > 6) {
			printf("\nOOPS! You Loose!\n");
			break;
		}

	
		scanf("%d", &g);
		
		if (g > num)

		{
			printf("Come on give me a lower number than that \n");
			numberofguess++;
		}

	
		else if (num > g)

		{
			printf("Come on give me a higher number than that \n");
			numberofguess++;
		}

		
		else
			printf("Congratulations! You guessed the"
				" number in %d "
				"attempts!\n",
				numberofguess);

	} while (g != num);
}

// Code that mainly runs
int main()
{
	int N = 100;

	// I call the function here
	g(N);

	return 0;
}


