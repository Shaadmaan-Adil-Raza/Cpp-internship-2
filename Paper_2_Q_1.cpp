#include <iostream>
using namespace std;
int main()
{
	int i, a[10], j, c;
	cout<<"Enter the array: \n";
	for(i=0;i<10;i+=1)
	{
		cin>>a[i];
	}
	cout<<"Leaders are:\n";
	for(i=0;i<10;i+=1)
	{
		c=0;
		for(j=i+1;j<10;j+=1)
		{
			if(a[i]<a[j])
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			cout<<a[i]<<"\n";
		}
	}
	
}
