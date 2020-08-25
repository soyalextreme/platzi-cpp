#include <iostream>


using namespace std;


class Human{
  public:
    int Age;
  
    //! Constructor
    Human(int SpawnAge){
      Age = SpawnAge;
    }

    void Think(){
      cout << GetThinkMessage() << endl;
    }

  private:
    int SocialLevel;
    int Inteligence;
    int Luck;
    
    string GetThinkMessage(){
      if(SocialLevel +  Luck > 100){
        return "Esoty teniendo pensamientos felices";
      }else if(Luck > Inteligence){
        return "Soy un suertudo";
      }else if(Age > 18){
        return "Soy un bebe";
      }else{
        return "No pienso nada";
      }
    }
};

int main(){

  Human Alex(22);
  Alex.Think();

 return 0; 
}
