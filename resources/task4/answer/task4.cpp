#include<iostream>
using namespace std;
 #include"task4.hpp"
#include <stdlib.h>//mloc
#include <string.h>
#include <sys/resource.h>
#include <unistd.h>//for sleeep #include <unistd.h>
 long get_mem_usage()
{
 struct rusage myusage;
 getrusage(RUSAGE_SELF,&myusage);
 return myusage.ru_maxrss;
 }
void get()
{
while(1){

	long baseline =get_mem_usage();

	 for (int k=0;k<10;k++)
	{
	  cout<<" ";
	  int *p =(int*) malloc(1024*100); 
	   for(int i = 0; i < 25000; ++i)
	    {
	   p[i]=i;
	    }
	 
	 }
	 cout<<baseline<<endl; 
	 sleep(10); 
	 }

}


/*
int main() {
 get();
} 
*/
