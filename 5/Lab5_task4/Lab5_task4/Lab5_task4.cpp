#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc < 4)
    {
        cerr << "Error: not enough arguments\n";
        return 1;
    }

    
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0)
    {
        cerr << "Error: wrong flag (use -a or -m)\n";
        return 1;
    }

    
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    
    if (strncmp(argv[1], "-a", 2) == 0)
    {
        cout << "Sum = " << x + y << endl;
    }
    else
    {
        cout << "Product = " << x * y << endl;
    }

    return 0;
}