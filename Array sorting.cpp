 #include<iostream>
using namespace std;

int main()
{
	int arr[50];
	int i,j,n;
	cout<<"Enter input size of array:"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter element of array: "<<i<<endl;
		cin>>arr[i];
	}
	//Descending order
//	for(i=0;i<n;i++)
//
//	{
//    	int maxindex=i;
//	  for(j=i+1;j<n;j++)
//	  {
//	  	
//	  	if(arr[j]>arr[maxindex])
//		  {
//	  		maxindex=j;
//		  }
//	  }	
//	  int temp=arr[i];
//	  arr[i]=arr[maxindex];
//	  arr[maxindex]=temp;
//	  
//	  cout<<"sorted array"<<endl;
//	  for(i=0;i<n;i++)
//	  {
//	  	cout<<arr[i]<<endl;
//	  } 		
//	}

  //Ascending order
//    for(i=0;i<n;i++)
//   
//    {
//     int minIndex=i;
//    for(j=i+1;j<n;j++)
//	 {
//	  	if(arr[j]<arr[minIndex])
//	  	{ 
//	  		minIndex=j;
//		  }
//	 }
//	 
//	 int temp=arr[i];
//	 arr[i]=arr[minIndex];
//	 arr[minIndex]=temp;	
//	}
//	cout<<"Array sorted in ascending order"<<endl;
//	for(i=0;i<n;i++){
//		cout<<arr[i]<<endl;
//	}

//Reverse array

    for(i=n-1;i>=0;i--)
    {
    	cout<<arr[i]<<endl;
	}

     return 0;	
}
