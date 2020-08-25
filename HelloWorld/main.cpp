#include <iostream>


using namespace std;

int main()
{

    //char my_inicial = 'a';
    //int month = 04;
    //int day = 17;
    //bool game_over = false;
    //int lifes = 3;

    int direction = 2502;
    // apuntador
    //int* _direction = &direction;

    // Reto Areas
    // Change this value depending your circle
    float PI = 3.1416;
    int r = 2;
    float area_circle = PI * (r * r);
    float area_sphere = (4 * PI) * (r * r);


    //cout << direction << endl;
    //cout << *_direction << endl;
    //cout << month << endl;
    //cout << day << endl;
    //cout << PI << endl;
    //cout << "El jugador ya perdio?" << endl;
    //cout << game_over << endl;
    //cout << my_inicial << endl;
    //cout << r << endl;

    int base = 0;
    int altura = 0;

    cout << "Introduce la base de un rectangulo: " << endl;
    cin >> base;
    cout << "Introduce la altura de un rectangulo: " << endl;
    cin >> altura;
    cout << "El area del rectangulo es: " << base * altura << endl;

    int a = 0;
    int b = 0;

    cout << "Introduce el primer valor a multiplicar: " << endl;
    cin >> a;
    cout << "Introduce el segundo valor a multiplicar: " << endl;
    cin >> b;
    cout << "El resultado de la multiplicacion es: " << a * b << endl;
    int edad = 0;
    cout << "Introduce tu edad: " << endl;
    cin >> edad;
    cout << "Que joven apenas tienes " << edad << endl;
    cout << "Circle Area" <<endl;
    cout << area_circle << endl;
    cout << "Sphere Area" << endl;
    cout << area_sphere << endl;
    return 0;
}
