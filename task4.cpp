#include <iostream>

using namespace std;
void input(int& hours, int& minutes);
void output(int hours, int minutes, char type);
int convertTo12Hour(int hours, char& type);
int main() {
int hours;
int minutes;
char type;
char answer;
do
{
input(hours, minutes);
hours = convertTo12Hour(hours, type);
output(hours, minutes, type);
cout << "Perform another calculation? (y/n): ";
cin >> answer;
} while ((answer == 'Y') || (answer == 'y'));
return 0;
}

void input(int& hours, int& minutes) {
cout << "Enter the hours for the 24 hour time: ";
cin >> hours;
cout << "Enter the minutes for the 24 hour time: ";
cin >> minutes;
}
void output(int hours, int minutes, char type) {
cout << "The time converted to 12 hour format is: " << hours << ":";
cout.width(2);
cout.fill('0');
cout << minutes;
if (type == 'A')
cout << " A.M." << endl;
else
cout << " P.M." << endl;
}
void Convert( int& hours )
{
hours = hours % 12;
}
if( hours < 12)
{
pm = 'A';
}
else{
hours -= 12;
pm = 'P';
}

