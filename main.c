#include <stdio.h>
#include <stdlib.h>

void simpleInterest(void);
void compoundInterest(void);

int main(void)
{

  int operation;

  printf("This calculator determines the final amount. \n");
  printf("Type 1 for 'simple interest' or type 2 for 'compound interest': ");

  do
  {
    scanf("%i", &operation);
  } while (operation != 1 && operation != 2);

  printf("The interest rate and time must refer to the same unit of time. \n");
  printf("Use a period ( '.' ) to separate decimal places.");

  (operation == 1) ? simpleInterest() : compoundInterest();

  return 0;
}

void simpleInterest(void)
{
  float result;

  float initialValue;
  float interestRate;
  float time;

  printf("Type the initial value: ");
  scanf("%f", &initialValue);

  printf("Type the interest rate ( write in decimal ): ");
  scanf("%f", &interestRate);

  printf("Type the time: ");
  scanf("%f", &time);

  result = initialValue + (initialValue * interestRate * time);
  printf("final amount: %f", result);
}

void compoundInterest(void) {}
