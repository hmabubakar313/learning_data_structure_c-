#include <iostream>
using namespace std;
int arrGlobal[3];
int a;
void print(int x)
{
    // a=5;
    // cout<<a<<endl;
    // int a=5;
    cout<<x;
    
    // cout<<a<<endl;
}

int main()
{
a=10;
int arrLocal[3]={0};

print(a);
// cout<<a;
// cout<<"arrGlobal[0] is : "<<arrGlobal[0]<<" arrGlobal[1] is :" <<arrGlobal[1]<<" arrGlobal[2] is : "<<arrGlobal[2]<<"\n";
// cout<<" arrLocal[0] is : "<<arrLocal[0]<<" arrLocal[1] is : "<<arrLocal[1]<<" arrLocal[2] is : "<<arrLocal[2]<<"\n";
}