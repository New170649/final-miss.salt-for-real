#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string Mygroup ;
    cin >> Mygroup;
    ofstream MyWriteFile(Mygroup);

    string MyFriend;
    cin >> MyFriend;
    MyWriteFile << MyFriend << endl;
    MyWriteFile << "file can be tricky, but it is fun enough-1" << endl;


    MyWriteFile.close();
    string myText;
    ifstream MyReadFile(Mygroup);
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
