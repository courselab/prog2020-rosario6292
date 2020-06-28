/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int x;
  x = day % 7;
  if(month == 1 || month == 4 || month ==7){
    if(x==0){
      return 2;
    }
    if(x==1){
      return 3;
    }
    if(x==2){
      return 4;
    }
    if(x==3){
      return 5;
    }
    if(x==4){
      return 6;
    }
    if(x==5){
      return 0;
    }
    if(x==6){
      return 1;
    }
  }
if(month == 2 || month == 8 ){
    if(x==0){
      return 5;
    }
    if(x==1){
      return 6;
    }
    if(x==2){
      return 0;
    }
    if(x==3){
      return 1;
    }
    if(x==4){
      return 2;
    }
    if(x==5){
      return 3;
    }
    if(x==6){
      return 4;
    }
  }
  if(month == 3 || month == 11){
    if(x==0){
      return 6;
    }
    if(x==1){
      return 0;
    }
    if(x==2){
      return 1;
    }
    if(x==3){
      return 2;
    }
    if(x==4){
      return 3;
    }
    if(x==5){
      return 4;
    }
    if(x==6){
      return 5;
    }
  }
  if(month == 5){
    if(x==0){
      return 4;
    }
    if(x==1){
      return 5;
    }
    if(x==2){
      return 6;
    }
    if(x==3){
      return 0;
    }
    if(x==4){
      return 1;
    }
    if(x==5){
      return 2;
    }
    if(x==6){
      return 3;
    }
  }
  if(month == 6){
    if(x==0){
      return 0;
    }
    if(x==1){
      return 1;
    }
    if(x==2){
      return 2;
    }
    if(x==3){
      return 3;
    }
    if(x==4){
      return 4;
    }
    if(x==5){
      return 5;
    }
    if(x==6){
      return 6;
    }
  }
  if(month == 9 || month == 12){
    if(x==0){
      return 1;
    }
    if(x==1){
      return 2;
    }
    if(x==2){
      return 3;
    }
    if(x==3){
      return 4;
    }
    if(x==4){
      return 5;
    }
    if(x==5){
      return 6;
    }
    if(x==6){
      return 0;
    }
  }
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
