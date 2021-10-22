#include<iostream>
using namespace std;
class Solution{
public:
    Node* divide(int N, Node *head){
       Node*os=NULL;
       Node*oe=NULL;
       Node*es=NULL;
       Node*ee=NULL;
       Node*temp=head;
       while(temp!=NULL){
           if(temp->data%2==0){
               if(es==NULL){
                   es=temp;
                   ee=temp;

               }else{
                   ee->next=temp;
                   ee=temp;
               }
           }
           else{
               if(os==NULL){
                   os=temp;
                   oe=temp;
               }
               else{
                   oe->next=temp;
                   oe=temp;
               }
           }
           temp=temp->next;
       }

       if(os!=NULL&& ee!=NULL){
           ee->next=os;
           oe->next=NULL;
           return es;
       }
       if(os==NULL && es!=NULL){
           ee->next=NULL;
           return es;
       }
       if(os!=NULL && es==NULL){
           oe->next=NULL;
           return os;
       }
       else
       return es;
   }
};
