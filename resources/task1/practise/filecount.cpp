#include <sys\stat.h>
#include <iostream>
#include <dirent.h>
#include <conio.h>


using namespace std;


int main ()
{
        struct dirent *d;
        struct stat dst;
        
        DIR *dr;
        
        string path = ".\\";
        
        dr = opendir(path.c_str());
        
        if (dr != NULL)
        {
                for (d = readdir(dr); d != NULL; d = readdir(dr))
                {
                        string type = d->d_name;
                        type = path + type;
                        if (stat(type.c_str(), &dst) == 0)
                        {
                                if (dst.st_mode & S_IFDIR)
                                {
                                        type = "is a FOLDER.";
                                }
                                else if (dst.st_mode & S_IFREG)
                                {
                                        type = "is a FILE.";
                                }
                        }
                        cout<<d->d_name<<endl<<type<<endl;
                }
                closedir(dr);
        }
        else
        {
                cout<<"ERROR"<<endl;
        }
        getch();
}
