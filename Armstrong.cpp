#include<iostream>
using namespace std;
int main()
{
	int num,r,sum=0,temp;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(temp=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum+ r*r*r;
	}
	if(sum==temp){
		cout<<"Number is an Armstrong number";
	}
	else
	cout<<"Number is not armstrong number";
}
