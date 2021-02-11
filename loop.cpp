#include <iostream>
using namespace std;
int main() {
   int n =0, fact = 1, i;
   cout<<"Enter number to find the factorial \n";
   cin>>n;
   for(i=1; i<=n; i++)
   fact = fact * i;
   cout<<"Factorial of "<< n <<" is "<<fact<<endl;
   return 0;
}