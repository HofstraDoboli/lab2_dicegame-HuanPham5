/*
    Understanding input: cin, getline
*/

#include <iostream>
#include <vector>
#include <fstream> 
#include <climits>
using namespace std;

int main()
{

    ofstream output_file;           // output_file = is an output stream object that sends a stream of chars from the program into an output file
    output_file.open("out_lab2_2_answers"); // open an outpuf file where output_file will send data. 
    vector<string> array_values;    // declares an empty vector of strings
    array_values.push_back("10");   // add "10" 
    array_values.push_back("4.5");  // add "4.5"
    array_values.push_back("abc"); 
    array_values.push_back("a");

    int val;  // declare an integer variable int

    cout << "Code for Q1" << endl;
    
    /*
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
    
        cout << "\tEnter an int "; 
        cin >> val; 

        cout << "\n\tCheck fail flag in cin " <<  cin.fail() << endl;
        cout << "\tYou entered " << val << endl << endl;
    }

    // cin = is a stream object that takes characters from the keyboard and extracts data according 
    //       to the type of the variable in your program.
    //      = If it cannot extract the type specified in your program (in our case an integer), it might leave
    //      characters in the stream, which will conflict with future cin statements.
    
    // See whether the cin buffer is empty or not
    cin.clear();        // set all error flags to false
    string s;
    getline(cin, s);    // extracts characters from cin into the string object s
                        // getline = is a function defined in the <string> class
                        // check its definition at: http://www.cplusplus.com/reference/string/string/getline/ 
    cout << "Check what is left unread in the cin buffer: " << s << endl;
    cout << "Nr. characters left unred in cin buffer: " << s.length() << endl;
    */
    
    output_file << "\nQ1: (cin only) What happens when you run the code above? Explain why" << endl;
    string answer = "When enter 10, the flag is false so the program keeps running then enter 4.5, the flag is still false but the program extracts only 4 and left 0.5 in the buffer so it keeps looping without accepting new value."; // enter your answer in between ""
    output_file << "Answer Q1: " << answer << endl;
    


    cout << "\nCode for Q2 and Q3" << endl;
     //uncomment when you get to Q2 and Q3

    /*
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        cin >> val;

        cout << "\n\tCheck fail flag in cin " <<  cin.fail()<< endl;

        string s; 
        getline(cin,s); 
        cout << "\tCheck what is left unread in the cin buffer: Length =" << s.length() 
             << "\tString " << s << endl;

        if (cin.fail())
        {
            cin.clear(); // clears the flags   
            cin.ignore(INT_MAX,'\n'); // ignore all characters from cin until new line '\n'
            cout << "\tERROR: The value you entered is not an integer. Try again." << endl;
        }
        
        cout << "\tYou entered " << val << endl << endl;
    }  
    */
    

    output_file << "\nQ2: (cin + fail+ignore) What happens when you run the code above? Explain why." << endl;
    answer = "When enter 10, the flag is false so the program keeps running then enter 4.5, the flag is still false, extracts 4 and leave 0.5 in the buffer but this time, the program let you enter another value abc. When enter abc, the flag is set to true. Nothing is left in the buffer and it let you enter again. When enter a, the flag is set to true and the program terminated."; // enter your answer in between ""
    output_file << "Answer Q2: " << answer << endl;

    output_file << "\nQ3: Is the problem of reading an integer value solved? Explain your reasoning." << endl;
    answer = "No because when enter 4.5, the flag is set to false and it didn't say is not an integer."; // enter your answer in between ""
    output_file << "Answer Q3: " << answer << endl;

    cout << "\nCode for Q4" << endl;
    // uncomment when you get to Q4
     /*
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        string s;
        getline(cin,s);     // read a line of input from the cin buffer - 
                            // up to and including '\n'
        val = stoi(s);  // stoi = converts a string into an integer 
                            // read more at http://www.cplusplus.com/reference/string/stoi/?kw=stoi
        cout << "\tYou entered " << val << endl << endl;
    }  
    
    */

    output_file << "\nQ4: (getline only) What happens when you run the code above? Explain why." << endl;
    answer = "10 is read as an integer, 4.5 is read as 4. And when enter abc, it terminate with an error stoi because abc cannot be converted to an int "; // enter your answer in between ""
    output_file << "Answer Q4: " << answer << endl;

    // Comment the for loop for Q4 above - leave the answer to Q4
    
    cout << "\nCode for Q5" << endl;
    /*
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        string s;
        getline(cin,s); 
 
        try{   // read more about exceptions at https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
            val = stoi(s);
            cout<<s.length();
        }
        catch(const std::invalid_argument& ia)
        {
            cerr << "\tInvalid argument: " << ia.what() << '\n';
        }
        cout << "\tYou entered " << val << endl << endl;
    }
    */
    output_file << "\nQ5: (getline+stoi) What happens when you run the code above? Explain why." << endl;
    answer = "Just like Q4, 10 is read normal, 4.5 is read as 4 but when enter abc, the error is displayed but is not terminated because of the inclusion of the try catch function and so it will display the previous accepted output which is 4."; // enter your answer in between ""
    output_file << "Answer Q5: " << answer << endl;

    //6. Q6 Add code to enter integer values from the keyboard correctly = accept only 10, not 4.5, abc or a
    cout << "\nCode for Q6" << endl;
    
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 

        string s;
        getline(cin,s);
        if (s.length()>4){
            cout<<"That's not an integer";
        }
        else{
            try{
            val = stoi(s);
            }
            catch(const std::invalid_argument& ia)
        {
            cerr << "\tInvalid argument: " << ia.what() << '\n';
        }
        cout<<"\tYou entered "<<val<<endl<<endl;
        

        }
        


        // add your code - it should ask you to type the value you see at line 134. 
        // it should display "Correct 10 " when you enter 10; 
        // it should display "Incorrect ", followed by the value you entered, for the rest of of the values 
        // (4.5, abc or a) 
        // YOUR CODE NEEDS TO DETECT that 4.5 is not an integer
    }

    

    output_file << "\nQ6: Explain your method to validate integer values entered" << endl;
    answer = "Using what I've learnt from the previous question, I check the if its an integer by using s.length() and then try catch function to keep the loop going despite not entering the correct type."; // enter your answer in between ""
    output_file << "Answer Q6: " << answer << endl;
    output_file.close();
}
