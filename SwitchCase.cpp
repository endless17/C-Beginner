#include <iostream>

using namespace std ;

int main ()
{
    int x ;
    cout << " My First Trying Switch & Case Data " << endl ;
    cout << " ---------------------------------- " << endl ;
    cout << " 1. I Will Always Love You " << endl ;
    cout << " 2. I Love Your Way " << endl ;
    cout << " 3. Hearts Dont Break Around Here " << endl ;
    cout << " 4. How Would You Fell " << endl ;
    cout << " ---------------------------------- " << endl ;
    cout << " Choose 1 : " ;
    cin >> x ;
    //Operatiions
    switch(x)
    {
        //If x = 1
        case 1 :
        cout << " Old Songs " << endl ;
        break ;
        //If x = 2
        case 2 :
        cout << " Middle Songs " << endl ;
        break ;
        //If x = 3
        case 3 :
        cout << " Ed Sheeran Songs 1 " << endl ;
        break ;
        //If x = 4
        case 4 :
        cout << " Ed Sheeran Songs 2 " << endl ;
        break ;
        default :
        cout << " Error : 404 ( Wrong Option ) " << endl ;
    }
    return 0 ;
}
