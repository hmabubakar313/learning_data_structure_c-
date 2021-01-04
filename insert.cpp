#include<iostream>  
#include<cstdlib>
#include<ctime>
using namespace std;  
int main ()  
{    
    int myarray[20],random ;
        srand((unsigned)time(0));
    cout<<"\nInput list is \n";
    for(int i=0;i<20;i++)  
    {  
        random = (rand() % 20) + 1;
        myarray[i]=(rand()%100)+1; 
        cout<<myarray[i]<<" ";  
    }    
    for(int k=1; k<20; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<20;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}