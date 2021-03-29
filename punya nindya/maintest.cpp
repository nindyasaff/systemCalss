#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main () {
    // write to text file
    ofstream myfile ("4210191025_Devi.csv");
    char nrp[11], nama[80], gender[40];
    cout << "NRP  : "; cin.getline(nrp,sizeof(nrp));
    cout << "Nama : "; cin.getline(nama,sizeof(nama));
    cout << "Gender : "; cin.getline(gender,sizeof(gender));
    if (myfile.is_open())
    {
        myfile << nrp << ";" << nama << ";" << gender << ";";
        myfile.close();
    }
    else cout << "Unable to open file";
     
    // read from text file
    string line,token;
    string delimiter = ";";
    ifstream infile ("4210191025_Devi.csv"); // open a file in read mode.
    if (infile.is_open()) {
        while (getline(infile,line))
        {   cout << endl << endl;
            size_t pos = 1;
            while ((pos = line.find(delimiter)) != string::npos) {
                token = line.substr(0, pos);
                cout.width(10);
                cout << left << token << " | ";
                line.erase(0, pos + delimiter.length());
            }
            cout << endl << endl;
        }
        infile.close(); // close the opened file.
    }
    else cout << "Unable to open file!"; 
 
  cin.get();
   
  return 0; }
