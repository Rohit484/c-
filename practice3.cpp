#include <iostream>
using namespace std;

class Player
{
private:
    int id;
    static int next_id;
public:
    int getID() { return id; }
    Player()  {  id = next_id++; }
};
int Player::next_id = 1;

int main()
{
  Player p1;
  Player p2;
  Player p3;
  Player p4;
  Player p5;
  Player p6;
  Player p7;
  Player p8;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID();
  cout << p4.getID() << " ";
  cout << p5.getID() << " ";
  cout << p6.getID() << " ";
  cout << p7.getID() << " ";
  cout << p8.getID() << " ";
  return 0;
}
