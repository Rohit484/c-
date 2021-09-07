#include<iostream>
using namespace std;
int _stack :: getMin()
{
if(s.empty())
return -1;
return s.top();
}
/*returns poped element from stack*/
int _stack ::pop()
{ int x;
if(s.empty())
{ return -1;
}
else
{ s.pop();
x=s.top();
s.pop();
if(!s.empty())
minEle = s.top();
return x;
}
}
/*push element x into the stack*/
void _stack::push(int x)
{
if(s.empty())
{ s.push(x);
minEle=x;
s.push(minEle);
}
else
{s.push(x);
if(x < minEle)
minEle = x;
s.push(minEle);
}
}
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int _stack :: getMin()
{
if(s.empty())
return -1;
return s.top();
}
/*returns poped element from stack*/
int _stack ::pop()
{ int x;
if(s.empty())
{ return -1;
}
else
{ s.pop();
x=s.top();
s.pop();
if(!s.empty())
minEle = s.top();
return x;
}
}
/*push element x into the stack*/
void _stack::push(int x)
{
if(s.empty())
{ s.push(x);
minEle=x;
s.push(minEle);
}
else
{s.push(x);
if(x < minEle)
minEle = x;
s.push(minEle);
}
}

