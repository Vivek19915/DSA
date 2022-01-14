#include<iostream>
using namespace std;


//HERE WE CREATED INLINE FUNCTION
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;   //HERE WE USE 🔥🔥🔥🔥TERTIORY OPERRATOR🔥🔥🔥🔥
                            //MEANING OF THIS (a>b) ? a : b
                            // if (a>b)        
                            // {
                            //     cout<<a<<endl;
                            // }
                            // else
                            // {
                            //     cout<<b<<endl;
                            // }
                            
                            
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
