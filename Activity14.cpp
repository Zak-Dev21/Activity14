
#include <iostream>
using namespace std;

int main()
{
    // setting random secret number to value from 1 to 10
    long ElapsedSeconds = time(0);

    srand(ElapsedSeconds);
    int minValue = 1;
    int maxValue = 10;

    int secret_num = (rand() % (maxValue - minValue + 1)) + minValue;
    int users_num = -1; // initializing a variable for users number in order to use it as input

    cout << "Try to guess the secret number from 1 to 10." << endl;

    
    //the following loops around while user enters wrong number
    while (users_num != secret_num) {
        cout << "Enter any number you have in mind: " << endl;
        cin >> users_num;
    }
    cout << "Congrats you guessed the correct number!";

}

