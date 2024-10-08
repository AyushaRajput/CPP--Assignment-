#include <iostream>
using namespace std;
//Base class Vehicle 
class Vehicle {
  public:
  void vehicle () {
    cout<<"I am a Vehicle "<<endl;
  }
};
// class Fourwheeler derived from Vehicle 
class Threewheeler : public Vehicle {
  public:
  void threewheeler()
  {
    cout<<"I have three wheels"<<endl;
  }
};
//class trike  derived from Threewheeler
class Trike: public Threewheeler{
  public:
  void trike() {
    cout<<"I am a tricycle"<<endl;
  }
};

int main() 
{
    Trike mytrike;
    mytrike.trike();
    mytrike.threewheeler();
    mytrike.vehicle();
    
    return 0;
}