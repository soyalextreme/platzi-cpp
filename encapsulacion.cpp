#include <iostream>



using namespace std;


class Dog{

  public: 
    string mBark;

  Dog(string name, string bark_type){
    mName = name;
    mBark = bark_type;
  }

  string GetName(){
    return mName;
  }

  void SetName(string new_name){
    mName = new_name;
  }


  private:
    string mName;

};

int main(){


  Dog first_dog("Petite", "berk");
  first_dog.SetName("Petuquina");
  cout << first_dog.GetName() << endl;
  return 0;
}
