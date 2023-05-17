#include<iostream>
using namespace std;
class Room{

public :
    int length;
    int breadth;
    int height;

    void calculateArea(double area){
        cout << " area is = " << area;
    }
    void calculateVolume(double volume){
        cout << " area is = " << volume;
    }

};

int main(){
    Room obj401;
    // displaying the outupus//
    double volume;
    double area;
    volume = obj401.length*obj401.breadth*obj401.height;
    area = obj401.length*obj401.breadth;
    obj401.calculateArea(area);
    obj401.calculateVolume(volume);

}