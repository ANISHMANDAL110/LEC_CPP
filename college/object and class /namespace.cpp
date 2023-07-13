#include <iostream>
using namespace std;
 //namespace 1
 namespace n1{
    int x = 2;

    //creating a funciton to display namespace n1
    void fun()
    { cout<< "this is fun() of n1"<< endl;
    }
 }

 //naemspace 2
 namespace n2{
   int x = 5;

   //function to displat namespace n2
void fun()
   {
      cout<<"this is fun() of n2"<<endl;
   }
    
 }

 int main()
 {
   cout<<n1::x<<endl;
   n1::fun();

   cout<<n2::x<<endl;
   n2::fun();
   return 0;


 }