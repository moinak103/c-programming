#include<stdio.h>
#include<conio.h>

    int main()
{
		// declaring two variables
      int age;
      int weight;

   
      // asking user to enter details
   	  printf("Please enter your age and weight\n");

   	  // getting users details
      scanf("%d%d",&age,&weight);

      // printing user details
      printf("Your age is %d\n Your weight is %d",age,weight);

      getch();
      return 0;


}    
