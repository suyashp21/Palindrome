#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  srand (time(NULL));
  int counter = 0;
  int value = -1;
  int guess = -2;
  char replay = 'y';
  while (replay != 'n') { // keep playing until player doesnt want to
    counter = 0;
    value = rand() % 50; // initialize number
    while (guess != value) { // loop until player guessing correctly
      counter++; // increase no. of guesses
      cout << "Enter your guess." << endl;
      cin >> guess;
      if (guess < value) { // guess too low
	cout << "Too low" << endl;
      }
      if (guess > value) { // guess too high
	cout << "Too high" << endl;
      }
      if (guess == value) { // correct guess
	cout << "congrats u winner in " << counter << " guesses" << endl;
	// program exits while loop
      }
    }
    cout << "Play again? (y/n)" << endl;
    cin >> replay; // read in whether player wants to replay
  }
  return 0;
}
