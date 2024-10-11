#include<iostream.h>
#include<conio.h>
template<class t>
t add(t x,t y)
{
return(x+y);
}
void main()
{    float c;
clrscr();
c=add(2.4,4.6);
cout<<"add:"<<c;
getch();
}