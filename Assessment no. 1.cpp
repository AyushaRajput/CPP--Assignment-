#include <iostream>
using namespace std;

int main (){
  // declare the varials
  int notebook = 15;
  int pens = 20;
  float notebookcost = 2.25;
  float penscost = 0.75;
  
  // calculate the total cost
float totalcost = (notebook * notebookcost + pens*penscost);

// output the result
cout<<"total cost of the supplies=Rs."<<totalcost<<endl;

return 0;
}
