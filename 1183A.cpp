#include <iostream>
#include <stdio.h>

using namespace std;

// tinh tong cac chu so
int sumdigit(int n)
{
	int s = 0, a; 
	do
	{
		a = n%10 ; 
		n = n/10;
		s = s + a; 
	} 
    while ( n > 0);
    return s ;
}
//ham main
int main()
{
    
	int n;
	cin >> n ;
    do 
    {
    	if (sumdigit(n) % 4 ==0 )
    		{
    			cout << n << endl;
    			break;
    		}
    	else 
    		n ++; 
    }
    while (n > 0) ;
	return 0;
}
