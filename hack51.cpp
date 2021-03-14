#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    std::stack<char> mystack;
    std::queue<char> myqueue;

    public:
        void pushCharacter(char ch){
            mystack.push(ch);
        }

        void enqueueCharacter(char ch){
            myqueue.push(ch);
        }

        char popCharacter(){
            char top = mystack.top();
            mystack.pop();
            return top;
        }

        char dequeueCharacter(){
            char front = myqueue.front();
            myqueue.pop();
            return front;
        }
};
