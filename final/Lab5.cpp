#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string A = "Readfilea.txt";
    ofstream MyWriteFile(A);
    MyWriteFile << "file can be tricky, but it is fun enough-1" << endl;
    MyWriteFile << "file can be tricky, but it is fun enough-2" << endl;
    MyWriteFile.close();
    string myText;
    ifstream MyReadFile(A);
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
