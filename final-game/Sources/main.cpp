#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;




int main(){
  bool game_over = false;
  GameMap map;
  Player Hero;

  while(!game_over){
    Hero.call_input();
    if(map.SetPlayerCell(Hero.get_x(), Hero.get_y())){
      map.Draw();
    }else{
      Hero.ResetToSafePosition();
      map.Draw();
    }
  }

  return 0;
}
