#include "Gate.h"

Gate::Gate(GameField &gf)
{
    int gate1Num, gate2Num;
    Point gate1, gate2;
    
    while(gate_num < 1){
        srand((unsigned int)time(NULL));
        gate1Num = (rand() % wall_list.size()) + 1;
        gate2Num = (rand() % wall_list.size()) + 1;

        gate1 = wall_list[gate1Num];
        gate2 = wall_list[gate2Num];

        gates = make_pair(gate1, gate2);
        gate_num++;
    }

    gf.set_cell(gate1.x, gate1.y, 7);
    gf.set_cell(gate2.x, gate2.y, 7);
}

Gate::~Gate()
{
    gate_num--;

}

bool Gate::check_gate()
{

}
bool Gate::check_wall()
{

}
Point Gate::pass_gate()
{

}
int Gate::entry_direction()
{
    
}