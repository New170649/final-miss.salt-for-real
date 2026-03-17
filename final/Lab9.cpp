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
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> MyFriend;
        MyWriteFile << MyFriend << endl;
    }
    cin >> MyFriend;
    MyWriteFile << MyFriend << endl;


    MyWriteFile.close();
    string myText;
    ifstream MyReadFile(Mygroup);
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
