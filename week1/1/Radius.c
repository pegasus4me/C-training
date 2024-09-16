#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Defining macros with constant value 
#define PI 3.14

int Area(void) {
  float radius; 
  
  printf("enter the Radius of your Circle :");
  scanf("%f", &radius);
  
  // Area forumla :  A = p * radius^2
  float area; 
  area = PI * (radius * radius);
  printf("%f the area is : ", area);
  return 0;
}

int main(void) {
    Area();
    return 0;
}