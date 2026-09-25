#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"enter your age :";
    cin>>age;
    
    if(age>=18) {
        cout<<"person can vote"<<endl;
    }else{
        cout<<"person cannot vote"<<endl;
    }
    return 0;
}