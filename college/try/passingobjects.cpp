#include <iostream>
using namespace std;
class comp{
    public:
    int a,b;
    public:
    comp adder(comp x, comp y){
        comp temp;
        temp.a = x.a +y.a;
        temp.b = x.b+y.b;
        return temp;

    }
};
int main(){
    comp cmp1,cmp2,temp;
    cout<<"ENTER THE FIRST COMPLEX NUMBRE";
    cin >>cmp1.a>>cmp1.b;
     cout<<"ENTER THE SECOND COMPLEX NUMBRE";
    cin >>cmp2.a>>cmp2.b;
    temp = cmp1.adder(cmp1,cmp2);
    cout<< "the added complex no is "<<temp.a<<"+"<<temp.b<<"i";


}