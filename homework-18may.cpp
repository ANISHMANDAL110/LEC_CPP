#include<iostream>
using namespace std;
class Room{

public :
    int length;
    int breadth;
    int height;

    void calculateArea(int a, int b){
        cout << " area is = " << a*b;
    }
    void calculateVolume(int a, int b, int c){
        cout << " volume is = " << a*b*c;
    }

};

int main(){
    Room obj401;
    //getting inpits
    int a; int b; int c;
    cin>>a;
    cin>>b;
    cin>>c;
    obj401.calculateArea( a,  b);
    obj401.calculateVolume(a ,  b,  c);
    
}