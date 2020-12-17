#include "init.cpp"
#include <iostream>
#include "file_reader.cpp"
#include "file_compress_wrapper.cpp"
#include "list_of_files.cpp"
using namespace std;

int main()
{
    cout << "Hello" <<endl;
    init init;
    init.initialise();

    /*file_reader fileReader;
    fileReader.find_hash("/home/arnab/Desktop/VCS/hello.txt");

    *//*file_compression_wrapper fileCompressionWrapper;
    fileCompressionWrapper.do_test();*//*

    list_files listFiles;
    listFiles.items("/home/arnab/Desktop/VCS/");*/


    return 0;
}