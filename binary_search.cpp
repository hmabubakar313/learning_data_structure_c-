#include <iostream>
using namespace std;
int main ()
{
    int n,first,last,mid;
    int arr[6]={1,2,4,5,7,8};
    cout<<"Enter element to be search\n";
    cin>>n;
    first=0;
    last=9;
    mid=first+last/2;
    while(first<=last)
    {
        if(arr[mid]<n)
        {
            first=mid+1;
        }
        else if(arr[mid]==n)
        {
               cout<<"The number is present at : "<<n<<" index: "<<mid+1<<endl;
               break;
        }
        else
            last = mid-1;
        mid = (first+last)/2;
        // break;
    }
    if(first>last)
        cout<<"\nThe number, "<<n<<" is not found in given Array";
    cout<<endl;
    return 0;
}