#include<iostream>
using namespace std;
class Queue
{
    private:
    int front,rear;
    int arr[5];

    public:
        Queue()
        {
            front=-1;
            rear=-1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
    bool isEmpty()
    {
        if (front==-1 && rear ==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (rear==4)
            return true;
        else 
            return false;
    }
    void enqueue(int val )
    {
        if (isFull())
        {
            cout<<"Queue is Full"<<endl;
        return;
        }
        else if (isEmpty())
        {
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
    }

    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout<<"Que is Empty"<<endl;
            return 0;
        }
        else if (front==rear)
        {
            x=arr[front];
            rear=-1;
            front=-1;
            arr[front]=0;
            return x;
        }
        else 
        {
            x=arr[front];
            arr[front]=0;
            front++;
            rear++;
            return x;
        }
    }
    int count()
    {
        return (rear-front+1);
    }
    void display()
    {
        cout<<"values in ques is \n";
        for (int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Queue q1;
    int option,value;

    do
    {
        cout<<"what operation do you want to perform select your numerb"<<endl;
        cout<<"1--- Enque()"<<endl;
        cout<<"2--- Deque()"<<endl;
        cout<<"3--- IsEmpty()"<<endl;
        cout<<"4--- IsFull()"<<endl;
        cout<<"5--- Display()"<<endl;
        cout<<"6--- Exit()"<<endl;

        cin>>option;

        switch (option)
        {
            case 1:
                cout<<"Enter item in Que \n";
                cin>>value;
                q1.enqueue(value);
                break;
            case 2:
                   cout<<"Delete  item in Que \n";
                q1.dequeue();
                break;
            case 3:
                if (q1.isFull())
                {
                    cout<<"que is full\n";
                }
                else
                {
                    cout<<"que is not full \n";
                }
                break;
            case 4:
                cout<<"count operation is : "<<q1.count()<<endl;
                break;
              case 5:
                cout<<"Display operation is : "<<endl;
                q1.display();
                break;
        }

    }while(option!=6);

return 0;
}