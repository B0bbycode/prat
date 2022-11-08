#include <iostream>

using namespace std;

int main(void){
	
	int x=12;
	
	int y= --x;
	int z=(y++)/2;
	
	if ( (x >= 2) && (z <= 8) )
		y=x+2;
		else if ( (x > 2) && (y < 8) )
			z=y+2;
				else if ( (x != 7) && (y != 2) )
					y+=z*x;
						else y--;
	
	cout<<x<<"\t"<<y<<"\t"<<z;
	
	return 0;
}
