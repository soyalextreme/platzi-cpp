#include <iostream>
#include <fstream>


// global var
int hero_pos_x = 1;
int hero_pos_y = 1;
bool game_over = false;

void draw_map(int hero_pos_x, int hero_pos_y, char map_g[5][5])
{
    for (int i = 0; i < 5; ++i)
    {
        for (int l = 0; l < 5; ++l)
        {
            if (i != hero_pos_y | l != hero_pos_x)
            {
                std::cout << map_g[l][i];
            }
            else
            {
                std::cout << 'H';
            }
        }
        std::cout << std::endl;
    }
}


void read_inf(){
  std::ifstream read_file("data.txt"); 
  std::string line;
  if(read_file.is_open()){
    for(int i = 1; i < 2 ; ++i){
      if(i == 1){
        getline(read_file, line);
        hero_pos_x = std::stoi(line);
      }else if(i == 2){
        getline(read_file, line);
        hero_pos_y = std::stoi(line);
      }
    }
  }
}


void write_inf(std::string data){
  std::ofstream write_file("data.txt");
  if(write_file.is_open()){
    write_file << data << std::endl;
  }
}


void char_move()
{
    char input = ' ';
    std::cin >> input;
    switch (input)
    {
        case 's':
            if(hero_pos_y < 4){
                ++hero_pos_y;
            }
            break;
        case 'w':
            if(hero_pos_y > 1){
                --hero_pos_y;
            }
            break;
        case 'd':
            if(hero_pos_x < 4){
                ++hero_pos_x;
            }
            break;
        case 'a':
            if(hero_pos_x > 1){
                --hero_pos_x;
            }
            break;
        case 'q':
            // Guardando en la primera liena la posision x
            write_inf(std::to_string(hero_pos_x));
            write_inf(std::to_string(hero_pos_y));
            game_over = true;
            break;
    };
}

int main()
{
    char map_g[5][5] = {{'.', '.', '.', '.', '.'},
                        {'.', ' ', ' ', ' ', '.'},
                        {'.', ' ', ' ', ' ', '.'},
                        {'.', ' ', ' ', ' ', '.'},
                        {'.', '.', '.', '.', '.'}};


    read_inf();
    while (!game_over)
    {
        draw_map(hero_pos_x, hero_pos_y, map_g);
        char_move();
    }

    return 0;
}
