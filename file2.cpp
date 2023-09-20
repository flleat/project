#include <iostream>
#include "Game.h"
#include "Ship.h"

using namespace std;

int main()
{
    int* arr;
    // int height, width;
    // Game game;
    // game.set_status(1);
    // printf("Game status: %d\n", game.get_status());
    // scanf("%d %d", &height, &width);
    // printf("Height: %d Width: %d", height, width);
    // game.initialize(height, width);
    Ship ship2;
    arr = ship2.get_ship_coords(1);
    for (int i=0; i<3; i++) printf("%d %d \n", arr[i], arr[i+1]);
    return 0;
}