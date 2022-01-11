// if user give input ==412
// thrn u have to print four one two 


#include<iostream>
using namespace std;
//using head recurssion will give true answer
// if we use tail recurssion we get  reversed answer

void sayDigits(int num,string arr[]){
    //bas case
    if (num==0)
    {
        return;
    }
    //processing part 
    int digit  = num%10;
    num = num/10;

    // //head RR
    sayDigits(num,arr);
    //printing part 
    cout<<arr[digit]<<" ";

    //tail RR
    // sayDigits(num,arr);
}


int main(){
    int num;
    cin>>num;
    string arr[10] = {"zero","one","two","three","four","five",
                        "six","seven","eight","nine"};
  sayDigits(num,arr);

}