#include <iostream>
using namespace std;
class Que
{
private:
    int x,rear=-1,front=-1;
    int arr[5];
public:
Que()
    {
        
        int arr[5];
        for (int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
        bool isFull()
        {
            if(rear==4)
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
            if(rear==-1 && front==-1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
        }
        void enqueue(int var)
        {
            if (isFull())
            {
                cout<<"Your Queue is Full";
            }
            else
            {
               rear++;
               arr[rear]=var; 
            }
        }
        int dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty\n";
            }
            else
            {
                int popValue=arr[front];
                arr[front]=0;
                front--;
                return popValue;
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
    
};

int main ()
{
    Que q1;
    int option,position,value;
    do
    {
        cout<<"select your option : \n"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4.isFull"<<endl;
        cout<<"5.display"<<endl;
        cin>>option;
         switch (option)
        {
            case 1:
                cout<<"Enter an item to push in the stack :"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;
            case 2:
                cout<<"pop function called - poped value is : "<<q1.dequeue()<<endl;
                break;
            case 3:
                if (q1.isEmpty())
                    cout<<"stack is Empoty";
                else
                    cout<<"stack is  not empty";
                break;
                case 4:
                if (q1.isFull())
                    cout<<"stack is Full";
                else    
                    cout<<"stack is  not FULL";
                break;
                case 5:
                cout<<"display"<<endl;
                q1.display();
                break;
        }
    }while (option!=0);
         
    return 0;
    
}