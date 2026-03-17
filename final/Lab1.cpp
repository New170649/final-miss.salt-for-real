#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile("filename.txt");

    myFile << "File can be tricky, but it is fun enough!" << endl;

    myFile.close();

    return 0;
}
