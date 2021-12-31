#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    
    
        if (a>b) {
            return gcd(a - b, b);
        }
        else
            return gcd(a,b-a);//jese hum vaha loop use karte the
                   //yaha hum reurssion ka use kar raheh



//aur we can also use this method



    // if (b == 0)
    // {
    //     return a;
    // }
    // else
    // {
    //     return gcd(b, a % b);
    // }
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << gcd(a, b);
}