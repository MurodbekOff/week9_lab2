#include <iostream>
using namespace  std;
int main() {
    int num, temp, sum=0;
    cout<<"Enter the number of students: ";
    cin>>num;
    while (num > 100 || num < 1) {
        cout<<endl<<"Please try again: ";
        cin>>num;
    }
    for (int i = 0; i<num; i++) {
        cout<<endl<<"Enter "<<i<<"th student's score: ";
        cin>>temp;
        while (temp > 100 || temp < 0) {
            cout<<endl<<"Please try again: ";
            cin>>temp;
        }
        sum+=temp;
    }
    cout<<endl<<"Average grade is: "<<double(sum)/num;
    return 0;
}