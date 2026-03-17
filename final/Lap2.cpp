#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile("filename2.txt");

    myFile << "684244134 นายภูตะวัน ฤทธิ์เลิศ 684244134 Pootawon Litloet" << endl;

    myFile.close();

    return 0;
}
