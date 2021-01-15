#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int a , int b){
    if(a < b)
        return gcd(b,a);
    if(a % b == 0)
        return b;
    return gcd(b , a%b);
}