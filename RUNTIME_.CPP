#include<iostream.h>
#include<conio.h>
class one{
public:
void dis()
{
cout<<"one";
}
};
class two:public one
{
void dis()
{
cout<<"two";
}
};
void main()
{
clrscr();
one *obj;
obj->dis();
getch();
}