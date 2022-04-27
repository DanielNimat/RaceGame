#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool gameOver;
const int width = 70;
const int height = 3;
int x, y, fruitX, fruitY, score,p,o,fruitP,fruitO;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirecton dir;
void Setup()
{
    gameOver = false;
    dir = STOP;
    p=1;
    o=1;
    fruitP = rand() % width;
    fruitO = rand() % height;
    x = 1;
    y = 1;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    system("cls"); //system("clear");
    cout << "Press 'd' to start the race" << endl;
    for (int i = 0; i < width+2; i++)
        cout<< "#";
    cout<< endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == y && j == x)
            {
                cout << "o-o" << " ";
                cout << endl;
            }

            if (i == o+1  && j == p )
            {

                cout << "o-o" << " ";
                cout << endl;

            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

}
void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'd':
            dir = RIGHT;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

struct
{
    string magazin,cursa,iesire;
    int venit;

} v[100],a,b,aux,c;
int main()
{
    string s,s1;
    int opt,i,n,opt2,venit,im,motor,roti,turbo,suspensii;
    im=0;
    roti=100;
    motor=200;
    turbo=300;
    suspensii=350;
    venit=1000;
    cout<<"Venitul tau este in valoare de:"<<venit<<"$"<<endl ;
    Sleep(50);
    opt=0;
    while(opt!=3)
    {

        cout<<"1.Magazin"<<endl;
        cout<<"2.Cursa"<<endl;
        cout<<"3.Iesire"<<endl;
        cin>>opt;



        if(opt==1)
        {
            opt2=0;
            while(opt2!=5)
            {
                cout<<"1.Imbunatateste-ti rotile"<<endl;
                cout<<"2.Imbunatateste-ti motorul"<<endl;
                cout<<"3.Adauga Turbo"<<endl;
                cout<<"4.Imbunatateste-ti suspensiile"<<endl;

                cin>>opt2;
                if(opt2==1)
                {
                    cout << "Rotile costa " << roti << "$, esti sigur ca vrei sa le imbunatatesti?" << endl;
                    cout << "1.Da" << endl;
                    cout << "2.Nu" << endl;
                    cin>>s;
                    if(s=="1")
                    {
                        if (venit < roti)
                            cout << "Nu sunt suficiente fonduri" << endl;
                        else
                        {
                            cout<<"Rotile au fost imbunatatite, noul tau venit este in valoare de:"<<venit-roti<<"$"<<endl;
                            venit=venit-roti;
                            roti=roti+100;
                            im=im+1;
                        }

                        cout<<"Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?"<<endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;
                        cin>>s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }

                    if(s=="2")
                    {
                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }
                }

                if (opt2 == 2)
                {
                    cout << "Motorul costa " << motor << "$, esti sigur ca vrei sa il imbunatatesti?" << endl;
                    cout << "1.Da" << endl;;
                    cout << "2.Nu" << endl;
                    cin >> s;
                    if (s == "1")
                    {
                        if (venit < motor)
                            cout << "Nu sunt suficiente fonduri" << endl;
                        else
                        {
                            cout << "Motorul a fost imbunatatit, noul tau venit este in valoare de:" << venit - motor << "$" << endl;
                            venit = venit - motor;
                            motor = motor + 200;
                            im = im + 1;
                        }

                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }

                    if (s == "2")
                    {
                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }
                }

                if (opt2 == 3)
                {
                    cout << "Turbo costa " << turbo << "$, esti sigur ca vrei sa il imbunatatesti?" << endl;
                    cout << "1.Da" << endl;;
                    cout << "2.Nu" << endl;;
                    cin >> s;
                    if (s == "1")
                    {
                        if (venit < turbo)
                            cout << "Nu sunt suficiente fonduri" << endl;
                        else
                        {
                            cout << "Turbo a fost imbunatatit, noul tau venit este in valoare de:" << venit - turbo << "$" << endl;
                            venit = venit - turbo;
                            turbo = turbo + 300;
                            im = im + 1;
                        }

                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }
                    if (s == "2")
                    {
                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }
                }

                if (opt2 == 4)
                {
                    cout << "Suspensiile costa " << suspensii << "$, esti sigur ca vrei sa le imbunatatesti?" << endl;
                    cout << "1.Da" << endl;;
                    cout << "2.Nu" << endl;;
                    cin >> s;
                    if (s == "1")
                    {
                        if (venit < suspensii)
                            cout << "Nu sunt suficiente fonduri" << endl;
                        else
                        {
                            cout << "Suspensiile au fost imbunatatite, noul tau venit este in valoare de:" << venit - suspensii << "$" << endl;
                            venit = venit - suspensii;
                            suspensii = suspensii + 350;
                            im = im + 1;
                        }

                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }

                    if (s == "2")
                    {
                        cout << "Doresti sa mai imbunatatesti ceva, sau sa participi direct la cursa?" << endl;
                        cout << "1.Imbunatatire" << endl;;
                        cout << "2.Cursa" << endl;;
                        cin >> s;
                        if (s == "1")
                            opt = 1;
                        if (s == "2")
                            opt = 2;
                    }
                }

                if(opt==2 and im==0)
                {
                    Setup();
                    while (!gameOver)
                    {
                        Draw();
                        Input();
                        {
                            switch (dir)
                            {
                            case RIGHT:
                                x=x+1%2;
                                p=p+2;
                                break;
                            default:
                                break;
                            }

                            if (x == width)
                            {
                                gameOver=true;
                                cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                                cin>>s;
                                if(s=="da")
                                    opt=1;
                                else
                                {
                                    cout<<"La revedere";
                                    return 0;
                                }
                            }
                        }
                        Sleep(25);
                    }

                }
                if(opt==2 and im==1)
                {
                    Setup();
                    cout << "Press 'd' to start the race" << endl;
                    while (!gameOver)
                    {
                        Draw();
                        Input();
                        {
                            switch (dir)
                            {
                            case RIGHT:
                                x=x+1;
                                p=p+2;
                                break;
                            default:
                                break;
                            }
                            if (x == width)
                            {
                                gameOver=true;
                                cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                                cin>>s;
                                if(s=="da")
                                    opt=1;
                                else
                                {
                                    cout<<"La revedere!";
                                    return 0;
                                }
                            }
                        }
                        Sleep(25);
                    }

                }
                if(opt==2 and im==2)
                {
                    Setup();
                    while (!gameOver)
                    {
                        Draw();
                        Input();
                        {
                            switch (dir)
                            {
                            case RIGHT:
                                x=x+3%2;
                                p=p+2;
                                break;
                            default:
                                break;
                            }

                            if (x == width)
                            {
                                gameOver=true;
                                cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                                cin>>s;
                                if(s=="da")
                                    opt=1;
                                else
                                {
                                    cout<<"La revedere!";
                                    return 0;
                                }
                            }
                        }
                        Sleep(25);
                    }

                }
                if(opt==2 and im==3)
                {
                    Setup();
                    while (!gameOver)
                    {
                        Draw();
                        Input();
                        {
                            switch (dir)
                            {
                            case RIGHT:
                                x=x+3;
                                p=p+2;
                                break;
                            default:
                                break;
                            }

                            if (x == width)
                            {
                                gameOver=true;
                                cout<<"Felicitari,ai castigat cursa!"<<endl;
                                return 0;
                            }
                        }
                        Sleep(25);
                    }
                }
                if(opt==2 and im==4)
                {
                    Setup();
                    while (!gameOver)
                    {
                        Draw();
                        Input();
                        {
                            switch (dir)
                            {
                            case RIGHT:
                                x=x+4;
                                p=p+2;
                                break;
                            default:
                                break;
                            }

                            if (x == width)
                            {
                                gameOver=true;
                                cout<<"Felicitari,ai castigat cursa!"<<endl;
                                return 0;
                            }
                        }
                        Sleep(25);
                    }

                }
            }

        }


        if(opt==2 and im==0)
        {
            Setup();
            while (!gameOver)
            {
                Draw();
                Input();
                {
                    switch (dir)
                    {
                    case RIGHT:
                        x=x+1%2;
                        p=p+2;
                        break;
                    default:
                        break;
                    }

                    if (x == width)
                    {
                        gameOver=true;
                        cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                        cin>>s;
                        if(s=="da")
                            opt=1;
                        else
                        {
                            cout<<"La revedere!";
                            return 0;
                        }
                    }
                }
                Sleep(25);
            }
        }

        if(opt==2 and im==1)
        {
            Setup();
            while (!gameOver)
            {
                Draw();
                Input();
                {
                    switch (dir)
                    {
                    case RIGHT:
                        x=x+1;
                        p=p+2;
                        break;
                    default:
                        break;
                    }

                    if (x == width)
                    {
                        gameOver=true;
                        cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                        cin>>s;
                        if(s=="da")
                            opt=1;
                        else
                        {
                            cout<<"La revedere!";
                            return 0;
                        }
                    }
                }
                Sleep(25);
            }

        }
        if(opt==2 and im==2)
        {
            Setup();
            while (!gameOver)
            {
                Draw();
                Input();
                {
                    switch (dir)
                    {
                    case RIGHT:
                        x=x+3%2;
                        p=p+2;
                        break;
                    default:
                        break;
                    }

                    if (x == width)
                    {
                        gameOver=true;
                        cout<<"Ai pierdut cursa.Vrei sa iti imbunatatesti masina si sa incerci din nou?"<<endl;
                        cin>>s;
                        if(s=="da")
                            opt=1;
                        else
                        {
                            cout<<"La revedere!";
                            return 0;
                        }
                    }
                }
                Sleep(25);
            }
        }

        if(opt==2 and im==3)
        {
            Setup();
            while (!gameOver)
            {
                Draw();
                Input();
                {

                    switch (dir)
                    {
                    case RIGHT:
                        x=x+3;
                        p=p+2;
                        break;
                    default:
                        break;
                    }

                    if (x == width)
                    {
                        gameOver=true;
                        cout<<"Felicitari,ai castigat cursa!"<<endl;
                        return 0;
                    }
                }
                Sleep(25);
            }
        }

        if(opt==2 and im==4)
        {
            Setup();
            while (!gameOver)
            {
                Draw();
                Input();
                {

                    switch (dir)
                    {
                    case RIGHT:
                        x=x+4;
                        p=p+2;
                        break;
                    default:
                        break;
                    }

                    if (x == width)
                    {
                        gameOver=true;
                        cout<<"Felicitari,ai castigat cursa!"<<endl;
                        return 0;
                    }
                }
                Sleep(25);
            }
        }
    }
    return 0;
}