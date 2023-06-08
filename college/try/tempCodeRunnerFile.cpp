#include <iostream>
using namespace std;
 class student{
    public:
    int marks;
    student (int m){
        marks = m;
    }
    void average (student a, student b){
        int avg;
        avg = a.marks+b.marks;
        cout<<avg;

    }
 };
 int main(){
    student a(100),b(100);

    a.average(a,b);
    return 0;

 }