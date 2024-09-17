
#include <iostream>
using namespace std;

int main()
{
    long ElapsedSeconds = time(0);

    srand(ElapsedSeconds);
    int secret_num = rand();
    int users_num;

    

    while (users_num != secret_num)
        cout << "Try to guess the secret number! Enter any number you have in mind: " << endl;
        cin >> users_num;

    cout << "You did not guess the secret number!";

}

