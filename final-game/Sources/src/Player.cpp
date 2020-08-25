#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(){
  x = 1;
  y = 1;


}

int Player::get_y(){
  return y;
}

int Player::get_x(){
  return x;
}

void Player::call_input(){
  char user_input = ' ';

  cin >> user_input;

  switch(user_input){

    case 'w':
      last_y = y;
      y -= 1;
      break;
    case 's':
      last_y = y;
      y += 1;
      break;
    case 'd':
      last_x = x;
      x += 1;
      break;
    case 'a':
      last_x = x;
      x -= 1;
      break;
  }
  system("clear");
}

void Player::ResetToSafePosition(){
  x = last_x;
  y = last_y;
}
