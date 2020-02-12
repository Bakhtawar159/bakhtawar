#include <iostream> 

using namespace std; 
  
const int JANUARY   = 1; 
const int FEBRUARY  = 2; 
const int MARCH     = 3; 
const int APRIL     = 4; 
const int MAY       = 5; 
const int JUNE      = 6; 
const int JULY      = 7; 
const int AUGUST    = 8; 
const int SEPTEMBER = 9; 
const int OCTOBER   = 10; 
const int NOVEMBER  = 11; 
const int DECEMBER  = 12; 
bool is_leap_year(int year);
int get_century_value(int year); 
int get_year_value(int year);
int get_month_value(int month, int year);  

int main() 

{  
 
 int month, day, year, day_of_week;
	
cout << " enter a month: "; 
cin >> month; 
cout << endl;
cout << " enter a day: "; 
cin >> day;
cout << endl;
cout << " enter a year: "; 
cin >> year;
	day_of_week = day + get_month_value(month, year) + get_year_value(year) + get_century_value(year);    
    
	day_of_week = day_of_week % 7; 
 
    cout << "\n The date " << month << "/" << day << "/" << year 
         << " is a ";  

    if (day_of_week == 0) 
    { 
		cout << "Sunday."; 
    }  
    else if (day_of_week == 1) 
    { 
		cout << "Monday."; 
    }  
    else if (day_of_week == 2) 
    { 
		cout << "Tuesday."; 
    }  
    else if (day_of_week == 3) 
    { 
		cout << "Wednesday."; 
    }  
    else if (day_of_week == 4) 
    { 
		cout << "Thursday."; 
    }  
    else if (day_of_week == 5) 
    { 
		cout << "Friday."; 
    }  
    else if (day_of_week == 6) 
    { 
		cout << "Saturday."; 
    }  
    cout << endl; 
    return 0; 
} 
void get_input(int month, int day, int year) 

{  
	cout << endl;
	cout << "  enter a month: "; 
    cin >> month; 
    cout << endl;
    cout << " enter a day: "; 
    cin >> day;
    cout << endl;
    cout << "  enter a year: "; 
	cout << endl;
    cin >> year;
}

bool is_leap_year(int year) 

{  
    return (((year % 400) == 0) ||(((year % 4) == 0) 
	&& ((year % 100) != 0))); 

}  

int get_century_value(int year) 

{  
    int century;
	int remainder; 
    century = year/100;  
    remainder = (century % 4); 
    return ((3 - remainder) * 2); 
} 
int get_year_value(int year) 

{  
    int sinceCentury;  
    sinceCentury = year % 100;  
    return (sinceCentury + (sinceCentury/4)); 
}

int get_month_value(int month, int year) 
{  
    int result;  
    if (month == JANUARY) 
    { 
		if (is_leap_year(year))  
        { 
    		result = 6; 
        } 
        else 
		{ 
    		result = 0; 
		} 
	}
    if (month == FEBRUARY) 
	{ 
		if (is_leap_year(year))  
        { 
    		result = 2; 
        } 
        else 
		{ 
    		result = 3; 
		} 

	}
    else if (month == MARCH) 

    	{ 
			result = 3; 
    	}  

    else if (month == APRIL) 

    { 
		result = 6; 
    }  

    else if (month == MAY) 

    { 
		result = 1; 
    }  

    else if (month == JUNE) 

    { 
		result = 4; 
    }  

    else if (month == JULY) 

    { 
		result = 6; 
    }  

    else if (month == AUGUST) 

    { 
		result = 2; 
    }  

    else if (month == SEPTEMBER) 

    { 
		result = 5; 
    }  

    else if (month == OCTOBER) 

    { 
		result = 0;
    }  

    else if (month == NOVEMBER) 

    { 
		result = 3; 
    }  

    else if (month == DECEMBER) 

    { 
		result = 5; 
    } 
  
    return result; 
	
}
