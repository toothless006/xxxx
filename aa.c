#include<stdio.h>
//function of declaration
void greet();
//Main Function
int main() {
//variable declaration
   int x=5;
//statement
   printf("hello world!\n");
   //function
  greet();
  return 0;
}
//functioon defination
void greet() {
  printf("greetings from the function!\n");
}
