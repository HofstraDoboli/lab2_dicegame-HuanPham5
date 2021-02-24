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
    bool not_win = false;
    bool not_lose = false;
    int sum,prev_sum;
    string response;
    cout<<"Welcome to craps dice game!"<<endl;
    cout<<"Rules: If the sum of your dice is 7 or 11, you win!"<<endl;
    cout<<"But if the sum of your dice is 2 or 3 or 12, you lose..."<<endl;
    cout<<"Do you want to start? (y or no)"<<endl;
    cin>>response;
    while (response=="Y" || response == "y")
    {
        play = true;
    
        
        int dice_output1 = rand()%6+1;
        int dice_output2 = rand()%6+1; 
        
    
            
        sum = dice_output1 + dice_output2;
        cout <<"You rolled: "<<dice_output1 <<" and "<<dice_output2<<endl;
        cout <<"So your sum is: "<<sum<<endl;

        if (sum == 7 || sum ==11)
        {
               cout<<"Congrats you won!"<<endl;
               play = false;
        }

        else if (sum ==2 || sum==3 || sum==12)
        { 
               cout<<"Sorry you lost..."<<endl;
               play = false;
        }
        else
        {
            
            prev_sum = sum;
            
            cout<<"You establishes a point of: "<<sum<<endl;
            not_win = true;
            not_lose = true;
            while (not_win && not_lose)
            {
                int dice_output1 = rand()%6+1;
                int dice_output2 = rand()%6+1;
                sum = dice_output1 + dice_output2;
                cout <<"After the point, you rolled again: "<<dice_output1 <<" and "<<dice_output2<<endl;
                cout <<"So your sum now is: "<<sum<<endl;
                if (prev_sum == sum)
                {
                  cout<<"You won!"<<endl;
                  break;
                  
                }
                
                else if (sum == 7)
                {
                    cout<<"Sorry you lost..."<<endl;
                    break;
                }
                else
                {
                    cout<<"Again? (y or no)"<<endl;
                    cin>>response;
                    if (response=="y")
                        continue;
                    else
                        break;
                }
    
            }
            
        }

         cout<<"Continue? (y or no)"<<endl;
         cin>>response;
         if (response=="y")
             continue;
         else
             play = false;
             cout<<"Thanks for playing!"<<endl;
             break;
        }
            
            

        

    
    
       
    
    
}


