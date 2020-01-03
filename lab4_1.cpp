#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float e=2.71828,x;
    cout << "Enter x = ";
    cin >> x;
    cout << "Result y = " << (3*(x*x*x))+(2*e)+pow(2,((2*x)+1))+sqrt((x*x)+1);
    return 0;
    
}
