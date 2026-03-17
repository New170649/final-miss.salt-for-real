#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string C;

    cin >> C;
    C = "Readfileb.txt";
    ofstream MyWriteFile(C);

    string myText = "file can be tricky, but it is fun enough-1";
    string myText2 = "file can be tricky, but it is fun enough-2";

    MyWriteFile << myText << endl;
    MyWriteFile << myText2 << endl;


    MyWriteFile.close();
    string myText;
    ifstream MyReadFile(C);
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
