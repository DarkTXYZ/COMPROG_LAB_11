#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x) << "\n";
    return 0; 
}

int fibonacci(int r){
    if(r == 0)
        return 0;
    if(r == 1)
        return 1;
    return fibonacci(r-1) + fibonacci(r-2);
}