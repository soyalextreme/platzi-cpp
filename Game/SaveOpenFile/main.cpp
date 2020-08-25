#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream my_file("GameData.txt");

    if(my_file.is_open())
    {
        my_file << "Hola Platzi" << endl;
        my_file << "Mi nombre es:" << endl;
        my_file << "Eri" << endl;
    }

    my_file.close();

    ifstream my_file_read("GameData.txt");
    string line;

    if(my_file_read.is_open()){
        while(getline(my_file_read, line))
        {
         cout << line << endl;
        }

    }else{
        cout << "ERROR = Open File Fail";
    }


    return 0;
}
