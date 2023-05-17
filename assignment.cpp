#include <iostream>
class student
{
public:
    /* data */
    int sem;
    char sex;
    int roll;
    
    void eat(){
       std::cout << "eating \n";        
    }
     void sleep(){
       std::cout << "sleeping\n" ;        
    }
     void read(){
       std::cout << "reading\n";        
    }
     void run(){
       std::cout << "running\n";        
    }
     void study(){
       std::cout << "studying\n";        
    }

};

int main( ){
    student anish,manish,ashish,ram,dipesh;
    anish.eat() ;
    manish.sleep();
    ashish.read();
    ram.run();
    dipesh.study();
    return 0;

}
