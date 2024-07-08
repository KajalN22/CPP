#include<iostream>
using namespace std;

int main()
{
	int num,isprime=0;
	cout<<"All prime numbers between 1 to  ";
	cin>>num;
	cout<<"All prime numbers between 1 to"<<num<<"are: "<<endl;
	
    for(int i=2; i<=num; i++)
    {
        isprime = 1;
        for(int j=2; j<i/2; j++)
        {
             if(i%j==0)
            {
                isprime = 0;
                break;
            }
        }

       if(isprime==1)
        {
            cout<< i<<endl;
        }
    }
	
}
