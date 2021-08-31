// Practice 2
// Josh T
// Version 1.1.2 uploaded to github on 8-31-21

#include <iostream>

using namespace std;

int main()
{
	string name, birthday1, birthday2;

	cout << "Hello! What's your name? \n";
	cin >> name;
	cout << "What's your birthday, " << name
		<< "? (Written in text only please.) \n";
	cin >> birthday1 >> birthday2;
	cout << "Alright, " << name << ", I will wish you a happy birthday on "
		<< birthday1 << " " << birthday2  << "! \n";
}