#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string s;
    cout <<"Enter the card number : "<<endl;
    cin >> s;
    int n = s.size();
    if (n<13)
    {
        cout <<"INVALID"<<endl;
        return 0;
    }
    vector <int> v(n);
    for (int i = 0; i<n ; i++)
    {
        v[i] = int(s[i] - '0');
    }
    bool c = 1;
    int sum = 0;
    for (int i = n-1; i>=0; i--)
    {
        if (c)
        {
            sum += v[i];
            c = 0;
            continue;
        }
        else
        {
            int  a = 2*v[i];
            if (a>=10)
            {
                sum += a%10;
                a = a/10;
                sum += a%10;
            }
            else
            {
                sum += 2*v[i];
            }
            c = 1;
            continue;
        }
    }
    if (sum%10 != 0)
    {
        cout<<"INVALID"<<endl;
    }
    else
    {
       if (v[0] == 3)
       {
           cout<<"AMERICAN EXPRESS"<<endl;
       }
       else if (v[0] == 5)
       {
           cout<<"MASTERCARD"<<endl;
       }
       else if (v[0] == 4)
       {
           cout<<"VISA"<<endl;
       }
       else
       {
           cout<<"VALID"<<endl;
       }
    }
    return 0;
}
