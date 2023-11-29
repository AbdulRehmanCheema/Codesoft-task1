#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
 {
    
    srand(time(0));   // We can generate a random number using this built in function 
    int Random_Number = rand() % 100 + 1;      		// this will generate a random number between 1 and 100

    int Guess;

    while (true) 
	{
        
        cout << "Guess the number between 1 and 100: \n"; // This will display a message on screen to ask user for an input
        cin >> Guess;

        
        if (Guess == Random_Number) // Using if else condition to check whether the number is right/above or below the random number generated
		{
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (Guess < Random_Number)
		 {
            cout << "Too low. Try again." << endl;
        } else 
		{
            cout << "Too high. Try again." << endl;
        }
    }
       system("pause");
        return 0;
}
