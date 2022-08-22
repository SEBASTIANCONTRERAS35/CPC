#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int output = 1;
    if (n%2 == 1)
        cout<< 0 <<endl;
    else
    {
        for (int i = 1;i <= n/2;i++)
            output*= 2;
        cout<< output<< endl;
    }

	return 0;
}
