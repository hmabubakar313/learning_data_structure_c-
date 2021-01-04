#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
    int arr[20],random;
    cout<<"unsorted array is :\n";
    for(int i=0;i<5;i++)  
        {  
            random = (rand() % 20) + 1;
            arr[i]=(rand()%100)+1; 
            cout<<arr[i]<<" ";  
        }
        cout<<endl;    
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<i;j++)
        {
            if (arr[i]<arr[j])
            {
            int temp=0;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
            // arr[i]=temp;
        }
    }
    cout<<"Sorted array is : \n";
    for ( int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}