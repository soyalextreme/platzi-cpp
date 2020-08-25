#include "GameMap.h"
#include <iostream>
#include <fstream>



using namespace std;


GameMap::GameMap(){


  playerCell = NULL;
  LoadMapFromFile();

}


void GameMap::Draw(){
  for(int i = 0; i < 15; ++i){
    for(int j = 0; j < 10; ++j){
        cout << cells[i][j].id;
    }
    cout <<  endl;
  }
}


bool GameMap::SetPlayerCell(int p_x, int p_y){

  if(cells[p_x][p_y].IsBlocked() == false){
    if(playerCell != NULL){
      playerCell->id = ' ';
    }
    playerCell = &cells[p_y][p_x];
    playerCell->id = '@';
    return true;
  }else{
    return false;
  }
}


void GameMap::LoadMapFromFile(){
  
  //ofstream FileCreated("Map.txt");
  //if(FileCreated.is_open()){

  //}else{
    //cout << "Fatal ERROR! MAP FILE COULD NOT BE CREATED";
  //}

  string line;
  int row = 0;
  ifstream MyFile("Map.txt");
  if(MyFile.is_open()){
    while(getline(MyFile, line)){
      for(int p = 0; p < line.length(); ++p ){
       cells[row][p].id = line[p];
      }
      row++; 
    }
  }else{
    cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED";
  }

}
