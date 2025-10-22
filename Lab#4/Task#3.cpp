//...................Task#3.................   
 #include<iostream>
#include <iomanip>
#include <iomanip>
using namespace std;

void area_of_circle();
void area_of_rectangle();
void area_of_triangle();

int main()
{
       int choice;
       cout<<"Enter your choice to find the area :"<<endl;
       cout<<"1_Area of Circle ⭕ "<<endl;
       cout<<"2_Area of rectangle."<<endl;
       cout<<"3_Area of triangle 📐."<<endl;
       cout<<"4_Quit"<<endl;
       cin>>choice ;
       switch(choice){
              case 1: area_of_circle();break;
              case 2: area_of_triangle();break;
              case 3: area_of_triangle();break;
              case 4:cout<<"Goodbye 👋";break;
              default:cout<<" ❌ Invalid input ";break;
       }
     return 0;
 }    
     
void area_of_circle (){
        const double pi=3.14;
        double radius;
        cout<<"Enter the float value of radius of circle: "<<endl;
        cin>>radius;
        cout<<"Area of Circle ⭕ is "<<(pi*radius*radius)<<endl;
 }
void area_of_rectangle(){
        double length, width;
        cout<<"Enter the float value of length of rectangle: ";
        cin>>length;
        cout<<"Enter the float value of width of realctangle: ";
        cin>>width;
        cout<<"The area of the Rectangle is: "<<(length*width)<<endl;
 }        
void area_of_triangle(){
        double base, perpendicular;
        cout<<"Enter the base (float) vale of triangle 📐: ";
        cin>>base;
        cout<<"Enter the perpendicular (float) value of triangle 📐 : ";
        cin>>perpendicular;
        cout<<"The area of triangle 📐 is "<<(0.5*(base*perpendicular))<<endl;
}