#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int cuboid = a * b * c;
    int cube = d * d * d;

    if (cuboid > cube)
    {
        cout << "Cuboid" << endl;
    }
    else if (cube > cuboid)
    {
        cout << "Cube" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}
