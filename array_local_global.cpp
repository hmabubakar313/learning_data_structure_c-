#include <iostream>
using namespace std;
int arr[3][5],i;
void print(int x)
{
    for(int i=0;i<5;i++)
    {
        cout<<arr[x][i];
    }
    cout<<endl;
}
int main()
{
    for(int i=0;i<3;i++)
    {
        print(i);
    }
    return 0;
}