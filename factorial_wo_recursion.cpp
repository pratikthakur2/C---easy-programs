#include<iostream>
using namespace std;

int factorial(int n);

int main(){
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<result<<endl;
    return 0; 
}

int factorial(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f *=i;
    }
    return f;

}