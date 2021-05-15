#include <iostream>
#include <time.h>
#include <windows.h>
#include <limits>
#include <stdlib.h>
#include"funkcje.h"
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}
void clrscr(void)
{
    system("CLS");
}

void ekwipunekCRAFTING(Gracz* gracz)
{
	 for (int i = 0; i < 10; i++)
        {
            switch (gracz->ekwipunek[i])
            {

            case przedmioty::kilof:
                cout << "kilof "<<endl;
                break;
            case przedmioty::patyk:
                cout << "patyk "<<endl;
                break;
            case przedmioty::kamien:
                cout << "kamien "<<endl;
                break;
            }
        }


}

void ekwipunek(Gracz* gracz)
{
	 for (int i = 0; i < 10; i++)
        {
            switch (gracz->ekwipunek[i])
            {
            case przedmioty::puste:
                cout << "puste " <<endl;
                break;
            case przedmioty::kilof:
                cout << "kilof "<<endl;
                break;
            case przedmioty::patyk:
                cout << "patyk "<<endl;
                break;
            case przedmioty::kamien:
                cout << "kamien "<<endl;
                break;
            }
        }


}
void TWORZENIE(Gracz *gracz)
{

    clrscr();
    cout<<"==============================="<<endl;
    cout<<"Crafting"<<endl;
    cout<<"==============================="<<endl;
       cout<<"Posiadasz:"<<endl;
    cout<<"==============================="<<endl;
    ekwipunekCRAFTING(gracz);
}


void wybor(Gracz *gracz)
{
    cout << "1. Ekwipunek" << endl;
    cout << "2. tworzenie" << endl;
    cout << "3. Otoczenie" << endl;
    cout << "4. Statystyki" << endl;
    cout << "5. czysty ekran" << endl;
    cout << "6. koniec gry" << endl;
    int a;
    bool bCzyBlad = std::cin.fail();


    cin >> a;
    if (bCzyBlad)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    switch (a)
    {
    case 1:
       ekwipunek(gracz);
        break;
    case 2:
     TWORZENIE(gracz);
       break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        clrscr();
        break;
    case 6:
        exit(3);
        break;
    default:
        cout <<"input error"<< endl;
        break;
    }
}


/*
void sprawdztyp(Gracz* gracz)
{
      for (int i = 0; i < 10; i++)
    {
     if (gracz->ekwipunek[i] == przedmioty::puste){}
    else if (gracz->ekwipunek[i] == przedmioty::kamien){}
    else if (gracz->ekwipunek[i] == przedmioty::patyk){}
     else if (gracz->ekwipunek[i] == przedmioty::kilof){}
    }

    }
*/


