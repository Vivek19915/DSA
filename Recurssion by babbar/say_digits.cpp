// if user give input ==412
// thrn u have to print four one two 


#include<iostream>
using namespace std;

//when we used head recurssion
void saydigitshead(string arr[],int num){
	//base cond
	if (num==0)
	{
		return ;
	}

	else
	{
		int digit = num%10;
		num=num/10;
		//this is head rr because function call is before printing
		saydigitshead(arr,num);
		cout<<arr[digit]<<" ";
	}
}


//when we used tail recurssion
void saydigitstail(string arr[],int num){
	//base cond
	if (num==0)
	{
		return ;
	}

	else
	{
		int digit = num%10;
		num=num/10;
		//this is tail rr because function call is after printing
		cout<<arr[digit]<<" ";
		saydigitshead(arr,num);
		
	}
}



int main(){
	string str[10] = {"zero","one","two","three","four","five",
                        "six","seven","eight","nine"};
	int num;
	cin>>num;
	saydigitshead(str,num);
	saydigitstail(str,num);

}
//therfore in outpit you can see that head recurssion is used to print 
//in bacward way 

//while head recurssion is used to print it in forward way