#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
	SYSTEMTIME currentDate;  
	GetLocalTime(&currentDate); 
	unsigned int year = currentDate.wYear;
	unsigned int month = currentDate.wMonth;
	unsigned int day = currentDate.wDay;

	cout << "Current Year: " << year  << endl;
	cout << "Current Month: " << month << endl;
	cout << "Current Day: " << day << endl;

	cout << "Current Date (dd/mm/yyyy): " << day << " / " << month << " / " << year << endl;
	cout << "Current Date (mm/dd/yyyy): " << month << " / " << day << " / " << year << endl;

	system("pause");
	return 0;
}