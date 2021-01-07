#include<iostream>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;





/* This program is simple a game of CRICKET which is based upon the
   random function.
		     !!!!!!!
   Please Note:It is a game of chances, and not of
   skill and ability.
		     !!!!!!!
   */
//Variables
int A,a,c,i,j,u=0,y=0,total1=0,total2=0,totalt,totalo;
char t[20],o[20],to,d,r,x;
//Function for the TOSS
void TOSS()
{
cout<<"\nLet's head for the toss...";
cout<<"\nHeads or Tails?(Enter:h/t):"<<endl;
cin>>to;
if(to=='h')
A=0;
else
A=1;
a=random(2);
if(a==0)
cout<<"\nIt's Heads!!";
else
cout<<"\nIt's Tails!!";
if(A==a)
{
cout<<"\nYou WON the Toss!!";
cout<<"\nBatting or Fielding?(Enter:b/f):"<<endl;
cin>>d;
}
else
{ cout<<"\nYou LOST the Toss!!";
  c=random(2);
  if(c==0)
  { cout<<"\n"<<o<<" selected to BAT!";
    d='B';  }
  else
  { cout<<"\nThe opposite captain selected to BOWL!";
    d='F';  }
}
cout<<"\n|RULES|--";
cout<<"\n1. The game is of 2 overs and you have only 2 wickets in hand.";
cout<<"\n2. Enter \'b\' to bowl";
getch();
clrscr();
}
//The 1st Innings
void INNINGS_1()
{
textcolor(LIGHTGREEN);
clrscr();
//1st Over
for(i=1;i<=6;i++)
   { cout<<endl;
      if(i!=1)
       cin>>x;
     cout<<"\nOvers-"<<"0."<<i-1;
     r=random(7);
      if(r==0)
       { cout<<"\nOUT!!";
	 u++;
	 getch();
	 if(u==2)
	 goto lb;
       }
      if(r==1)
       cout<<"\n1 run";
      if(r==2)
       cout<<"\n2 runs....Good running between the wickets!";
      if(r==3)
       cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
      if(r==4)
       cout<<"\nFour!! Good shot...";
      if(r==5)
       cout<<"\nFour-byes...and a run too...5 runs more!";
      if(r==6)
       cout<<"\nSIX!!!..BOOM!! Marvellous shot";
   total1=total1+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-1"
      "\n\t\t\t\t =======";
getch();
textcolor(RED);
clrscr();
//2nd Over
for(j=1;j<=6;j++)
{  cout<<endl;
    if(j!=1)
     cin>>x;
   cout<<"\nOvers-1."<<j-1;
   r=random(7);
    if(r==0)
     { cout<<"\nOUT!!";
       u++;
       getch();
	if(u==2)
	 goto lb;
     }
    if(r==1)
     cout<<"\n1 run";
    if(r==2)
     cout<<"\n2 runs....Good running between the wickets!";
    if(r==3)
     cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
    if(r==4)
     cout<<"\nFour!! Good shot...";
    if(r==5)
     cout<<"\nFour-byes...and a run too...5 runs more!";
    if(r==6)
     cout<<"\nSIX!!! BOOM...Marvellous shot";
  total2=total2+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-2"
      "\n\t\t\t\t =======";
getch();
lb:
textcolor(MAGENTA);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n"
      "\t\t=======================================\n"
      "\t\t___________End of 1st Innings__________\n"
      "\t\t=======================================\n";
getch();
}
//The 2nd Innings
void INNINGS_2()
{
textcolor(GREEN);
clrscr();
cout<<"\t\t\n\n\n\n\n\n\n\n\n\nReady for the 2nd Innings??........OK Let's GO ABHI!!!!!";
//2ND INNINGS
textcolor(LIGHTBLUE);
clrscr();
//1st Over
for(i=1;i<=6;i++)
{    cout<<endl;
      if(i!=1)
       cin>>x;
     cout<<"\nOvers-"<<"0."<<i-1;
     r=random(7);
      if(r==0)
       { cout<<"\nOUT!!";
	 y++;
	 getch();
	  if(y==2)
	   goto st;
       }
      if(r==1)
       cout<<"\n1 run";
      if(r==2)
       cout<<"\n2 runs....Good running between the wickets!";
      if(r==3)
       cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
      if(r==4)
       cout<<"\nFour!! Good shot...";
      if(r==5)
       cout<<"\nFour-byes...and a run too...5 runs more!";
      if(r==6)
       cout<<"\nSIX!!!..BOOM!! Marvellous shot";
   total1=total1+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-1"
      "\n\t\t\t\t =======";
getch();
//2nd OVER
textcolor(LIGHTRED);
clrscr();
for(j=1;j<=6;j++)
{  cout<<endl;
    if(j!=1)
     cin>>x;
   cout<<"\nOvers-1."<<j-1;
   r=random(7);
    if(r==0)
     { cout<<"\nOUT!!";
       y++;
       getch();
	if(y==2)
	 goto st;
     }
    if(r==1)
     cout<<"\n1 run";
    if(r==2)
     cout<<"\n2 runs....Good running between the wickets!";
    if(r==3)
     cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
    if(r==4)
     cout<<"\nFour!! Good shot...";
    if(r==5)
     cout<<"\nFour-byes...and a run too...5 runs more!";
    if(r==6)
     cout<<"\nSIX!!! BOOM...Marvellous shot";
  total2=total2+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-2"
      "\n\t\t\t\t =======";
getch();
st:
textcolor(LIGHTCYAN);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n"
      "\t\t=======================================\n"
      "\t\t___________End of 2nd Innings__________\n"
      "\t\t=======================================\n";
getch();
}
void main()
{        clrscr();
randomize();
textcolor(GREEN);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n"
      "\t###########################################################\n"
      "\t***********************************************************\n"
      "\t===========================================================\n"
      "\t+++++++++++++++Welcome to ICC World Cup 2017+++++++++++++++\n"
      "\t===========================================================\n"
      "\t***********************************************************\n"
      "\t###########################################################\n";
getch();
clrscr();
//~~~~~~~~~~GRAPHICS:BAT, BALL, WICKETS~~~~~~~~~~~
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(200,300,190,120);
floodfill(191,121,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(230,300,220,120);
floodfill(221,121,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(260,300,250,120);
floodfill(251,121,WHITE);
circle(300,280,20);
setfillstyle(INTERLEAVE_FILL,RED);
floodfill(300,280,WHITE);
setfillstyle(INTERLEAVE_FILL,YELLOW);
rectangle(340,160,375,300);
floodfill(341,161,WHITE);
setfillstyle(INTERLEAVE_FILL,BROWN);
rectangle(350,160,365,100);
floodfill(364,101,WHITE);
getch();
closegraph();
//Here it BEGINS!!!
textcolor(GREEN);
clrscr();
cout<<"\nChoose your team:";
gets(t);
cout<<"\nChoose opponent team:";
gets(o);
getch();
textcolor(LIGHTCYAN);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t      "<<t<<" V/S "<<o;
getch();
textcolor(CYAN);
clrscr();

TOSS();

textcolor(YELLOW);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tReady??........OK Let's GO ABHI!!!!!";
getch();
/*
//1ST INNINGS
textcolor(LIGHTGREEN);
clrscr();
//1st Over
for(i=1;i<=6;i++)
   { cout<<endl;
      if(i!=1)
       cin>>x;
     cout<<"\nOvers-"<<"0."<<i-1;
     r=random(7);
      if(r==0)
       { cout<<"\nOUT!!";
	 u++;
	 getch();
	 if(u==2)
	 goto lb;
       }
      if(r==1)
       cout<<"\n1 run";
      if(r==2)
       cout<<"\n2 runs....Good running between the wickets!";
      if(r==3)
       cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
      if(r==4)
       cout<<"\nFour!! Good shot...";
      if(r==5)
       cout<<"\nFour-byes...and a run too...5 runs more!";
      if(r==6)
       cout<<"\nSIX!!!..BOOM!! Marvellous shot";
   total1=total1+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-1"
      "\n\t\t\t\t =======";
getch();
textcolor(RED);
clrscr();
//2nd Over
for(j=1;j<=6;j++)
{ cout<<endl;
  if(j!=1)
  cin>>x;
  cout<<"\nOvers-1."<<j-1;
  r=random(7);
  if(r==0)
  { cout<<"\nOUT!!";
   u++;
   getch();
   if(u==2)
   goto lb;
  }
  if(r==1)
  cout<<"\n1 run";
  if(r==2)
  cout<<"\n2 runs....Good running between the wickets!";
  if(r==3)
  cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
  if(r==4)
  cout<<"\nFour!! Good shot...";
  if(r==5)
  cout<<"\nFour-byes...and a run too...5 runs more!";
  if(r==6)
  cout<<"\nSIX!!! BOOM...Marvellous shot";
  total2=total2+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-2"
      "\n\t\t\t\t =======";
getch();
lb:
textcolor(MAGENTA);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n"
      "\t\t=======================================\n"
      "\t\t___________End of 1st Innings__________\n"
      "\t\t=======================================\n";
getch();*/

INNINGS_1();

textcolor(LIGHTMAGENTA);
clrscr();
if(d=='b'||d=='F')
{
totalt=total1+total2;
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tThe total score of "<<t<<
      " is:"<<totalt<<"/"<<u;
}
if(d=='B'||d=='f')
{
totalo=total1+total2;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tThe total score of "<<o<<
      " is:"<<totalo<<"/"<<u;
}
r=0;
total1=0;
total2=0;
getch();
/*
textcolor(GREEN);
clrscr();
cout<<"\t\t\n\n\n\n\n\n\n\n\n\nReady for the 2nd Innings??........OK Let's GO ABHI!!!!!";
//2ND INNINGS
textcolor(LIGHTBLUE);
clrscr();
//1st Over
for(i=1;i<=6;i++)
{     cout<<endl;
      if(i!=1)
       cin>>x;
     cout<<"\nOvers-"<<"0."<<i-1;
     r=random(7);
      if(r==0)
       { cout<<"\nOUT!!";
	 y++;
	 getch();
	  if(y==2)
	   goto st;
       }
      if(r==1)
       cout<<"\n1 run";
      if(r==2)
       cout<<"\n2 runs....Good running between the wickets!";
      if(r==3)
       cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
      if(r==4)
       cout<<"\nFour!! Good shot...";
      if(r==5)
       cout<<"\nFour-byes...and a run too...5 runs more!";
      if(r==6)
       cout<<"\nSIX!!!..BOOM!! Marvellous shot";
   total1=total1+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-1"
      "\n\t\t\t\t =======";
getch();
textcolor(LIGHTRED);
clrscr();
for(j=1;j<=6;j++)
{ cout<<endl;
  if(j!=1)
  cin>>x;
  cout<<"\nOvers-1."<<j-1;
  r=random(7);
  if(r==0)
  { cout<<"\nOUT!!";
   y++;
   getch();
   if(y==2)
   goto st;
  }
  if(r==1)
  cout<<"\n1 run";
  if(r==2)
  cout<<"\n2 runs....Good running between the wickets!";
  if(r==3)
  cout<<"\n3 runs...Overthrow..and 3 more runs to the score!";
  if(r==4)
  cout<<"\nFour!! Good shot...";
  if(r==5)
  cout<<"\nFour-byes...and a run too...5 runs more!";
  if(r==6)
  cout<<"\nSIX!!! BOOM...Marvellous shot";
  total2=total2+r;
}
getch();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t ======="
      "\n\t\t\t\t Overs-2"
      "\n\t\t\t\t =======";
getch();
st:
textcolor(LIGHTCYAN);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n"
      "\t\t=======================================\n"
      "\t\t___________End of 2nd Innings__________\n"
      "\t\t=======================================\n";
getch(); */

INNINGS_2();

textcolor(BLUE);
clrscr();
if(d=='B'||d=='f')
{
totalt=total1+total2;
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tThe total score of "<<t<<
      " is:"<<totalt<<"/"<<y;
}
if(d=='b'||d=='F')
{
totalo=total1+total2;
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tThe total score of "<<o<<
      " is:"<<totalo<<"/"<<y;
}
getch();
clrscr();

if(totalo<totalt)
{
textcolor(GREEN+BLINK);
clrscr();
cout<<"\n\t\t\t\tTeam "<<t<<" has WON!!";
cout<<"\n\n\n\t\t*****************CONGRATULATIONS!!*****************\n\n\n\n";
cout<<"*      *   ********   *      *        *             *    ********    **      *\n"
       <<" *    *    *      *   *      *        *             *    *      *    * *     *\n"
       <<"  *  *     *      *   *      *        *      *      *    *      *    *  *    *\n"
       <<"   **      *      *   *      *        *     * *     *    *      *    *   *   *\n"
       <<"   **      *      *   *      *         *   *   *   *     *      *    *    *  *\n"
       <<"   **      *      *   *      *          * *     * *      *      *    *     * *\n"
       <<"   **      ********   ********           *       *       ********    *      **\n";
cout<<"\n\n\n\n\n\n\n\n\n\n";
}
else
{
textcolor(RED+BLINK);
clrscr();
cout<<"\n\t\t\t\tTeam "<<o<<" has WON!!";
cout<<"\n\n\n\n\n\n\n";
cout<<"*      *   ********   *      *      *          ********   ********   ******** \n"
       <<" *    *    *      *   *      *      *          *      *   *          *        \n"
       <<"  *  *     *      *   *      *      *          *      *   *          *        \n"
       <<"   **      *      *   *      *      *          *      *   ********   *****    \n"
       <<"   **      *      *   *      *      *          *      *          *   *        \n"
       <<"   **      *      *   *      *      *          *      *          *   *        \n"
       <<"   **      ********   ********      ********   ********   ********   ******** \n";
cout<<"\n\n\n\n\n\n\n\n\n\n";
}
getch();
}
