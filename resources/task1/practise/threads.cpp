#include <iostream>
#include<thread>
#include<string> 
using namespace std;

void threadfn(string k,int v=0)
{
    cout<<"iam inside thread "<<k<<endl;
    cout<<v++;
}




int main()
{
    string k="hello";
 //  int l=3000;
    thread t1(threadfn,k);//thread thread name (args)
    
    // cout<<l<<endl;
    //we have to make thread wait so keep threrd.join.
  //  cout<<"Hello World";
t1.join();

    return 0;
}
