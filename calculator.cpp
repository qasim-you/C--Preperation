#include <iostream>
using namespace std;
int main()
{
    cout << "welcome to the calculator \n";
    cout << "Enter two number \n";
    float n1, n2;
    cout << "Enter the value of number 1 \n";
    cin >> n1;
    cout << "Enter the value of number  \n";
    cin >> n2;
    float add,mult,subt,div ;
    add = n1 + n2 ;
    mult = n1 * n2 ;
    subt = n1 - n2 ;
    div = n1 / n2 ;
    cout<<"\n The sum of n1 and n2 ="<<add ;
    cout<<" \n The sum of n1 and n2 ="<<mult ;
    cout<<" \n The sum of n1 and n2 ="<<subt ;
    cout<<"\n The sum of n1 and n2 ="<<div ;

    return 0;
}