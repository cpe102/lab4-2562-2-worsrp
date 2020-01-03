#include<iostream>
using namespace std;

float findDistance(float u,float a,float t){
  return (u*t)+(0.5*a*t*t);
}

int main(){

  cout << "s = " << findDistance(5,4,3);

  return 0;
}
