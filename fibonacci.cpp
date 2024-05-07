#include<iostream>
using namespace std;

void fibonacci(int n);

int main(){
    int num;
    cout<<"Enter the number to generate Fibonacci series up to: ";
    cin>>num;
    fibonacci(num);
    return 0;
}

void fibonacci(int n){
    int a = 0, b=1,c;
    cout<<"The fibonacci series up to "<< n <<" : ";
    cout<<a<<" "<<b<<" ";
    while(a+b<=n){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    cout<<endl;
}