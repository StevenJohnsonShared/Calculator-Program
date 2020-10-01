/*
Name: Steven Johnson
Lab #
Date : 2/1/2019
Description: This is a calculator that does addition, subtraction, multiplication, division, modulus, and checks if a number is prime.
*/

#include <stdio.h>
static int i, baseNumber, Power, placeHolder, PrimeChecker, dividend, divisor, remainder, choice, addition1, addition2, subtraction1, subtraction2, multiplication1, multiplication2, stopPrime, answer, primeAnswer3, primeAnswer1, primeAnswer2; // USING STATIC VARIABLES BECAUSE MULTIPLE FUCNTIONS USE THE SAME VARIALBES

int main()
{
	print("This is a calculator that does addition, subtraction, multiplication, division, modulus, and checks if a number is prime.");
	printf("1: Addition\n");		// THIS BIT IS THE OPTIONS FOR WHAT CALCULATIONS YOU WANT TO DO
	printf("2: Subtraction\n");
	printf("3: Multiplication\n");
	printf("4: Division\n");
	printf("5: Modulus (integers only)\n");
	printf("6: Test if Prime (integers only)\n");
	printf("7: Factorial\n");
	printf("8: Power\n");
	printf("9: Fibonacci Sequence\n");
	printf("0: Exit\n\n");
	printf("Please Choose and Operation. \n");
	scanf("%d",&choice);
	
	if (choice==1)		// THIS IS THE ADDITION FUNCTION
	{	
		printf("Enter the First Number. \n");
		scanf("%d",&addition1);
		printf("Enter the Second Number. \n");
		scanf("%d",&addition2);
		answer = addition1 + addition2;
		printf("%d + %d = %d\n",addition1,addition2,answer);
		printf("The answer is %d\n\n\n",answer);
		main();
	}
	else if(choice==2)		// THIS IS THE SUBTRACTION FUNCTION
	{	
		printf("Enter the First Number. (will be subtraction from) \n");
		scanf("%d",&subtraction1);
		printf("Enter the Second Number. \n");
		scanf("%d",&subtraction2);
		answer = subtraction1 - subtraction2;
		printf("%d - %d = %d\n",subtraction1, subtraction2, answer);
		printf("The answer is %d\n\n\n",answer);
		main();
	}
	else if(choice==3)		// THIS IS THE MULTIPLICATION FUNCTION
	{		
		printf("Enter the First Number. \n");
		scanf("%d",&multiplication1);
		printf("Enter the Second Number. \n");
		scanf("%d",&multiplication2);
		answer = multiplication1 * multiplication2;
		printf("%d * %d = %d\n", multiplication1, multiplication2, answer);
		printf("The answer is %d\n\n\n",answer);
		main();
	}
	else if(choice==4)		// THIS IS THE DIVISION FUNCTION
	{		
		printf("Enter the First Number. (This number is the divided)\n");
		scanf("%d",&dividend);
		printf("Enter the Second Number. (This is the divisor)\n");
		scanf("%d",&divisor);
		answer = dividend / divisor;
		printf("%d / %d = %d\n\n",dividend,divisor,answer);
		main();
	}
	else if(choice==5)		// THIS IS THE MOD FUNCTION
	{		
		printf("Enter the first Number. (This number is the dividend)\n");
		scanf("%d",&dividend);
		printf("Enter the second Number. (This number is the divisor)\n");
		scanf("%d",&divisor);
		answer = dividend % divisor;
		printf("%d / %d = %d\n",dividend, divisor, answer);
		printf("The answer is %d\n\n\n",answer);
		main();
	}
	else if(choice==6)
	{		// THIS IS THE PRIME CHECKER
		printf("Enter the number you want to check. \n");
		scanf("%d",&PrimeChecker);
		for (i=2;i<(PrimeChecker-1);i++)
		{	// WHILE I IS LESS THAN THE NUMBER CHECKED I GOES UP BY 1 EACH CYCLE
			answer=PrimeChecker%i;
			if(answer==0)
			{
				stopPrime = 1;
				break;
			}
		}
		if (stopPrime==1)
		{		// IF THE FOR LOOP FOUND A NUMBER THAT THE PRIMECHECKER IS DIVISABLE BY THEN IT STOPS THEN FINDS THE NUMBERS
			primeAnswer1 = i;
			primeAnswer2 = PrimeChecker/primeAnswer1;
			printf("%d * %d = %d\n",primeAnswer1,primeAnswer2,PrimeChecker);
			printf("%d is not a prime number.\n\n",PrimeChecker);
			main();
		}
		else
		{
			printf("%d is a prime number.\n\n",PrimeChecker); // IF THE FOR LOOP DIDN'T FIND A NUMBER THAT PRIMECHECKER IS DIVISIALBE BY THEN IT PRINTS
			main();
		}

	}
	else if(choice==7)		// FACTORIAL FUNCTION
	{
		int baseNumber;
		unsigned long long int factorial = 1;
		printf("Enter the number you want the factorial of. \n");
		scanf("%d",&baseNumber);
		if(baseNumber < 0)
		{
			printf("Must be a positive number.");
		}else
		{
		
			for(i=baseNumber;i>2;i--)
			{
				factorial = factorial*i;
			}
		}	
		printf("%d! = %ld\n\n",baseNumber, factorial);
		main();
	}
	else if(choice==8)		// THIS GIVES YOU THE ANSWER TO RAISING A NUMBER TO A POWER
	{
		printf("What number do you want to raise? \n");
		scanf("%d",&baseNumber);
		printf("What power do you want to raise it to? \n");
		scanf("%d",&Power);
		placeHolder = baseNumber;
		for(i=1;i<Power;i++)
		{
			placeHolder = placeHolder * baseNumber;
		}
		printf("%d is %d raised to the %d power. \n\n",placeHolder,baseNumber,Power);
		main();
	}
	else if(choice==9)		// THIS OPTION FINDS THE AREA OF GIVEN SHAPES
	{
		int j,array[100];		// THE j STANDS FOR THE AMMOUNT OF TERMS TO BE SHOWN, j STANDS FOR THE AMMOUNT OF TIME THE FIBONACCI SEQUENCE WILL PRINT
		printf("How many terms do you want to see? ");
		scanf("%d",&j);
		array[0]=0; array[1]=1;
		for(i=2;i<j;i++)
		{
			array[i]=array[i-1]+array[i-2];
		}
		printf("The first %d numbers of the fibonacci sequence are: \n",j);
			for(i=0;i<j;i++)
			{
				printf("%d ",array[i]);
			}
			printf("\n\n\n");
			main();
	}
	else if(choice==0) // THIS IS THE EXIT FUNCTION
	{
		printf("Exiting\n");
		return 1;
	}
	else if(choice!=1 || choice!=2 || choice!=3 || choice!=4 || choice!=5 || choice!=6 || choice!=7 || choice!=8 || choice!=9 || choice!=0)		// THIS MAKES SURE THAT THE INPUT IS BETWEEN THE VALUES 1 AND 9
	{
		printf("Please pick an option between 1 and 0. \n\n");
		main();
	}
	while(choice!=0);
	{
		return 0;
	}
}

