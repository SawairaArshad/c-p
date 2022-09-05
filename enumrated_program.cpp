#include <iostream.h>
using namespace std;
enum dow {mon,tues,wend,thur,fri,sat,sun};
int main()
 {
    dow d1,d2;
   d1=mon;
    d2=sun;
    int difference= d2-d1;
    cout<<"Day between Monday through thursday are"<<difference<<endl;
    if(d2>d1)
      {
        cout<<"Monday come before Sunday";
        }
}
