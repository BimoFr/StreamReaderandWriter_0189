#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;

    //membuat objek output file stream  
    ofstream outfile;
    //membuuka file untu ditulisi
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
}