#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n;
    int i = 2;
    int sum = 0; // Initialize sum variable to 1 for multiplication

    cout << "Enter a number: ";
    cin >> n;
    system("cls");
    Sleep(500);

    while (i <= n)
    {
        cout << i << "  ";
        sum += i; // Multiply current number with sum
        i = i + 2;
        Sleep(100);
    }

    cout << "\nSum: " << sum << endl; // Display the product
    Sleep(1000);
}
