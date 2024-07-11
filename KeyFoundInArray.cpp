#include<iostream>
using namespace std;
int main()
{
	int arr[50],num,key;
	cout<<"Enter input size of array: ";
	cin>>num;
	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number as a key: "<<endl;
	cin>>key;
	for(int i=0;i<num;i++)
	{
		if(arr[i]==key)
		{
		cout<<"key is found in array";
	    return 0;
	    }
	}
	
		cout<<"key is not found";
	
}
