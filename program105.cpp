#include<iostream>
using namespace std;
class Solution
{
    Node *rearrangeEvenOdd(Node *head)
{
    Node *oddS = NULL, *oddE = NULL;
    Node *evenS = NULL, *evenE = NULL;

    int pos = 1;

    Node *curr = head;
    while(curr != NULL)
    {
        if(pos%2 == 0)
        {
            if(evenS == NULL)
            {
                evenS = evenE = curr;
            }
            else
            {
                evenE->next = curr;
                evenE = curr;
            }
        }
        else
        {
            if(oddS == NULL)
            {
                oddS = oddE = curr;
            }
            else
            {
                oddE->next = curr;
                oddE = curr;
            }
        }

        curr = curr->next;
        pos++;
    }

    if(oddS == NULL)
    {
        evenE->next = NULL;
        return evenS;
    }

    if(evenS == NULL)
    {
        oddE->next = NULL;
        return oddS;
    }

    oddE->next = evenS;
    evenE->next = NULL;

    return oddS;
}
};
