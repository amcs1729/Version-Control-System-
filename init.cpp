/*
 Creates the following
 .vcs

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
#include <iostream>
using namespace std;
class init
{
public:
    void initialise()
    {
        cout<<"From init\n"<<endl;
    }
};
