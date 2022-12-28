#include<bits/stdc++.h>
using namespace std;

int PassWord()
{
    int n = 3;
    int ind = 0;

    while (n--)
    {
        string username;
        string password;

        system("cls");
        cout<<"Chances Left = "<<n+1;
        cout << "\t\t###################################     Verify YourSelf     ###################################\n" << endl;

        cout << "\n\nEnter Username : ";
        cin >> username;

        cout << "\n\nEnter PassWord : ";
        cin >> password;

        if (username != "AJTITAN" || password != "789")
        {
            ++ind;
            cout << "\n\n\t\t!!! ################################   Invalid Credential   ################################ !!!\n"
                 << endl;
            continue;
        }
        if (username == "AJTITAN" || password == "789")
        {
            system("cls");
            cout << "\t\t\n\n******************************  Logged In Successfully  ******************************" << endl;
            break;
        }
    }

    if (ind == 3)
    {
        cout << "\t\t------------------------------------  Returning to Main Window ------------------------------------" << endl;
        return true;
    }
    return false;
}
