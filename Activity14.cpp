
#include <iostream>
using namespace std;

int main()
{
    long ElapsedSeconds = time(0);

    srand(ElapsedSeconds);
    int minValue = 1;
    int maxValue = 10;

    int secret_num = (rand() % (maxValue - minValue + 1)) + minValue;
    int users_num = -1;

    cout << "Try to guess the secret number from 0 to 10." << endl;

    

    while (users_num != secret_num) {
        cout << "Try to guess the secret number! Enter any number you have in mind: " << endl;
        cin >> users_num;
    }
    cout << "You did not guess the secret number!";

}

