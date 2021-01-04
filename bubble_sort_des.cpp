#include<iostream>
#include <ctime> 
#include<cstdlib> 
using namespace std;
 
int main()
{
	int a[20],n=20,i,j,temp,random;
    srand((unsigned)time(0));
	// random = (rand() % 20) + 1;
    cout<<"\tYour random array is :";	
	
    for(i=0;i<n;i++)
    {   
		random = (rand() % 20) + 1;
        a[i]=(rand()%100)+1; 
        cout<<a[i]<<" ";  
    }
    cout<<endl;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<"\n\tArray after bubble sort:";
	for(i=0;i<n;++i)
        {
            cout<<" "<<a[i];
        }
		cout<<endl;
	return 0;
}