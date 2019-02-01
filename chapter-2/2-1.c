/* Write a program to determine the ranges of char, short, int,
and long variables, both signed and unsigned, by printing appropriate
values from standard headers and by direct computation. */

#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("\nBits of type char: %d\n\n", CHAR_BIT);                     

  printf("Maximum value of type unsigned char: %u\n", UCHAR_MAX);   
  printf("Maximum value of type signed char: %d\n", SCHAR_MAX);        
  printf("Minimum value of type signed char: %d\n\n", SCHAR_MIN);      

  printf("Maximum value of type unsigned short: %u\n", USHRT_MAX);   
  printf("Maximum value of type signed short: %d\n", SHRT_MAX);               
  printf("Minimum value of type signed short: %d\n\n", SHRT_MIN);

  printf("Bits of type int: %d\n\n", WORD_BIT);                             

  printf("Maximum value of type unsigned int: %u\n", UINT_MAX);      
  printf("Maximum value of type signed int: %d\n", INT_MAX);                  
  printf("Minimum value of type signed int: %d\n\n", INT_MIN);  

  printf("Bits of type long: %d\n\n", LONG_BIT);                                     

  printf("Maximum value of type unsigned long: %lu\n", ULONG_MAX);   
  printf("Maximum value of type signed long: %ld\n", LONG_MAX);               
  printf("Minimum value of type signed long: %ld\n\n", LONG_MIN);             

  return 0;
}