/* m001.c - Greatest of two.

   This program takes three integers read as command 
   line arguments and outputs the greatest among them.

   E.g.

      command line    : m001 5 20 7
      expected output : 20

   Directions:

      Please, edit function greatest();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m001 <num1> <num2> <num3>\n"

/* Return the greatest among a, b and c. */

int greatest(int a, int b, int c)
{
  if(a > b && a > c){
    return a;
  }
   else if (b > a && b > c){
     return b;
   }
   else if (c > a && c > b){
     return c;
   }
   else if (a == b && a > c){
      return a;
   }
   else if (a == b && a < c){
      return c;
   }
    else if (a == c && a > b){
      return a;
   }
    else if (a == c && a < b){
      return b;
   }
    else if (c == b && a > c){
      return a;
   }
   else{
     return c;
   }
}
/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;
  int g;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }
  
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  g = greatest (a, b, c);
  
  printf ("%d\n", g);
  
  return 0;
}
