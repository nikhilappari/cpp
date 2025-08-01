#include<bits/stdc++.h>
using namespace std;
class stacks{
    public:
    int top;
    int st[100];

    stacks()
    {
        top=-1;
    }

    void is_empty()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Stack is not Empty"<<endl;
        }
    }

    void is_full()
    {
        if(top==99)
        {
            cout<<"Stack is Full"<<endl;
        }
        else
        {
            cout<<"Stack is Not Full"<<endl;
        }
    }

    void push(int val)
    {
        if(top==99)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            st[++top]=val;
            cout<<val<<" is inserted"<<endl;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }
    }
    void peek()
    {
        cout<<st[top]<<" is the peek value";
    }

    void display()
    {
        for(int i=0;i<top;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    stacks s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.display();
    s1.peek();
    s1.is_empty();
    s1.is_full();
}
