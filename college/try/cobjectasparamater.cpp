#include <iostream>
using namespace std;

class student{
    public :
    int roll,marks;
  

    public:
    student returner(student a, student b)
    {
        student c;
        c.marks=a.marks;
        c.roll = b.roll;
        return c;
    }
};

int main(){
    student a1,a2,out;
    a1.roll = 4;
    a1.marks = 100;
    a2.roll = 4;
    a2.marks = 100;
    out.returner(a1,a2);
    cout<<"the marks and  roll of third student is "<<out.roll<<out.marks;
   return 0;
}