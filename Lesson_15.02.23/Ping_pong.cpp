#include <iostream>

bool is_player(int x, int y, int pl_x, int pl_y) {
    if (x==pl_x) {
        if (y == pl_y || y == pl_y + 1 || y == pl_y - 1) {
            return true;
        }
    }
    return false;
}

void print_pole(int x, int y, int pl_x, int pl_y){
        for (int i = 0; i <= y; ++i){

        for (int j = 0; j <= x; ++j){
            if (i == 0 || i == y){
            std::cout << "*";
        } else if (j == 0 || j == x ) {
        std::cout << "*";
        } else if (is_player(j, i, pl_x, pl_y)){
            std::cout << "|";
        }else {
            std::cout << " ";
        }
    }
    std::cout << "\n";
    }
}

int main() {

    const int x = 41;
    const int y = 15;

    int pl_x = 2;
    int pl_y = y / 2;

    bool end = false;

    while (!end)    {

    print_pole(x, y, pl_x, pl_y);

    char in;
    in = getchar();
    if (in == 'a'){
        if (pl_y > 2)
        pl_y--;
    } else if(in == 'z'){
        pl_y++;
    } else if (in == 'q'){
        end = true;
    }
    system("clear");
    }
return 0;
}