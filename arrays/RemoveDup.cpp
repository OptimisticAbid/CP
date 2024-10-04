#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int i, n, j;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    i = 0;
    for (j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << "The Elements are " << ": ";
    for (j = 0; j <= i; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
