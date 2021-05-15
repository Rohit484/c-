
class Trie {
public:
boot isEnd;
Trie* alp[26
Trie()
isEnd
= false;
if (current->alp[index]
for (int 1
alp[i]
1
i
< 26;
= NULL;
void insert(Trie* head, string&
curr)
Trie* current -
for (int 1
int index =
current-
head;
i
curr.length(); i++)
curr[i]
>alp[index] -
-z NULL)
new Trie();
current = current->alp[index];
current->isEnd
= true;
boot search(Trie* head, string& curr)
Trie* current = head;
for (int 1
i
curr.length(); ++i)
int index = curr[i]
if (current->alp[index] -z NULL) return false;
current = current->alp[index];
current->isEnd;
return
