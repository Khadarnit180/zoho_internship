#include <iostream>
#include<thread>
#include<string> 
using namespace std;

void threadfn(string k,int &v)
{
    cout<<"iam inside thread "<<k<<endl;
    v++;
}
class threadobject
{//class for fun object 
    public:
//
void operator()(int x)
{
    
cout<<x<<endl;
    
}

};

int main()
{
    string k="hello";
 int l=3000;
    
  auto f =[](int n){
     cout<<"lambda"<<n;
 
       };
       
       
       thread t1(threadfn,k,ref(l));//thread thread name (args) //using fun pointer 
     
   thread t2(threadobject(),5);
    //we have to make thread wait so keep threrd.join.
 
 
 thread t3(f,5);
t1.join();
t2.join();
t3.join();
 cout<<endl<<l;
    return 0;
}

 
