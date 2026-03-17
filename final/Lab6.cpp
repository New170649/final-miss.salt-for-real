#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string B;

    cout << "input file name: " << endl;
    cin >> B;
    B = "Readfileb.txt";
    ofstream MyWriteFile(B);
    MyWriteFile << "file can be tricky, but it is fun enough-1" << endl;
    MyWriteFile << "file can be tricky, but it is fun enough-2" << endl;
    MyWriteFile.close();
    string myText;
    ifstream MyReadFile(B);
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
