#include <iostream>
using namespace std;

void date_to_date(int date, int year)
{
    const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days[1] = 29; // Set February to 29 days if it's a leap year
    }

    if (date < 1 || date > (days[1] == 29 ? 366 : 365))
    {
        cout << "Invalid date!";
        return;
    }
    for (int i = 0; i < 12; i++)
    {
        if (date <= days[i])
        {
            cout << date << " " << months[i] << ", " << year;
            return;
        }
        else
            date = date - days[i];
    }
}

int main()
{
    int date, year;
    cout << "Enter date:" << endl;
    cin >> date;
    cout << "Enter year:" << endl;
    cin >> year;
    date_to_date(date, year);
    return 0;
}