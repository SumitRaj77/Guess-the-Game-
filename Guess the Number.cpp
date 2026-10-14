#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
    int guess = 0; 
    srand(time(0));
    int random = rand()%10;

    do
    {
        cout << "GUESS THE NUMBER b/w [ 1-9 ]" << "\n";
        cin >> guess;

        if ( guess > random)
        { cout << "Oh NO! guess is high " << "\n" <<"\n" << "\n";}

        else if ( guess < random)
        { cout << "Oh NO! guess is small " << "\n" <<"\n" <<"\n";}

        else { cout << "CONGRTULATION!! your guess is correct" << "\n" << "\n" <<"\n" << "\n";}
    } while ( guess != random );

    return 0;
}
