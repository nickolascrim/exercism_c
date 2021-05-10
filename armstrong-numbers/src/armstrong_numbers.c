#include "armstrong_numbers.h"
#include <stdio.h>
#include <string.h>
#include <math.h>


bool is_armstrong_number(int candidate)
{
  int n = 0;

  for (int num = candidate; num > 0; num /= 10)
  {
    n++;
  }

  int sum = 0, remainder = 0;

  for (int num = candidate; num > 0; num /= 10)
  {
    remainder = num % 10;
    sum += pow(remainder, n);

  }

  return (sum == candidate);


}
