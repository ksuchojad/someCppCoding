#include <iostream>
using namespace std;

int main()
{

    int ** tab = new int *[ 10 ];
    
    for( int i = 0; i < 10; i++ )
    {
        tab[ i ] = new int[ 10 ];
    }

    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < 10; j++ )
             tab[ i ][ j ] = i + 1;        
    }

     for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < 10; j++ )
        {
            cout.width(3);
            cout << tab[ i ][ j ] * tab[ j ][ i ] ;
        }
        
        cout << endl;
    }
    

    return 0;
}