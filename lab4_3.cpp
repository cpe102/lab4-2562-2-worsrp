#include<iostream>
using namespace std;

int findDivisor(int i){
    int d=2;
    while(i%d!=0)
    {
        d++;
    }
    return d;
}
int main(){
    cout << findDivisor(221);
}

