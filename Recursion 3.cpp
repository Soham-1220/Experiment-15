#include <iostream>
using namespace std;

void revstr(char *str)
{
    if (*str)
    {
        revstr(str + 1);
        cout << *str;
    }
}

int main()
{

    string str;

    cout << "Enter a string:";
    cin >> str;

    cout << "Reversed string is:";
    revstr(&str[0]);

    return 0;
}

/*==========OUTPUTS==========
Enter a string:riya
Reversed string is:akhsin
*/
