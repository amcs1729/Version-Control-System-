/*
 Creates the following structure
 .vcs


      remote
                origin/master
                origin/branch_a

      branches

                  master (stores reference to the commit on which master is pointing
                  branch1 ( stores reference to the commit on which branch1 is pointing)

      objects
                    9d
                        objects whose hash start with 9d
                    4f
                        objects whose hash start with 4f

     Arnab
*/
#include "file_utils.cpp"

using namespace std;
class init
{
public:
    void initialise()
    {
        file_utils fileUtils;
        fileUtils.check_and_create_dir("/home/arnab/Desktop/Version Control System/exp/.vcs");
        fileUtils.check_and_create_dir("/home/arnab/Desktop/Version Control System/exp/.vcs/objects");
        fileUtils.check_and_create_dir("/home/arnab/Desktop/Version Control System/exp/.vcs/branches");
        fileUtils.check_and_create_dir("/home/arnab/Desktop/Version Control System/exp/.vcs/remote");
        //fileUtils.create_file("/home/arnab/Desktop/Version Control System/exp/.vcs/branches/master", "");
    }
};
