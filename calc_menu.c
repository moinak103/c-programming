// Chose what you want to do 

/*
1.> Addition
2.> Substration
3.> Multiplication. 
4.> Division
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int option;
	int num_one;
	int num_two;

	printf("What do you want to do ? Please select \n\n");
	printf("1.> Addition");
	printf("2.> Multiplication");
	printf("3.> Division");
	printf("4.> Substraction");
	int option;

	scanf("%d",&option);

	// enter the two numbers.d
	printf("Enter the first number \n");
	scanf("%d",&num_one);

	printf("Enter the second number \n");
	scanf("%d",&num_two);
	
	printf("You have selected option %d",option);

	if(option ==1)
	{
		add(num_one,num_two);
	}
	else if(option ==2)
	{
		multiplication(num_one,num_two);
	}
	else if(option ==3)
	{

	}
	else if(option == 4)
	{

	}
	else
	{
		printf("Please select from a valid option from 1-4")d;
		return;
	}


}

int add(int num_one,int num_two)
{
	num_one = 
}

int Substraction()
{

}

int Division(num_one,num_two)
{

}

int multiplication(num_one,num_two)
{
	
}