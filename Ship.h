#include <iostream>

using namespace std;

class Ship
{
    private:
        int ship[4][2];

    public:
        bool is_alive();
        void set_ship(int x, int y);
        bool del_ship(int x, int y);
        int get_ship_size();
        int* get_ship_coords(int x);
};

bool Ship::is_alive()
{
    for (int i=0; i<get_ship_size(); i++)
    {

    }
    return false;
}

int* Ship::get_ship_coords(int x)
{
    return this->ship[x];
}

void Ship::set_ship(int x, int y)
{
    this->ship[x][y] = 1;
}

int Ship::get_ship_size()
{
    return sizeof(ship)/sizeof(ship[0]);
}