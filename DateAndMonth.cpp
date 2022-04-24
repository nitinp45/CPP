#include<iostream>

using namespace std;
const string Mon[]={"Jan","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
const int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
struct Date
{
  int date;
  int month;
  int year;
};

void Display(struct Date str);
void leapYear(struct Date str);
void Diff(struct Date str);
int main()
{
  struct Date DT;

  cout<<"Enter date:";
  cin>>DT.date;
  if(DT.date>31)
  {
    cout<<"Enter date is invlid";
    return 0;
  }
  cout<<"Enter month:";
  cin>>DT.month;
  if(DT.month>12)
  {
     cout<<"Enter month is invlid";
     return 0;
  }
  cout<<"Enter year:";
  cin>>DT.year;
  Display(DT);
  leapYear(DT);
  Diff(DT);




  return 0;
}
void Display(struct Date str)
{

   cout<<"1]";
   cout<<str.date<<":"<<str.month<<":"<<str.year<<endl;
   cout<<"2]";
   cout<<str.date<<":"<<Mon[str.month-1]<<":"<<str.year<<endl;


}
void leapYear(struct Date str)
{
  if(str.year%4==0 && str.year%400==0 &&  str.year%100!=0)
  {
      cout<<"Enter year "<<str.year<<"is leap year"<<endl;
  }
  else
  {
        cout<<"Enter year "<<str.year<<" is not leap year"<<endl;
  }
}
void Diff(struct Date str)
{
   int date,month,year,dateDiff=0,monthDiff=0,yearDiff=0;

   cout<<"Enter data:";
   cin>>date;
   if(date>31)
   {
     cout<<"Enter date is invlid";
     return;
   }
   cout<<"Enter month:";
   cin>>month;
   if(month>12)
   {
     cout<<"Enter month is invlid";
   }
   cout<<"Enter year:";
   cin>>year;



   if(str.month==month && str.year==year && str.date==date)
   {
      monthDiff=0;
      yearDiff=0;
      dateDiff=0;
   }
   else if(str.month==month && str.year==year)
   {
      monthDiff=0;
      yearDiff=0;
      if(str.date>date)
      {
         dateDiff=str.date-date;
      }
      else
      {
         dateDiff=date-str.date;
      }

   }
   else if(str.year==year)
   {

      if(str.month>month)
      {



        for(int i=month;i<str.month-1;i++)
        {
           dateDiff+=monthDay[i];
        }
        dateDiff+=(monthDay[month-1]-date);
        dateDiff+=str.date;
        monthDiff=str.month-month;
        yearDiff=0;

      }
      else
      {


           for(int i=str.month;i<month-1;i++)
         {
           dateDiff+=monthDay[i];
         }
         dateDiff+=(monthDay[str.month-1]-str.date);
         dateDiff+=date;


         monthDiff=month-str.month;
         yearDiff=0;
      }

   }
   else
   {
       if(str.year>year)
       {

           for(int i=year+1;i<str.year;i++)
           {
               if(i%4==0 || i%400==0 && i%100!=0)
               {
                  dateDiff+=366;
               }
               else
               {
                   dateDiff+=365;
               }

           }
           for(int j=month;j<12;j++)
           {
               dateDiff+=monthDay[j];
           }
           dateDiff+=monthDay[month-1]-date;

           for(int k=0;k<str.month;k++)
           {
               dateDiff+=monthDay[k];
           }
           dateDiff+=str.date;
           monthDiff+=(12-month)+str.month;

       }
       else
       {
           for(int i=str.year+1;i<year;i++)
           {
               if(i%4==0 || i%400 && i%100!=100)
               {
                   dateDiff+=366;
               }
               else
               {
                   dateDiff+=365;
               }
           }
           for(int j=str.month;j<12;j++)
           {
               dateDiff+=monthDay[j];
           }
           monthDiff+=monthDay[str.month-1]-str.date;

           for(int k=0;k<month;k++)
           {
               dateDiff+=monthDay[k];
           }
           dateDiff+=date;
           monthDiff+=(12-str.month)+month;
       }
   }
   cout<<"Day Diff:"<<dateDiff<<endl;
   cout<<"Month Diff:"<<monthDiff<<endl;
   cout<<"Year Diff:"<<yearDiff<<endl;

}




