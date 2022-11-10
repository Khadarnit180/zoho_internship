//dybnamic bind
/*
#include <iostream>
using namespace std;
class base{
public:
virtual void print()
{
cout<<"ho";
}
};
class derived :public base{
void print()
{
cout<<"io";
}
};

int main()
{
derived d;
//base b;

base *p;
 p=&d;
 p->print();
 return 0;
}
*/
/* static bind  ex >>fun ooverloading 
#include <iostream>
using namespace std;

 void print(int a)
{
cout<<"ho"<<a;
}
void print(int a ,float b)
{
cout<<a+b;
}

int main()
{
print(5,6);
return 0;
}

*/
/*#include <iostream>

using namespace std;
//fun over loading 
 float sum(int a,float b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    
    cout<<sum(5,6.2);
    cout<<"Hello World";
    cout<<sum(4,1,1);

    return 0;
}*/
//fun over riding



#include <iostream>
using namespace std;

class base {
   public:
    void print(int a) {
        cout << "Base Function" << endl<<a;
    }
};

class Derived : public base {
  // public:
   // void print(int a) {
      //  cout << "Derived Function" << endl<<a;
    //}
};

int main() {
    Derived derived1;
    base b;
  //  b.print(5);
    derived1.print(5);
    return 0;
}



