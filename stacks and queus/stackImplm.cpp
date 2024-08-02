#include<iostream>

using namespace std;

class Stack
{
    private:
        int *arr;
        int top;
        int capacity;

        
    public:
        Stack(int size)
        {
            arr=new int[size];
            top=-1;
            capacity=size-1;
        }

        void push(int n)
        {
            if(isFull()){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            arr[++top]=n;
        }

        int pop()
        {
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                return -1;
            }
            return arr[top--];   
        }

        int peek()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }

        int sizeCheck()
        {
            return top+1;
        }

        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top==capacity-1)
                return true;
            else 
                return false;
        }
};

int main()
{
    int size;
    cout<<"Enter the size of the stack:"<<endl;
    cin>>size;
    Stack s(size);
    bool flag=true;
    while(flag)
    {
        cout<<"Choose one of the following options to execute to the stack:"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Check size"<<endl;
        cout<<"5. Exit"<<endl;

        int choice;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int ele;
                cout<<"Enter the element to push: "<<endl;
                cin>>ele;
                s.push(ele);
                break;
            }
            
            case 2:
            {
                cout<<"Element that got poped out: "<<s.pop()<<endl;
                break;
            }
            case 3:
            {
                cout<<"The top element is :"<<s.peek()<<endl;
                break;
            }
            case 4:
            {
                cout<<"The size of the stack is :"<<s.sizeCheck()<<endl;
                break;
            }
            case 5:
            {
                flag=false;
                break;
            }
        }
    }
}