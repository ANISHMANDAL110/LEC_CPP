#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 int main(){
    srand(time(0));
    int random =1+ rand() % 10;
     int guess,i;
     int life = 3;
     cout<<"guess the number:";
     
   for ( i = 0 ; i <4;i++)
   {
        if (life ==0)
    {
        cout<<"GAME OVER!!!    "<<endl;
        break;
    }
    cin>>guess;
    if( guess>random ){
        life--;
       if(life!=0)
        {
                cout<<"guess lower  LIFE LEFT = "<<life<<endl;
        }
        

    }
    else if (guess< random ){
        life--;
        if(life!=0)
        {
                cout<<"guess higher  LIFE LEFT = "<<life<<endl;
        }
        
        

    }
    else{
        cout<<"you guessed it right"<<endl;
    }

   }
 }