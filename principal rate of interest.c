#include <stdio.h>

int main()
{ float p,r,t,si;

  printf("enter principal ammount:\n");
  scanf("%f",&p);

  printf("enter rate of interest:\n");
  scanf("%f",&r);

  printf("enter the period of time:\n");
  scanf("%f",&t);

  si=(p*r*t)/100;
  printf("simple interest=%.2f\n",si);
  return 0;

}
