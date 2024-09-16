#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int Pointers() 
{
  int myvar = 3003;  // variable declaration
  int* pointerDec = &myvar;  // pointer declaration 
  int dereference = *pointerDec;
  int myNums[5] = {1,2,3,4,5};
  printf("%ld size of == ", sizeof(myNums));
  printf("%d \n ", myvar);
  printf("%p ", pointerDec);
  printf("%d ", dereference);
  return 0;
}

int userPrompt() 
{
    int ALLOC_SIZE_FIRST_NAME = 19;
    int ALLOC_SIZE_LAST_NAME = 19;
    char userInputFirstName[ALLOC_SIZE_FIRST_NAME];
    char userInputLastName[ALLOC_SIZE_LAST_NAME];

    printf("enter your firstName:");
    scanf("%19s", userInputFirstName);

    printf("enter your lastname:");
    scanf("%19s", userInputLastName);
        
    // print the final Message
    printf("Hello %s %s!\n", userInputFirstName ,userInputLastName);
    return 0;
}

int main(void) {
        // printf("Hello world\n");
        // int number = 45;
        // float n = 4.12;
        // char string[] = "Hey guys it's my first time wrting C code";
        // printf("d is a integer %d\n", number);
        // printf("%f is a float \n", n);
        // printf("%s\n", string);
    // function call 
    
    // userPrompt();
    Pointers();
    return 0;
}