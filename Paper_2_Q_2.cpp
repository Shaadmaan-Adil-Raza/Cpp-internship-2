#include <iostream>
using namespace std;
int main()
{
	int n, i, j, k, l;
	cin>>n;
	for(i=1;i<=n*2;i+=1)
	{
		if(i<=n)
		{
			for(j=1;j<=i;j+=1)
			{
				cout<<"*";
			}
			j-=1;
			for(k=j;k<=n*2-j;k+=1)
			{
				if(k<n*2-i)
					cout<<" ";
				else
				{
					for(l=k+1;l<=n*2;l+=1)
						cout<<"*";
				}
			}
		}
		else
		{
			for(j=1;j<=n*2-i;j+=1)
			{
				cout<<"*";
			}
			j-=1;
			for(k=j;k<=n*2-j;k+=1)
			{
				if(k>=n*2-(n*2-i))
				{
					for(l=1;l<=n*2-i;l+=1)
						cout<<"*";
				}
				else
					cout<<" ";
				
			}
		}
		cout<<"\n";
	}
	return 0;
}
