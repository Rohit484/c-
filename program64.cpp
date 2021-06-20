#include<iostream>
using namespace std;
class Queue {
    stack<int> i, o;
public:

    void enqueue(int x) {
        i.push(x);
    }

    int dequeue() {
        if(i.size()==0 && o.size()==0) return -1;
        if(o.size() == 0){
            while(!i.empty()){
                o.push(i.top());
                i.pop();
            }
        }
        int v = o.top();
        o.pop();
        return v;
    }
};
