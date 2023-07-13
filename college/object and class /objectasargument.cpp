#include <iostream>
#include<string>
using namespace std;

class student{
    public:
         int marks;
         public:
      

};
  void average( student s1,student s2)
        {
            cout<< ((s1.marks+s2.marks)/2);
        }
    
int main()
{
    student s1,s2;
    s1.marks = 100;
    s2.marks = 50;
    average(s1,s2);
    

}