#include <iostream>
using namespace std;

int main() 
{
    int height = 0;
    cout << "Enter the height : "<<endl;
    cin >> height;
    if (height < 0)
    {
        cout << "Enter the valid height : "<<endl;
        cin >> height;
    }
    int n = height;
    int count = 1;
    while (n--)
    {
      for (int i = 1; i<=n ; i++)
      {
          cout <<" ";
      }
      for (int i=0; i<count ; i++)
      {
          cout<<"#";
      }
      cout <<" ";
      for (int i=0; i<count ; i++)
      {
          cout<<"#";
      }
      cout<<endl;
      count++;
    }
    return 0;
}
