#include <iostream>

using namespace std ;

int main ()
{
    int a,b ;

    cout << " I Will Try What The Nested If Now " << endl ;
    cout << " --------------------------------- " << endl ;
    cout << " 1. I Will Be A Programmer " << endl ;
    cout << " 2. I Will Be A WebDevelopper " << endl ;
    cout << " --------------------------------- " << endl ;
    cout << " Choose 1 : " ;
    cin >> a ;

    if (a==1)
    {
        cout << " -------------- " << endl ;
        cout << " 1. C++ " << endl ;
        cout << " 2. Python " << endl ;
        cout << " 3. JavaScript " << endl ;
        cout << " -------------- " << endl ;
        cout << " Choose 1 Again : " ;
        cin >> b ;
        if (b==1)
        {
            cout << " You Can Build A Windows Applications " << endl ;
        }
        else if(b==2)
        {
            cout << " You Can Build A Linux Applications " << endl  ;
        }
        else if(b==3)
        {
            cout << " You Can Build A Website " << endl ;
        }
        else
        {
            cout << " Error " << endl ;
            cout << " You Will Be Nothing " << endl ;
        }

    }
    else if (a==2)
    {
        cout << " -------------- " << endl ;
        cout << " 1. Front End Developer " << endl ;
        cout << " 2. Back End Developer " << endl ;
        cout << " -------------- " << endl ;
        cout << " Choose 1 Again : " ;
        cin >> b ;
        if (b==1)
        {
            cout << " You Will Be A Friends With Design " << endl ;
        }
        else if (b==2)
        {
            cout << " You Will Be A Friends With System Structure " << endl ;
        }
        else
        {
            cout << " Error " << endl ;
            cout << " You Will Be Nothing " << endl ;
        }

    }
    else
    {
        cout << " Error " << endl ;
        cout << " You Will Be Nothing " << endl ;
    }
    return 0 ;
}
