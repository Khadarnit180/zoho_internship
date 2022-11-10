
#include<iostream>
using namespace std;
class a
{
 public:
  void show()
  {
  cout<<"hi  a inherited to d through b or c not b and c ; to reduce ambiguity  we kept virtual before method";
  }
  
 
};
 class b:virtual public a   //if we dont keep virtual we gert ambiguity
 {	
 
};
class c:virtual public a
{
 
 
};
class d:public b,public c
{

};
int main()
{
d obj;
obj.show();

return 0;
}
