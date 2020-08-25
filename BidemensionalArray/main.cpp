#include <iostream>

using namespace std;

int main()
{
    int ids [5][5] =
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    for(int i = 0; i < 5; i++){
        for(int x = 0; x < 5; x++){
            cout << ids[i][x];
        }
        cout << endl;
    }

    return 0;
}
