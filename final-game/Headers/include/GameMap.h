#ifndef GAMEMAP_H 
#define GAMEMAP_H
#include <iostream>
#include "MapCell.h"

using namespace std;

class GameMap{

  public:
    GameMap();
    MapCell cells[15][10];
    MapCell* playerCell;
    void Draw();
    bool SetPlayerCell(int p_x, int p_y);

  protected:
    void LoadMapFromFile();

  private:

};

#endif // PLAYER_H
