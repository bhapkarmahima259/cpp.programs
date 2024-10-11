#include<iostream.h>
#include<conio.h>
class one
{
public:
void dis(){
cout<<"one";
}
};
class two:public one
{
public:
void dis(){
cout<<"two";
}
};
void main()
{
clrscr();
one *obj;
obj->dis();
two obj2;
obj=&obj2;
obj->dis();
getch();
}