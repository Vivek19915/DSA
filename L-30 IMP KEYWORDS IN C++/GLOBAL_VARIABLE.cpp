#include<iostream>
using namespace std;
//THIS IS OUR GLOBAL VARIBALE 
int score = 15;
//BUT ISKO KAM HI USE KARNA CHAIYE KYUKI YE 
//EK BAD PRACTICE H 
//KYUKI GLOBAL VARIABLE KO KOI BHI FUNCTION USKI VALUE
//CHANGE KAR SAKTA H AUR VO PURE PROGRAM KE LIYE CHANGE HO JAYEGI
//JO KI ACCHI BAAD NHI H 



//HERE U CAN SEE THAT SCORE CAN BE ACCESSIBLE BETWEEN BOTH FUNCTION 
void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}