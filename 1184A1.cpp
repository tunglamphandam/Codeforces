#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int r;
	cin >>r ;
	int x;
	float y ;
	while ( x<=r)
	{
		y = 1.0 * (r-1-x*x-x)/(2*x) ;
		if (int(y) == y){
			break;
		}
		x++;
	}
	if ( x == r+1)
	{
		cout << "NO" <<endl;
	}
	else 
	{
		cout << x << " " << y <<endl;
	}
	system("pause") ;
	return 0;
}
