#include <iostream>
using namespace std;
int arrGlobal[3];
int a=5;
void print()
{
    cout<<a<<endl;
}

int main()
{
int arrLocal[3]={0};

print();
// cout<<"arrGlobal[0] is : "<<arrGlobal[0]<<" arrGlobal[1] is :" <<arrGlobal[1]<<" arrGlobal[2] is : "<<arrGlobal[2]<<"\n";
// cout<<" arrLocal[0] is : "<<arrLocal[0]<<" arrLocal[1] is : "<<arrLocal[1]<<" arrLocal[2] is : "<<arrLocal[2]<<"\n";
}