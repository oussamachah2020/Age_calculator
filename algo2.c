#include <stdio.h>
#include <stdlib.h>
// function to calculate current age
void age()
{
  int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//the days of every month in a year
  int present_date,present_month,present_year,birth_date,birth_month,birth_year;
  int year,month,day;

  printf("Enter the present_date(mm/dd/yy): ");
  scanf("%d/%d/%d",&present_date,&present_month,&present_year);
  printf("Enter the birth_date(mm/dd/yy): ");
  scanf("%d/%d/%d",&birth_date,&birth_month,&birth_year);

    // to get the actual age
   if (birth_date > present_date) {
      present_date = present_date + month_days[birth_month - 1];
      present_month = present_month - 1;
   }
  
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   
   
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age : %d years  %d months and %d days", final_year, final_month, final_date);

}


int main()
{
  age();//passing the age function
  return 0;
}


