#include<stdio.h>
#include<conio.h>

int main()
{
	int age;

	printf("Please enter your age\n");

	scanf("%d",&age);
 if ( age < 18)
 {
   printf("Sorry, your are below the compatible age group.");
 }else{

 	printf("Congrats, you are above the compatible age group!");
 }




	getch();
	return 0;
}