#include<iostream>
using namespace std;
#include<string>


int main() {
     int subject = 5;
    int marks[subject];
    int total = 0;
    int i;


    for (int i = 0; i < 5 ; ++i) {
        cout << "Enter marks for subject "<<i << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    cout << "Total marks: " << total << endl;

    return 0;
}
