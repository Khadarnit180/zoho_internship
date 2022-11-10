#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
string line;
ifstream file_("mytext");
if(file_.is_open())
{
   while(getline(file_,line))
   {
   std::cout<<line<<endl;
    }
   file_.close();
}
else
{
cout<<"not open";
std:cin.get();
}
return 0;
}