#include <iostream>
using namespace std;
int main ()
{
    int arr[5],random,min,temp=0,loc;
    srand(time(0));
    cout<<"unsorted array is :"<<endl;
    for (int i=0;i<5;i++)
    {
        random = (rand() % 20) + 1;
        arr[i] = (rand() % 100) + 1;
        cout << arr[i] << " ";
    }
    cout<<endl;
       
        
    for (int i=0;i<5;i++)
    { 
        min=arr[i];
        for(int j=i+1;j<5;j++)
        {
            if (min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
            

        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    
    // cout<<min;

    // cout<<min;
      
       
    cout<<"sorted array is = \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}