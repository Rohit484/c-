#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
class solution
{
  Node* rotate(Node* head, int k) {
Node *s=head;
Node *r;
while(k!=0&&s!=NULL)
{
r=s;
k--;
s=s->next;
}
if(s==NULL)
{
return head;
}
else
{
r->next=NULL;
r=head;
head=s;
while(s->next!=NULL)
{
s=s->next;
}
s->next=r;
return head;
}
}
};
/*Node* rotate(Node* head, int k) {
Node *s=head;
Node *r;
while(k!=0&&s!=NULL)
{
r=s;
k--;
s=s->next;
}
if(s==NULL)
{
return head;
}
else
{
r->next=NULL;
r=head;
head=s;
while(s->next!=NULL)
{
s=s->next;
}
s->next=r;
return head;
}
}
*/
