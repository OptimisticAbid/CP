#include <iostream>
using namespace std;

void calculateCartons(int bottles)
{

    const int cartonSizes[] = {48, 24, 12, 6};
    const string cartonNames[] = {"xl", "large", "medium", "small"};

    // Initializing the carton count for each size
    int cartonCount[4] = {0};

    // To iterate in descending order
    for (int i = 0; i < 4; i++)
    {
        while (bottles >= cartonSizes[i])
        {
            cartonCount[i]++;
            bottles -= cartonSizes[i];
        }
    }

    if (bottles > 0)
    {
        cartonCount[3] += (bottles + cartonSizes[3] - 1) / cartonSizes[3]; // Additional cartons for remaining bottles
    }

    // To print the req cartons
    for (int i = 0; i < 4; i++)
    {
        if (cartonCount[i] > 0)
        {
            cout << cartonCount[i] << " " << cartonNames[i];
            if (i < 3)
                cout << ", ";
        }
    }
}

int main()
{
    int bottles;
    cout << "Enter the number of bottles to be shipped: ";
    cin >> bottles;
    calculateCartons(bottles);
    return 0;
}