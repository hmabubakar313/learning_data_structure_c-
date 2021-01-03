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
            top--;
            return popValue;
         
        }
    }

    int count()
    {
        return(top+1);
    }
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"Your stack is Empty\n";
        }
        else
        {
            pos=arr[top];
            return pos;
        }
        return 0;
    }
    void change(int top,int val)
    {
        arr[top]=val;
        cout<<"item changes at the location "<<top<<endl;
    }
    // need to impore change function 
};
int main ()
{
      Stack s1;
    int option,position,value;
    do
    {
        cout<<"select your option : \n"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4.isFull"<<endl;
        cout<<"5. peek"<<endl;
        cout<<"6.count"<<endl;
        cout<<"7.change"<<endl;
        cout<<"8.display"<<endl;
        cout<<"9.clearscreeen"<<endl;
        cin>>option;

        switch (option)
        {
            case 1:
                cout<<"Enter an item to push in the stack :"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"pop function called - poped value is : "<<s1.pop()<<endl;
                break;
            case 3:
                if (s1.isEmpty())
                    cout<<"stack is Empoty";
                else
                    cout<<"stack is  not empty";
                break;
                case 4:
                if (s1.isFull())
                    cout<<"stack is Full";
                else    
                    cout<<"stack is  not FULL";
                break;
            case 5:
                cout<<"Enter te position you want to peek :"<<endl;
                cin>>option;
                cout<<"peek function called :"<< position << "is" <<s1.peek(option)<<endl;
                break;
            case 6:
                cout<<"count function called :number of items in the stacks is : "<<s1.count()<<endl;
                break;
            case 7:
                cout<<"cahnge function :"<<endl;
                cout<<"enter position of itme you want to change :"<<endl;
                cin>>position;
                cout<<"enter value of item you nwant to change :"<<endl;
                cin>>value;
                s1.change(position,value);
                break;
            case 8:
                cout<<"display"<<endl;
                s1.display();
                break;
            default:
                cout<<"Enter proper option number"<<endl;

        }
    }while(option!=0);

    return 0;
}