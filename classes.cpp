#include <iostream>

using namespace std;


class Cat{
  public:
      string Name;

    Cat(){
      Name = "Guapo";
    }
    

    // multiples constructores 
    Cat(string name){
      Name = name;
    }


    void Meow(){
      cout << Name << "dice Meaow!" << endl;
    }
};


int main(){

  Cat my_first_kitty;
  Cat my_second_kitty("Misify");

  my_second_kitty.Meow();

  for(int i = 0; i < 3; ++i){
    my_first_kitty.Meow();
  }

  cout << my_first_kitty.Name << endl;
  cout << my_second_kitty.Name << endl;
  return 0;

}
