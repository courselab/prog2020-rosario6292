/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/
void sort (int *a, int *b, int *c)
{
 int g, m, p;
 if(*a>=*b && *a>=*c)
 {
   g=*a;
   if(*b>=*c){
     m=*b;
     p=*c;
   }
   if(*b<=*c){
     m=*c;
     p=*b; 
   }
   *a=p;
   *b=m;
   *c=g;
 } 
 if(*b>=*a && *b>=*c)
 {
   g=*b;
   if(*a>=*c){
      m=*a;
      p=*c;
   }
   if(*a<=*c){
      m=*c;
      p=*a;
   }
    *a=p;
    *b=m;
    *c=g;
 }
 if(*c>=*a && *c>=*b)
 {
   g=*c;
   if(*a>=*b){
      m=*a;
      p=*b;
   }
   if(*a<=*b){
      m=*b;
      p=*a;
   }
    *a=p;
    *b=m;
    *c=g;
 }
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
