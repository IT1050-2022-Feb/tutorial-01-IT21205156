/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int no1,no2;
  float average;

  printf("enter marks of 1st subject=");
  scanf("%d",&no1);
  printf("enter marks of 2nd subject=");
  scanf("%d",&no2);
  average=(no1+no2)/2;
  printf("average=%.2f",average);

  return 0;
}

