/*
Dania Nasereddin
2-16-21
This program generates the number of elements of the fibonacci sequence given by user
input.
*/

#include<stdio.h>

int main()
{

  unsigned long int i, num, n1 = 0, n2 = 1,  sum = 0;
  printf("Please enter the number to be generated. \n"); //input from user to stop fibonacci numbers
  scanf("%ld",&num);
  printf("The first <%ld> elements of the Fibonacci sequence are: \n", num); //prints back input

  for(i = 1; i <= num; i++) //prints out secuence
  {
    if(i <= 1) //starts at 1
    {
      sum = i;
    }
    else //calculates next number
    {
      sum = n1 + n2;
      n1 = n2;
      n2 = sum;
    }
    printf(" %ld",sum); //prits rest of secuence till user input
  }
  printf("\n");
  return 0;
}
