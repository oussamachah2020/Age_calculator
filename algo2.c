#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// function to calculate current age
void age()
{
  int month_days[] = {31,30,31,30,31}; //an array for the final_day difference
  int present_year,present_month,present_day;
  int birth_year,birth_month,birth_day;

  printf("\n\tEnter present_date (dd/mm/yy): ");
  scanf("%d/%d/%d",&present_day,&present_month,&present_year);
  printf("\n\tEnter your birth_date (dd/mm/yy): ");
  scanf("%d/%d/%d",&birth_day,&birth_month,&birth_year);

  int day;
  int month;
  int year = (present_year - birth_year) - 1;

    if(day == 30 || day == 31) //one month have 31 or 30 days
    {
      ++month;
    }
    if(month == 12) // 1 year = 12 months
    {
      ++year;
    }

  if(present_day > birth_day)
  {
    day = present_day - birth_day;
  }else {
    day = (present_day - birth_day) * (-1);
  }

  if(present_month > birth_month)
  {
    month = (present_month - birth_month) + 12;
  }else {
    month = (present_month - birth_month) * (-1);
  }

  int flag;

  if(year%400 == 0 || year%4 == 0) // for the leap year
  {
    flag = 1;
  }else
    flag = 0;

    printf("\n\tYour age is : %d year %d months and %d days",year,month,day);
}


int main()
{
  age(); //passing the age function
  return 0;
}
