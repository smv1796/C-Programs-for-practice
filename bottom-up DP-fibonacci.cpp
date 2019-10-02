#include<iostream>
using namespace std;

int bottomUpDP(int n)
{
	if (!n || n == 1) return n;

	int a = 0, b = 1;
	int c = 0;
	/*for (int i = 1; i <= n - 1; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	*/

	int counter=n+1;

	counter=counter-2;

	while(counter)
    {
        c=a+b;
        a=b;
        b=c;

        counter--;
    }

	return c;
}

int main()
{

	int n = 0;
	cin >> n;

	cout<<endl<<bottomUpDP(n);
 }
