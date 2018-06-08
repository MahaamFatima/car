#include<iostream>
#include<string>
#include"car.h"
using namespace std;
int main()
{
  car bugatti;
  car bugatti("foxy",10,15,0);
  bugatti.display();
  car brv;
  car brv("suzuki",10,10,2);
  brv.display();
getchar();
};