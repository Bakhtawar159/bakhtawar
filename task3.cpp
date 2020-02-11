#include<iostream>
using namespace std;
const int MONTHS = 12;
   void getData( double t[][ 2 ], int m );
   double averageHigh ( double t[] [ 2 ],int m );
   double averageLow ( double t[] [ 2 ], int m );
   int indexHighTemp ( double t[] [ 2 ], int m );
   int indexLowTemp ( double t[] [ 2], int m );

 main(){
	   double temperatures [ MONTHS ] [ 2 ];
	   getData( temperatures, MONTHS );
	   cout << "\n\t The average high temperature for the year is "
			<< averageHigh ( temperatures, MONTHS);
	   cout << " \n\tThe average low temperature for the year is "
			<< averageLow ( temperatures, MONTHS);
	   cout <<"\n\tIndex of highest temperature for the year is "
			<< indexHighTemp (temperatures, MONTHS );
	   cout << "\n\t Index of lowest temperature for the year is "
			<< indexLowTemp ( temperatures, MONTHS );

	return 0;
}
 void getData ( double t [] [ 2 ], int m)
   {
		 for ( int i = 0; i < m; i ++ )
		 { 
			 cout << "\n\t Enter highest temperature for the month"
				  << ( i + 1 ) << " : ";
			 cin >> t [ i ] [ 0 ];
			 cout << "\t Enter lowest temperature for the month "
				  << ( i + 1 ) << " : ";
			 cin >> t [ i ] [ 1 ];
		  }
   }
double averageHigh ( double t [] [ 2 ], int m)
{
	double sum = 0;
	for ( int i = 0 ; i < m; i ++)
		sum += t [ i ] [ 0 ];
	return ( sum/m);
}

double averageLow( double t [] [ 2 ], int m)
{
	double sum =0;
	for ( int i = 0; i < m; i ++)
		sum += t [ i ] [ 1 ];
	return ( sum / m);
}

int indexHighTemp (double t [] [ 2 ], int m )
{
	int index = 0;
	double highest = t [ 0 ] [ 0 ];
	for ( int i= 1; i < m ; i ++)
		if ( t [ i ] [ 0 ] > highest )
		{
			highest = t [ i ] [ 0 ];
			index = i;
		}
return index;
}

int indexLowTemp ( double t [] [ 2 ], int m)
{
	int index = 0;
	double lowest = t [ 0 ] [ 1 ];
	for (int i = 1; i < m; i ++)
		if( t [ i ] [ 1 ] < lowest )
		{
		
			 lowest = t [ i ] [ 1 ];
			 index = i;
		}
	return index;
}	
