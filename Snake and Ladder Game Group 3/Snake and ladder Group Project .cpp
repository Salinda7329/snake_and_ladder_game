#include<iostream>
#include<ctime>
#include<windows.h>
#include<conio.h>
using namespace std;


void intro()
{

    cout<<"\n\n\n\n\n\n\n\n\n                  --------------------------------------------------------------------------------------";
    cout<<"\n                   |                           Welcome to 'Snake and Ladders'                          |";
     cout<<"\n                  --------------------------------------------------------------------------------------";
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                        .............................";
    cout<<"\n                                                                        | Press any key to continue |";
    cout<<"\n                                                                        .............................";
    getch();
    system("cls");
}




void board()
{
    cout<<"\n\n\n";
    cout<<"                                                                  _______________________\n";
    cout<<" _________________________________________________                | LADDERS  |  SNAKES  |            \n";
    cout<<" | 41 | 42 | 43 | 44 |#45| 46 | 47 | 48 | 49 |  50 |              |  3-25    |   45-20  |\n";
    cout<<" --------------------------------------------------               |  15-30   |          |                       \n";
    cout<<" | 40 | 39 | 38 | 37 | 36 | 35 | 34 | 33 | 32 | 31 |              -----------------------   \n";
    cout<<" --------------------------------------------------\n";
    cout<<" | 21 | 22 | 23 | 24 |*25*| 26 | 27 | 28 | 29 |*30*|      \n";
    cout<<" --------------------------------------------------              \n";
    cout<<" |#20| 19 | 18 | 17 | 16 |*15*| 14 | 13 | 12 |  11 |              Enter any digit number and \n";
    cout<<" --------------------------------------------------                  Press ENTER BUTTON\n";
    cout<<" | 1  | 2  |*3* | 4  | 5  | 6  | 7  | 8  | 9  | 10 |\n";
    cout<<" --------------------------------------------------\n\n\n";
}





int dice()
{
    int t,m=0;//t is the out put number from this function. m is just an integer that displays numbers from 1 to 6 to user.

    while(true)
    {
        system("cls");
        if(m==7)
            break;
        else
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<"                                                              ---\n";
            cout<<"                                             Rolling Dice... "<<"| "<<m++<<" | \n";
            cout<<"                                                              ---\n";
        }
        Sleep(200); //Sleep will slow down the execution speed in milliseconds.
    }

    t=1 + rand() % (6 - 1 + 1);
    cout <<"\n"<<t<<" is your lucky number"<<endl;

    return t;
}


void win(string user){


 system("cls");
                               cout<<"\n\n\n\n\n\n\n\n\n                                            ________________________________\n\n";
                               cout<<"                                             Woooww...         "<<user<<"    WIN!!!\n\n";
                               cout<<"                                            ________________________________\n\n\n\n\n\n";



}

void run()
{
  int player1=0,player2=0;
  int userinput1,userinput2;//Player1 is the score of the user.
  int d1=0,d2=0;//d1 is the dice score of user.
  int start1=0,start2=0; //Used to identify when user gets a dice score of one at the beginning
  string user1,user2; //user1 is the player's name.


  cout<<"\n                                                Snake and Ladder Game\n";
  cout<<"                                          _________________________________";
  cout<<"\n\n\n\n\n\n Enter Player1 Name(in single word)\n";
  cin>>user1;

  cout<<"\n\n\n\n\n\n Enter Player2 Name(in single word)\n";
  cin>>user2;

    system("cls");


  cout<<"\n                                ***Once you get a dice score of 1, you can start play***\n";
  cout<<"\n                                         ***ONLY ENTER AN INTEGER TO PLAY***";


  while(true)
  {
        //********************************************************************Player 1   *******

      cout<<"\n\n\nPlay... "<<user1<<"\n";

      cin>>userinput1;// userinput1 is an integer input from the user but not used for any processing.
      d1=dice();// d1 is the dice score of user1



      if(d1==1 &&  start1==0 )
                      {
                          start1=1;
                          player1=0;

                          cout<<user1<<" start to move..\n";
                      }


            board();



      if(start1==1 )
                      {
                          if(player1+d1<=50)
                              player1=player1+d1;

                          if(player1==3)
                          {
                              cout<<"Taken Ladder\n";
                              player1=25;
                          }

                          else if(player1==15)
                          {
                              cout<<"Taken Ladder\n";
                              player1=30;
                          }



                           else if(player1==45)
                          {
                              cout<<"Snake..\n";
                              player1=20;
                          }


                         cout<<"                         SCORE BOARD \n";
                         cout<<"                        *************\n";
                          cout<<"              ***"<<user1<<"'s current position is*** "<<"  "<<player1;




                          if(player1==50)
                          {
                               win(user1);

                              break;
                          }



                      }



   //***************************************************************************************************************Player 2 *******


      cout<<"\n"<<"\n""\nPlay... "<<user2<<"\n";

      cin>>userinput2;// userinput2 is an integer input from the user but not used for any processing.
      d2=dice();// d2 is the dice score of user2


           if(d2==1 && start2==0)
                      {
                          start2=1;
                          player2=0;

                          cout<<user2<<" start to move..\n";
                      }

     board();


            if(start2==1 )
                      {
                          if(player2+d2<=50)
                              player2=player2+d2;

                          if(player2==3)
                          {
                              cout<<"Taken Ladder\n";
                              player2=25;
                          }

                          else if(player2==15)
                          {
                              cout<<"Taken Ladder\n";
                              player2=30;
                          }



                           else if(player2==45)
                          {
                              cout<<"Snake..\n";
                              player2=20;
                          }


                          cout<<"                         SCORE BOARD \n";
                         cout<<"                        *************\n";

                          cout<<"              ***"<<user2<<"'s current position is*** "<<"  "<<player2;



                          if(player2==50)
                          {
                                  win(user2);

                              break;
                          }





                      }






            }



}







int  main (){



        intro();

        run();



return 0;
}
