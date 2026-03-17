#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream MyWriteFile("684244134-ภูตะวัน ฤทธิ์เลิศ.txt");
MyWriteFile << "1.file = พื้นที่เก็บข้อมูลสามารถเก็บข้อมูลได้หลายอย่าง\n"
<< "2.Management = กระบวนการทำงานร่วมกับคนและใช้ทรัพยากรอย่างมีประสิทธิภาพ\n"
<< "3.file Management = การที่เราจะสร้างไฟล์,เก็บไฟล์,ดาว์โหลดไฟล์ต้องมีProcessของแต่ละแบบดังนั้นProcess\n"
<< "\tขึ้นอยู่กับเราว่างจะใช้แบบไหน  ตย.  New file , write data , save file , (ถ้าจะลบต้อง)delete file , copy file , backup file\n"
<< "4.ประเภทของไฟล์ = data file , Image file , video file , voice file\n"
<< "5.file system = ระบบจัดการไฟล์ user app , logical file system , virtual file system , physical file system\n"
<< "6.folder, file path and finding  file path =\n"
<< "folder = ตัวจัดเก็บไฟล์\n"
<< "file path = ส่วนใหญ่เป็นstringบอกตำแหน่งไฟล์\n"
<< "finding  file path = การหาไฟล์\n"
<< "7.os main memory = cacse memory , ram , rom, hard disk\n"
<< "8.file system in operating system\n"
<< "FAT\n"
<< "NTFS\n"
<< "EFS\n"
<< "HFS\n"
<< "APFS\n"
<< "9.a free space my phone = 13.01 GB\n"
<< "use space my phone = 115.GB\n"
<< "10.free space management\n"
<< "bit vector = bitmap\n"
<< "linked list = linked list\n"
<< "grouping = boundary tags\n"
<< "counting = free block list\n"
<< "11.file handing in java\n"
<< "opening file\n"
<< "reading from file\n"
<< "writing to file\n"
<< "adding to file\n"
<< "closing the file\n"
<< "12.Html  Have\n"
<< "css not have\n"
<< "js = have\n"
<< "go = have\n"
<< "kotlin = have\n"
<< "13.c++ file\n"
<< "C:\\Users\\ACER\\visual studio\\Work\\salt\\final\n"
<< "14.Lap 1 = create file\n"
<< "Lab2 = input id name last name\n"
<< "Lab3 = readcode\n"
<< "Lab4 =  +1บรรทัดตรงข้อความLab5 = ตั้งชื่อตัวแปร(ชื่อไฟล์)\n"
<< "Lab6 = ใส่cinตรงชื่อไฟล์\n"
<< "Lab7 =  ใส่ตัวแปรตรงTEXT\n"
<< "Lab8 = ใส่ชื่อเพื่อน1ชื่อ\n"
<< "Lab9 = ใส่Loop ใส่ชื่อเพื่อน5คน" << endl;
    MyWriteFile.close();
    string myText;
    ifstream MyReadFile("684244134-ภูตะวัน ฤทธิ์เลิศ.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    return 0;
}
