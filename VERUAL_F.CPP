#include<iostream.h>
#include<conio.h>
class one
{
public:
virtual void dis(){
cout<<"one";
}
};
class two:public one{
public:
void dis(){
cout<<"two";}
};
void main(){
clrscr();
one *obj1,bob;
obj1=&bob;
obj1->dis();
two obj2;
obj1=&obj2;
obj1->dis();
getch();
}