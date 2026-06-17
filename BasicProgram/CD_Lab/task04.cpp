#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    if (line.find("//") == 0)
    {
        cout << "Result: It is a single-line comment." << endl;
    }
    else if (line.find("/*") == 0 && line.find("*/") != string::npos)
    {
        cout << "Result: It is a multi-line comment." << endl;
    }
    else
    {
        cout << "Result: It is NOT a comment." << endl;
    }

    return 0;
}