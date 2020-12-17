#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "pkg/sha256/sha256.cpp"

using namespace std;
class file_reader {
public:

    string contents;
    void read_contents(string fname) {
        ifstream f(fname); //taking file as inputstream
        if (f) {
            ostringstream ss;
            ss << f.rdbuf(); // reading data
            contents = ss.str();
        }
        else
        {
            cerr<<"Cannot open file"<<endl;
        }
    }

    void *find_hash(string fname) {
        SHA256 sha256;
        read_contents(fname);
        cout<<"Contents - \n"<<endl;
        cout<<contents<<endl;
        string delta = sha256(contents);
        cout<<delta<<endl;
    }
};


