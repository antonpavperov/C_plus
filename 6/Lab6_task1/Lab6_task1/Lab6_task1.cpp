#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out("poem.txt"); 

    if (!out)
    {
        cout << "Error opening file\n";
        return 1;
    }

    cout << "Enter your poem (end with empty line):\n";

    string line;

    while (true)
    {
        getline(cin, line);

        if (line.empty()) 
            break;

        out << line << endl; 
    }

    out.close(); 

    cout << "Poem saved to file\n";

    return 0;
}