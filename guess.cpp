#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	cout << "Guess My Number Game\n\n";
	srand (time(NULL));
	num = rand() % 1000000 + 1;
	do
	{
		cout << "Enter a guess between 1 and 1000000 : ";
		cin >> guess;
		tries++;
		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}

