/*Write a function that takes a C string as an input parameter and reverses the string. The function
should use two pointers, front and rear. The front pointer should initially reference the first
character in the string, and the rear pointer should initially reference the last character in the string.
Reverse the string by swapping the characters referenced by front and rear, then increment front
to point to the next character and decrement rear to point to the preceding character, and so on,
until the entire string is reversed. Write a main program to test your function on various strings of
both even and odd length.*/

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string.h>

using namespace std;

void reverse(char *s);

int main()
{
   char str[] = "";

   cout << "Enter string:" << endl;
   cin >> str;

   reverse(str);

   cout << "The string reversed is:" << endl;
   cout << str << endl;

   return 0;
}

void reverse(char *s)
{
   char *front, *rear, temp;

   front = s;      
   rear = s + strlen(s)-1;  
   while (front < rear)
   { temp = *front;
       *front = *rear;
       *rear = temp;front++;
       rear--;
   }
   return;
}
