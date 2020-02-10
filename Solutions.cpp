#include<iostream>
using namespace std;

void pattern(int n,int c)
{
	int A[n],sum=0,j=1;
	for(int i=0;i<n;i++)
	A[i]=0;
	while(j>0)
	{
		int flag=1;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(A[i]==c+1)
			{
				A[i]=0;
				if(i==n-1)
				{
					flag=0;
					break;
				}
				A[i+1]++;
			}
			sum+=A[i];
		}
		if(flag==0)
		break;
		if(sum==c)
		{
			for(int i=n-1;i>=0;i--)
			cout<<A[i]<<" ";
			cout<<endl;
		}
		A[0]++;
	}
}
int main()
{
	int n,c;
	cout<<"Enter value of n ";
	cin>>n;
	cout<<"Enter value of c ";
	cin>>c;
	pattern(n,c);
}
