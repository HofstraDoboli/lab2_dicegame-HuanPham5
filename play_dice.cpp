/* Huan Pham */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    bool play = false;
    bool play2 = false;
    string response,response1,response2,response3,response4,response5;
    cout<<"Welcome to craps dice game!"<<endl;
    cout<<"Rules: If the sum of your dice is 7 or 11, you win!"<<endl;
    cout<<"But if the sum of your dice is 2 or 3 or 12, you lose..."<<endl;
    cout<<"Do you want to start? (y or no)"<<endl;
    cin>>response;
    if (response=="y")
    {
        play = true;
    
        while (play)
        {
            int dice_output1 = rand()%6+1;
            int dice_output2 = rand()%6+1  ; 
            int sum,prev_sum;
            //prev_sum = 0;
            
            sum = dice_output1 + dice_output2;
            cout <<"You rolled: "<<dice_output1 <<" and "<<dice_output2<<endl;
            cout <<"So your sum is: "<<sum<<endl;
            if (sum == 7 || sum ==11)
            {
               cout<<"Congrats you won!"<<endl;
               cout<<"Continue? (y or no)"<<endl;
               cin>>response1;
               if (response1=="y")
                  continue;
               else
                 play = false;
                 cout<<"Thanks for playing!"<<endl;
               
            }
            else if (sum ==2 || sum==3 || sum==12)
            { 
               cout<<"Sorry you lost..."<<endl;
               cout<<"Try again? (y or no)"<<endl;
               cin>>response2;
               if (response2=="y")
                  continue;
               else
                  cout<<"Thanks for playing!"<<endl;
                  break;
            }
            else if (prev_sum == sum)
            {
                  cout<<"You won!"<<endl;
                  cout<<"Want to play again?"<<endl;
                  cin>>response4;
                  if (response4=="y")
                      continue;
                  else
                      break;

            }
            else
                cout<<"You establishes a point, you need to get the sum of: "<<sum<<". Roll again? (y or no)"<<endl;
                cin>>response3;

                prev_sum = sum;
                int sum2,dice_output3,dice_output4;
                if (response3=="y")
                {
                   continue;
                    /*
                    Cannot make the point to work properly
                    play2 = true;
                    while (play2)
                        dice_output3 = rand()%6+1; //change this expression so dice_output has a value between 1 and 6
                        dice_output4 = rand()%6+1  ; 
                        sum2 = dice_output3 + dice_output4;
                        cout <<"You rolled: "<<dice_output3 <<" and "<<dice_output4<<endl;
                        cout <<"So your sum is: "<<sum2<<endl;
                        if (sum2 == sum)
                    
                            cout<<"You win!"<<endl;
                            cout<<"Continue?(y or no)"<<endl;
                       
                            if (response4=="y")
                               continue;
                            else
                               break;
                        if (sum2 == 7)
                            cout<<"You lose"<<endl;
                            cout<<"Continue?(y or no)"<<endl;
                       
                            if (response5=="y")
                               continue;
                            else
                               break;
                        */       

                }
                    //else
                       //continue;
                else
                {

                  cout<<"Thanks for playing!"<<endl;
                  break;
                }
            }

        }

    else
    {
        cout<<"See you later!"<<endl;
    
    }
    }


