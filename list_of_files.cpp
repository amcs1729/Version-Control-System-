#include <iostream>
#include <dirent.h>
#include <sys/types.h>

using namespace std;
class list_files {

public:

    void items(const char *path) {
        struct dirent *entry;
        DIR *dir = opendir(path);

        if (dir == NULL) {
            cout<<"Oops !! No such dir found "<<endl;
            return;
        }
        while ((entry = readdir(dir)) != NULL) {
            cout << entry->d_name << endl;
        }
        closedir(dir);
    }
};