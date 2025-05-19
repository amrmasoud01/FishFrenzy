#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <vector>
#include <cstdlib> // for rand and srand
#include <ctime>

// draws a fish at (x,y) position inputs
void makefish(int fishpositionx,int fishpositiony);

int main()
{
    srand(time(0)); // used to pick random numbers
    std::vector<int> bubbles; // vectors that stores [x1 , y1 , size1 , speed1 , x2, y2, size2, speed2 ,...etc]
    int score = 0;
    char scorestr[10];
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "\\borlandc\\bgi");
    settextstyle(6,0,5);
    for(;;)
    {
        cleardevice();
        makefish(mousex(),mousey());
        setcolor(WHITE);
        if(rand() % static_cast<int>(40*pow(0.97,score)) == 1)
        {
            bubbles.push_back(650); // X
            bubbles.push_back(rand()%480); // Y
            bubbles.push_back(10+rand()%30); // Size
            bubbles.push_back(2+rand()%7); // Speed
        }
        for (int i = 0; i < bubbles.size(); ++i) {
            circle(bubbles[i],bubbles[i+1],bubbles[i+2]);
            if(sqrt(pow(bubbles[i] - mousex(), 2) + pow(bubbles[i+1] - mousey(), 2))<bubbles[i+2]+20){
                cleardevice();
                line(0,100,660,100);
                line(0,300,660,300);
                outtextxy(200,200,"You Died.");
                outtextxy(400,300,scorestr);
                getch();
                closegraph();
            }
            bubbles[i] -=bubbles[i+3];

            i +=3;
        }
        sprintf(scorestr,"%d",score);
        outtextxy(400,30,scorestr);
        delay(50);
        score =bubbles.size()/4;
    }

    getch();
    closegraph();
    return 0;
}
void makefish(int fishpositionx,int fishpositiony){
    setfillstyle(SOLID_FILL, WHITE);
    fishpositionx -=25; //to fix the mouse to the middle of the fish
    fishpositiony -=62;
    int fish[]={0+fishpositionx, 50+fishpositiony,5+fishpositionx,62+fishpositiony,  0+fishpositionx, 75+fishpositiony, 25+fishpositionx,50+fishpositiony,50+fishpositionx,62+fishpositiony,25+fishpositionx,75+fishpositiony};
    setcolor(BLACK);
    fillpoly(6,fish);

    circle(35+fishpositionx,58+fishpositiony,2); // fish eye
}
