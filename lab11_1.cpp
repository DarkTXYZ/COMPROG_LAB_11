#include<iostream>
using namespace std;

long long int fibonacci(long long int);

int main(){
    long long int x;
    cin >> x;
    cout << fibonacci(x) << "\n";
    return 0; 
}

long long int fibonacci(long long int r){
    if(r == 0)
        return 0;
    if(r == 1)
        return 1;
    return fibonacci(r-1) + fibonacci(r-2);
}