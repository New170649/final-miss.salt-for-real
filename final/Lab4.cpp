#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyWriteFile("Readfile.txt");
    MyWriteFile << "file can be tricky, but it is fun enough-1" << endl;
    MyWriteFile << "file can be tricky, but it is fun enough-2" << endl;
    MyWriteFile.close();
    string myText;
    ifstream MyReadFile("Readfile.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
