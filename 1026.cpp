#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b,x;

    while(cin >> a >> b){
        x=a^b;
        cout << x << endl;
    }

    return 0;
}