#include<iostream.h>
#include<conio.h>
class one
{
public:
virtual void dis()=0;

};
class two:public one{
public:
void dis(){
cout<<"two";}
};
void main(){
clrscr();
two obj;
obj.dis();
getch();
}