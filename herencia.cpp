#include <iostream>


using namespace std;


class Wizzard{
  public:

    Wizzard(int i_mana, int i_hp , int i_power){
      mana = i_mana;
      hp = i_hp;
      power = i_power;
    }


    void Spell(){
      cout << "Fireworks!" << power << endl;
    }


  protected:
    int mana, hp, power;

};


// herencia

class WizzardIce : public Wizzard{

  public:
// Herrar el constructor
    WizzardIce(int i_mana, int i_hp , int i_power):Wizzard(i_mana, i_hp , i_power){
      mana = i_mana;
      hp = i_hp;
      power = i_power + 10;
    }

};



int main(){
  Wizzard Gandalf(100, 10, 20);
  Gandalf.Spell();
  WizzardIce ClashRoyal(100, 10, 20);
  ClashRoyal.Spell();


  return 0;
}
