#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
      friend void add(c1 &, c2 &);
    public:
    void setData(int a){
        val = a;
    }
    void diaplay(void){
        cout<<val<<endl;
    }
};

class c2{
    int val2;
      
     friend void add(c1 &, c2&); 
    public:
    void setData2(int a){
        val2 = a;
    }
    void diaplay2(void){
        cout<<val2<<endl;
    }
};

void add(c1 &x , c2 &y ){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
};

int main(){

c1 oc1;
c2 oc2;

oc1.setData(10);

oc2.setData2(20);


add(oc1 , oc2);

cout<<"the value of c1 " <<endl;
oc1.diaplay();

cout<<"the value of c2 " <<endl;
oc2.diaplay2();

return 0;
};