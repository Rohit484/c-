#include<iostream>
using namespace std;
int compare(Node *list1, Node *list2)
{
int l;
while(list1 && list2){
if(list1->c>list2->c)
return 1;
else if(list1->c<list2->c)
return -1;
list1=list1->next;
list2=list2->next;
}
if(list1) return 1;
else if(list2) return -1;
else return 0;
}
