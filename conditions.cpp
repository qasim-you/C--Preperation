#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers in erms of series /n";
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive integer for the number of terms. /n";
        return 1 ;
    }

        int first = 0, second = 1, next;

        cout << "Fibonacci Series:/n" ;

        for (int i = 0; i < n; ++i)
        {
            std::cout << first << " ";

            next = first + second;
            first = second;
            second = next;
            
            
        }
        // Exit the program with an error code
    return 0 ;
}