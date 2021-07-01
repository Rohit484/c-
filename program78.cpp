#include<iostream>
using namespace std;
class LRUCache
{
int csize;
list<int> dq;
unordered_map<int,pair<int,list<int>::iterator>> map;

public:
LRUCache(int cap)
{
csize= cap;
}

int get(int key)
{
if(map.find(key)!=map.end())
{
dq.erase(map[key].second);
dq.push_front(key);
map[key].second=dq.begin();

return map[key].first;
}
else
return -1;
}

void set(int key, int value)
{
if(map.find(key)!=map.end())
{
dq.erase(map[key].second);
dq.push_front(key);
map[key]={value,dq.begin()};
}
else
{
if(dq.size() >= csize)
{
map.erase(dq.back());
dq.pop_back();
}

dq.push_front(key);
map[key]={value,dq.begin()};
}
}
};
