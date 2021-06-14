#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to return precedence of operators.
    int prec(char c)
    {
        if(c == '^')
        return 3;
        else if(c == '*' || c == '/')
        return 2;
        else if(c == '+' || c == '-')
        return 1;
        else
        return -1;
    }

    public:
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        stack<char> st;
        st.push('N');
        int l = s.length();
        string ns;

        //iterating over the given string.
        for(int i = 0; i < l; i++)
        {
            //if current character is an operand, we add it to output string.
            if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
                ns+=s[i];

            //else if current character is ‘(‘, we push it to the stack.
            else if(s[i] == '(')
            st.push('(');

            //else if current character is ‘)’, we pop the elements from stack
            //and add to output string until ‘(‘ is encountered in stack.
            else if(s[i] == ')')
            {
                while(st.top() != 'N' && st.top() != '(')
                {
                    char c = st.top();
                    st.pop();
                    ns += c;
                }
                st.pop();
            }

            //else current character is an operator.
            else
            {
                //while precedence of current character is less than or
                //equal to precedence of top of stack we pop the top
                //element and add it to the output string.
                while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
                {
                    char c = st.top();
                    st.pop();
                    ns += c;
                }
                //pushing the current character in the stack.
                st.push(s[i]);
            }

        }

        //popping all the remaining elements from the stack
        //and adding them to output string.
        while(st.top() != 'N')
        {
            char c = st.top();
            st.pop();
            ns += c;
        }
        //returning the output string.
        return ns;
    }
};
