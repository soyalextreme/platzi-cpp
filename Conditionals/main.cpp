#include <iostream>

using namespace std;

int print_question(string subject){
    int grade = 0;
    cout << "Cuanto sacaste en " << subject << endl;
    cin >> grade;
    return grade;
}

void print_msg_break(string subject){
    cout << "Alumno reprobo " << subject << endl;
}


int main()
{
    int math_g = 0;
    int biology_g = 0;
    biology_g = print_question("Biology");
    math_g = print_question("Math");

    if(math_g == 10 && biology_g == 10){
        cout << "Puro 10 alumno genio!! :D" << endl;
    }else if(math_g >= 6 && biology_g >= 6){
        cout << "Alumno Aprovo todas sus materias." << endl;
    }else{
        if(math_g < 6){
            print_msg_break("Math");
        }else{
            print_msg_break("Biology");
        }
    }
    return 0;
}
