#include <iostream>

#include <iomanip>

using namespace std;

int main()

{

   int r, c;

   char seat_resvr;

   char tic_type;

   char availability[13][6], reserved[2];

   int row_num, col_num;

   char seats;

   cout << "A program that lets you choose your seating arrangement on an airplane";

   cout << endl;

   char A[13][6];

   for (int r = 0; r < 13; r++)

   {

       for (int c = 0; c < 6; c++)

           A[r][c] = '*';

   }

   int row, seat;

   cin >> row >> seat;

   A[row - 1][seat - 1] = 'X';

   cout << " A B C D E F" << endl;

   for (int r = 0; r < 13; r++)

   {

       cout << "Row" << setw(3) << r + 1 << " ";

       for (int c = 0; c < 6; c++)

           cout << A[r][c] << ' ';

       cout << endl;

   }

   cout << endl << "* -- available seat" << endl

       << "X -- occupied seat" << endl << endl

       << "Rows 1 and 2 are for first class passengers." << endl

       << "Rows 3 through 7 are for business class passengers." << endl

       << "Rows 8 through 13 are for economy class passengers." << endl;

   cout << "To reserve a seat enter Y/y (Yes), N/n(No):" << endl;

   cin >> seat_resvr;

   reserved[2] = 'X';

   return 0;

}
