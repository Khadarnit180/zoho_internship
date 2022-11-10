
#include <fstream>
#include <iostream>
#include <filesystem>
#include <bits/stdc++.h>
#include <dirent.h>
#include <thread>
#include<algorithm>
namespace fs = std::filesystem;
using namespace std;
void removeDuplicates(vector<string> &contain)
{
for(int i=1;i<contain.size();i++)
{
if(contain[i]==contain[i-1])
{
contain.erase(contain.begin()+i);
}
}
}
void writeData(string path,vector<string> contain)
{
ofstream outdata; // outdata is like cin
   int i;
outdata.open(path); // opens the file
  
for (i=0; i<contain.size(); ++i)
      outdata << contain[i] <<" ";
   outdata.close();
}
void printFile(string path)
{

  string name ;
    std::ifstream dataFile(path);
    vector<string> contain;
    while (!dataFile.eof() )
    {
          dataFile >> name;
          contain.push_back(name);
    }
    removeDuplicates(contain);
  //  auto i = unique (contain.begin (), contain.end ());
   // contain.erase (i, contain.end ());

    for (int Item = 0; Item < contain.size (); ++ Item){

        cout << contain [Item] << "  ";

    }
    cout<<endl<<endl<<endl;
    writeData(path,contain);

}

bool isDirectory(string pathfile)
{
const std::string pathString = pathfile;
    const fs::path path(pathString);
    if (fs::is_regular_file(path))//---------------------
    {
        return false;
    }
    return true;  //----------------------------------------------------------------------
    }
void processAllfiles(string filePath)
{
vector<thread> pool;
fs::directory_iterator a(filePath);
    int c=0;
    for(auto& p: a)
    {
    if(isDirectory(p.path())==0)
    {
    pool.push_back(thread(printFile,p.path()));
    c++;
    }
    }
   if(c<=10){
    for(auto &t:pool)
    {
    if(t.joinable())
    t.join();
    }
    }
    else
    {
    cout<<"count of files is 10";
    }
}
int main()
{
clock_t start ,end;
start=clock();
    processAllfiles("/home/local/ZOHOCORP/abdul-pt6532/internship1/");
 double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout <<endl<<endl<<"Time taken by program is : " 
         << time_taken<< "sec ";
    return 0;

}
