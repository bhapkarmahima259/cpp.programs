#include<iostream.h>
#include<conio.h>
class one{
public:
static int a;
static void set(){
a++;
}
void dis()
{
cout<<"result:" <<a<<endl;
}
};
int one::a;
void main(){
clrscr();
one obj1,obj2,obj3;
obj1.dis();
obj2.dis();
obj3.dis();

one::set();
obj1.dis();
obj2.dis();
obj3.dis();
getch();
}