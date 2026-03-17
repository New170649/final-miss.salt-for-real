#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyWriteFile("filename3.txt");
    MyWriteFile << "file can be tricky, but it is fun enough!" << endl;
    MyWriteFile.close();
    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
