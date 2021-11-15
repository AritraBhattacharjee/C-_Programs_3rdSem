//Conversion of one class type to another class type
//Using constructor

#include<iostream>
using namespace std;
//cgs system
class CGS
 {
     int mts; //meters
     int cms; //centimeters
     public:
       void showdata()
   {
       std::cout<<"Meters and centimeters in CGS system:";
       std::cout << mts<<" meters "<<cms<<" centimeters" << std::endl;
   }
   CGS(int x,int y) // parameterized constructor
   {
       mts=x;
       cms=y;
   }
    int getcms()
   {
       return cms;
   }
   int  getmts()
   {
       return mts;
   }
 
 };
 
  class FPS
 {
   int feet;
   int inches;
   public:
   FPS() // default constructor
   {
       feet=0;
       inches=0;
   }  
  FPS(CGS d2)
   {
       int x;
       x=d2.getcms()+d2.getmts()*100;
       x=x/2.5;  //x=910/2.5
       feet=x/12;  //910/12
       inches=x%12;  //910%12
    }
   void showdata()
   {
       std::cout<<"feet and inches in FPS system:";
       std::cout << feet<<" feet "<<inches<<" inches" << std::endl;
   }
 };
 
 int main()
 {
     CGS d1(9,10);
     FPS d2;
     d2=d1; //FPS(CGS d1)
     d1.showdata(); //to display CGS values
     d2.showdata(); //to display FPS values
     return 0;
 }
 
 //Using overloading casting operator
 
 /*#include <bits/stdc++.h>
using namespace std;
//minutes class
class Minute {
     
 
public:
   int mins;
    // Constructors
    Minute()
    {
        mins = 0;
    }
 
    // Function to print the value of
    // hours and minutes
    void show()
    {
        cout << "\nTotal Minute : " << mins << endl;
    }
};
 
// Time Class
class Time {
    int hr, mins;
 
public:
    // Constructors
    Time(int h, int m)
    {
        hr = h;
        mins = m;
    }
    Time()
    {
        cout << "\nTime's Object Created";
    }
    operator Minute  () //overloading minute class
    {
        Minute m;
        m.mins = (hr * 60) + mins;
        return m;
    } //driver code
 
    // Function to print the value of
    // hours and minutes
    void show()
    {
        cout << "Hour: " << hr << endl;
        cout << "Minute : " << mins << endl;
    }
};
 
// Minutes Class
int main()
{
    Time T1(3,40);
    Minute m;
    m=T1; //minute class is destination and Time class is source class
    T1.show();
    m.show();
    return 0;
}*/
