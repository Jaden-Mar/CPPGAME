#include <iostream>
#include <time.h>
#include <windows.h>
#include <limits>
#include <stdlib.h>
#include"funkcje.h"

using namespace std;

//  Gracz* gracz=new Gracz();

//enum item list


//int pola[9]; Ekwipunek/ Pierdolnik postaci







Gracz *startAktu1()
{
    Gracz *gracz = new Gracz();
    gracz->hp = 10;
    gracz->pg = 100;
    gracz->def = 5;
    for (int i = 0; i < 10; i++)
    {
        gracz->ekwipunek[i] = przedmioty::puste;
    }
    return gracz;
}









int main()
{

    Gracz *gracz = startAktu1();

    gracz->ekwipunek[2] = przedmioty::patyk;
    gracz->ekwipunek[1] = przedmioty::kamien;

    while (1)
    {

        wybor(gracz);
    }

    delete gracz;
    return 0;
}

/*
To Do:


TODO::END

int main()
{
	Gracz* gracz=startAktu1();
	cout<< gracz->ekwipunek[6]<<endl;
	gracz->ekwipunek[1]=przedmioty::kamien;
	 cout<< gracz->ekwipunek[1]<<endl;
  cout<<"+_+_+_+_+_+_+"<<endl;

  for(int i=0; i<10; i++)
	{
	  cout<< gracz->ekwipunek[i]<<endl;
	}
		delete gracz;
	return 0;
}

*/
