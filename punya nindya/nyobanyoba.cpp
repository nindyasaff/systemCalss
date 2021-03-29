#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
 //masukkan nama file teks
 ifstream myfile ("daftar_nama.txt");
 if (myfile.is_open())
 {
     //masukkan tulisan yang ingin di tulis ke dalam file teks
     String arraycopy[ ]
 } 
 else 
 {
  cout << "Unable to open file";
 }
  myfile.close();
 return 0;
}

void cvs()
{
 //masukkan nama file teks
 ofstream myfile ("4210191025_DeviNindya.csv");
 if (myfile.is_open())
 {
     //masukkan tulisan yang ingin di tulis ke dalam file teks
     myfile<<"Ini adalah sebuah file teks"<<endl; 
 } 
 else 
 {
  cout << "Unable to open file";
 }
  myfile.close();
 return 0;
}
