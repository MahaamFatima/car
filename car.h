#include<iostream>
#include<string>
using namespace std;
enum status{enough,full,empty};
class car
{
private:
string brand;
int maxfuel;
int mileage;

status fuelstatus;
public:
car bugatti()
{
  this->brand="foxy";
  this->maxfuel=15;
  this->mileage=10;
this->fuelstatus=enough;
}
car bugatti(string brand,int maxfuel,int mileage,status fuelstatus)
{
  this->brand=brand;
  this->maxfuel=maxfuel;
  this->mileage=mileage;
  this->fuelstatus=fuelstatus;
}
void setbrand(string brand)
{
  this->brand=brand;
}
string getbrand()
{
  return this->brand;
}
void setmaxfuel(int maxfuel)
{
  this->maxfuel=maxfuel;
}
int getmaxfuel()
{
  return this->maxfuel;
}
void setmileage(int mileage)
{
  this->mileage=mileage;
}
int getmileage()
{
  return this->mileage;
}
void setfuelstatus(status fuelstatus)
{
  this->fuelstatus=fuelstatus;
}
status getfuelstatus()
{
  return this->fuelstatus;
}
void display()
{
  cout<<"my brand is"<<this->brand<<endl;
  cout<<"my fuel capacity is"<<this->maxfuel<<endl;
  cout<<"i give mileage of"<<this->mileage<<endl;
  cout<<"my fuel status is"<<this->fuelstatus<<endl;
}
car brv()
{
  this->brand="suzuki";
  this->maxfuel=10;
  this->mileage=10;
this->fuelstatus=full;
}
car brv(string brand,int maxfuel,int mileage,status fuelstatus)
{
  this->brand=brand;
  this->maxfuel=maxfuel;
  this->mileage=mileage;
  this->fuelstatus=fuelstatus;
}
};




