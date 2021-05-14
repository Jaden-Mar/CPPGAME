#ifndef GRACZ_H
#define GRACZ_H
enum przedmioty
{
    puste = 0,
    kamien = 1,
    patyk = 2,
    kilof = 10
};

class Gracz
{
public:
    int hp, pg, def;
    przedmioty ekwipunek[9];


};

#endif // GRACZ_H
