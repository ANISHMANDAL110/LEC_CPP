#include <iostream>
class student
{
public:
    /* data */
    int sem;
    char sex;
    int roll;
    
    void eat(){
       std::cout << "eating";        
    }
     void sleep(){
       std::cout << "sleeping";        
    }
     void read(){
       std::cout << "reading";        
    }
     void run(){
       std::cout << "running";        
    }
     void study(){
       std::cout << "studying";        
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
