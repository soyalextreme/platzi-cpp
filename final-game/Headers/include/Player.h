#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player{

  public:
    Player();
    void call_input();
    int get_x();
    int get_y();
    int last_x, last_y;
    void ResetToSafePosition();

  protected:
    int x, y;

  private:

};

#endif // PLAYER_H
