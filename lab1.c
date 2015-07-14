/***********************************************************************
* Program:
*    Lab C_lab, ECEN 324 Learning C Lab
*    Brother Jones, ECEN 324
* Author:
*    James Criddle
* Summary:
*    The purpose of this program was to convert the c++ program
*    that did various simple things like print to the console,
*    work with cerr and cin and finding their equivalent in c,
*    play with variables, play with c literals, work with
*    loops and finally using pointers in c
************************************************************************/

#include <stdio.h>
#include "stdlib.h"
#define PI 3.1415926

/***********************************************************************
* descriptive text goes here
***********************************************************************/
int main (void)
{
   // Printing various items with printf
 
   const char LETTER = 'A';
   printf("24\n");
   printf("%0.5f\n", PI);
   printf("%c\n", LETTER);
 
   float payRate = 10.50;
   int hours = 40;
 
   printf("Users pay rate: $%.1f\n", payRate); 
   printf(" Hours worked: %d\n", hours);
   printf("    Gross Pay: $%.0f\n", (int)hours*payRate);
 
   int number;
   fprintf(stderr, "Enter number: ");
   scanf("%d", &number);
   printf("Twice %d is %d\n" , number, number*2);
 
   /*********************************************************************/
   /*********************** Output an Integer ***************************/
   /*********************************************************************/
   int anInt = 99;
   float aFloat = 43.2;
 
   // Output the integer with the default formatting.
   
   printf("\n");                      // output a blank line
   printf("Integer: %d ###\n", anInt);
 
   // Output the integer in a fixed field width of 10.
   
   printf("Integer: %10d ###\n", anInt);
 
   // Output the integer in a fixed field width of 10
   // and left justified in the field.
   
   printf("Integer: %-10d ###\n\n", anInt);
 
   
   /*********************************************************************/
   /************************* Output a Float ****************************/
   /*********************************************************************/
 
   // Output the float with 1 decimal point.
   
   printf("  Float: %0.1f ###\n", aFloat);
 
   // Output the float in a fixed field width of 10, left justified
      
   printf("  Float: %-10.1f ###\n", aFloat);
 
   // Output the float right justified in a field width of 10 with  
   // a precision of 2 places after the decimal point for the float. 
   
   printf("  Float: %10.2f ###\n", aFloat);
   
   // Output the float with 3 places of precision after the decimal point but
   // not giving a field width.
   
   printf("  Float: %0.3f ###\n", aFloat);
 
   // Output the float with 3 places of precision after the decimal point with
   // a field width of 10.  
   
   printf("  Float: %10.3f ###\n", aFloat);
  
   // Output the float with 4 places of precision after the decimal point with 
   // a field width of 10 and left justify the number.
   
   printf("  Float: %-10.4f ###\n\n", aFloat);
 
   /*********************************************************************
    *************** Create some code to output a table ******************
    *********************************************************************/

   int num = 97;
   printf("\tOct   Dec   Hex   Char\n");
   printf("\t----------------------\n");
   int i = 0;
   for (i; i < 26; i++)
   {
      printf("\t%o   %-3d   %2x   %2c\n", num+i, num+i, num+i, num+i);
   }
   printf("\n");
   
   /*********************************************************************
    *************** Now play with pointers to finish up *****************
    *********************************************************************/
 
   int *p1;
   int *p2;

   // malloc is the c equiv. way of allocating memory
   p1 = malloc(10 * sizeof(int));
   
   *p1 = 42;
   p2 = p1;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n", *p2);
 
   *p2 = 53;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n",*p2);
 
   p1 = malloc(10 * sizeof(int));
   *p1 = 88;
   printf("*p1 == %d\n", *p1);
   printf("*p2 == %d\n", *p2);
 
   printf("Hope you got the point of this example!\n");

   // free() is the equiv way of deleting allocated memory
   // prevents memory leaks
   free(p1);

   return 0;
}

