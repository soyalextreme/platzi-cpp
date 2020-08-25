#include "MapCell.h"




MapCell::MapCell(){

  id = ' ';

}

bool MapCell::IsBlocked(){
    if(id == '*'){
      return true;
  }
  return false;
}




