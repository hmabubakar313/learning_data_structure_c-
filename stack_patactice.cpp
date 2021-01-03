#include <iostream>
using namespace std;

class Stack
{
private:
    int top=-1;
    int arr[5];
public:
    Stack()
    {
        
        int arr[5];
        for (int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isFull()
    {
        if (top==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        cout<<"elements in the arrays are :";
        //LIFO
        for (int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

    void push(int var)
    {
        if (isFull())
        {
            cout<<"Your stack is Full\n";
        }
        else
        {
            top++;
            arr[top]=var;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Your stack is Empty";
            return 0;
        }
        else
        {
            int popValue=arr[top];
            arr[top]=0;
            return popValue;
            top--;
        }
    }

    int count()
    {
        return(top+1);
    }
};
int main ()
{

    return 0;
}