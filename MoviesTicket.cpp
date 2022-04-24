// Online C++ compiler to run C++ program online
#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
  string Movies_name;
  float adult_ticket_price;
  float chile_ticket_price;
  int number_adult_ticket_sold;
  int number_child_ticket_sold;
  float persentage_of_charity;
 
   
   cout<<"Enter movies name:";
   getline(cin,Movies_name);
   cout<<"Enter adult ticket price:";
   cin>>adult_ticket_price;
   cout<<"Enter child ticket price:";
   cin>>chile_ticket_price;
   cout<<"Number of adult ticket sold:";
   cin>>number_adult_ticket_sold;
   cout<<"Number of child ticket sold:";
   cin>>number_child_ticket_sold;
   cout<<"Enter percentage of charity:";
   cin>>persentage_of_charity;
   
   float Total_Sold_ticket=number_adult_ticket_sold+number_child_ticket_sold;
   float Gross_amount=(adult_ticket_price*number_adult_ticket_sold)+(chile_ticket_price*number_child_ticket_sold);
   float Amout_donated=Gross_amount*(int)persentage_of_charity/100;
   
   cout<<"_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;

   cout<<left<<setw(35)<<setfill('.')<<"Movies name:"<<" "<<right<<Movies_name<<endl;
   cout<<left<<setw(35)<<setfill('.')<<"Number of ticket sold:"<<" "<<fixed<<setprecision(2)<<setw(12)<<right<<setfill(' ')<<Total_Sold_ticket<<endl;
   cout<<left<<setw(35)<<setfill('.')<<"Gross Amout:"<<"$"<<fixed<<setprecision(2)<<right<<setw(12)<<setfill(' ')<<Gross_amount<<endl;
   cout<<left<<setw(35)<<setfill('.')<<"Persentage of gross amount Donated:"<<" "<<fixed<<setprecision(2)<<right<<setw(12)<<setfill(' ')<<persentage_of_charity<<"%"<<endl;
   cout<<left<<setw(35)<<setfill('.')<<"Amount Doated:"<<"$"<<fixed<<setprecision(2)<<right<<setw(12)<<setfill(' ')<<Amout_donated<<endl;
   cout<<left<<setw(35)<<setfill('.')<<"Net sale:"<<"$"<<fixed<<setprecision(2)<<right<<setw(12)<<setfill(' ')<<Gross_amount-Amout_donated<<endl;
    
}
