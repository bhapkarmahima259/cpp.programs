#include<iostream.h>
#include<conio.h>
class one
{
 public:
 int a;

void set(){
a=1;
}
void dis(){
cout<<a<<endl;
}
};
class two{
public:
int b;
void set1(){
b=3;
}
void dis1(){
cout<<b<<endl;
}
};
class three:public one,public two{
public:
int c;
void set2(){
c=2;

}
void dis2()
{
cout<<c<<endl;
}
};
void main()
{
clrscr();
three obj;
obj.set();
obj.dis();
obj.set1();
obj.dis1();
obj.set2();
obj.dis2();
getch();
}
