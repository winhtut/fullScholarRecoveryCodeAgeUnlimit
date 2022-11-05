//
// Created by National Cyber City on 10/18/2022.
//

#include <fstream>
#include <iostream>
using namespace std;

int main () {
    char data[100];

    // open a file in write mode.
    ofstream outfile;
    outfile.open("afile.dat",ios::app);

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted data into the file.
//    outfile << data << endl;
//
//    cout << "Enter your age: ";
//    cin >> data;
//    cin.ignore();
//
//    // again write inputted data into the file.
//    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;

    while (!infile.eof()) {
        infile >> data;
        // write the data at the screen.
        cout << data << endl;
    }
    // close the opened file.
    infile.close();

    return 0;
}