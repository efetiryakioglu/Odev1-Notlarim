#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int s, i;
	s = 0;
	i = 1;
a:	s = s + i;
	i = i + 1;
	cout << " " << s << endl;
	if (i <= 100) goto a;
	cout << "s= " << s;
}