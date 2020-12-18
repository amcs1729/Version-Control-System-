#include <sys/stat.h>
#include <fstream>
#include <iostream>
using namespace std;
class file_utils
{
public:
    int dirExists(const char *path)
    {
        struct stat info;

        if(stat( path, &info ) != 0)
            return 0;
        else if(info.st_mode & S_IFDIR)
            return 1;
        else
            return 0;
    }

    ///@brief           Checks if a directory exists
    ///@param   char*   The absolute path of the directory whose existance is checked
    ///retval   0       If directory does not exist.
    ///retval   1       If directory exists.

    ///@brief           Checks if a dir is present.If not , it creates it
    void check_and_create_dir(const char* path)
    {
        int status;
        cout<<(dirExists(path))<<endl;
        if(!dirExists(path))
        {
            //If .vcs does not exist, create .vcs
            mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

        }
        else
        {
            return;
        }
    }

    void create_file(const char* path, const char *contents)
    {
        ofstream fout;
        fout.open(path);
        fout<<contents<<endl;
        fout.close();
    }
};