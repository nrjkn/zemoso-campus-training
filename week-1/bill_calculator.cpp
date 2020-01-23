#include <iostream>
using namespace std;
float BillCalculator (int units);

int main() 
{
  int units = 0;
  cout << "Enter the number of units burned :"<<endl;
  cin >> units;
  cout << "The electricity bill for "<<units<<" units of energy consumed is Rupees "<<BillCalculator(units)<<endl;
  return 0;
}

float BillCalculator (int units)
{
    if (units<=50)
    {
        return units*0.50;
    }
    else if (units <= 150 && units > 50)
    {
        return (units-50)*0.75 + 50*0.50;
    }
    else if (units <= 250 && units > 150)
    {
        return (units-150)*1.20 + 100*0.75 + 50*0.50;
    }
    else
    {
        return (units-250)*1.50 + 100*1.20 + 100*0.75 + 50*0.50;
    }
}
