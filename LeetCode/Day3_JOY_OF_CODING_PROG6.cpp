#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of array\n";
	int n;
	cin>>n;
	cout<<"Enter the target number\n";
	int target;
	cin>>target;
	int arr[n],i,j;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int sum=0;
	int start=0,end=0,flag=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+arr[j];
			if(sum==target)
			{
				start=i;
				end=j;
				flag=1;
				break;
			}
		}
		if(flag!=0)
			break;
	}
	for(i=start;i<=end;i++)
	{
		cout<<arr[i]<<" ";
	}
}