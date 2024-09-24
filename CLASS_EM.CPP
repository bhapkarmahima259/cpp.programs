#include<iostream.h>
#include<conio.h>
class employee
{
public:
int id,i;
char name[20];
char mobn[11];
void setrec();
void disrec();
};
void employee::setrec()
{
cout<<"enter the id:";
cin>>id;
cout<<"enter the employee name:";
cin>>name;
cout<<"enter the mobn:";
cin>>mobn;
}
void employee::disrec(){
cout<<"display the id:"<<id<<endl;
cout<<"display the name:"<<name<<endl;
cout<<"display the mobn:"<<mobn<<endl;
}
void main()
{
int i;
employee obj[5];
for(i=0;i<5;i++){
obj[i].setrec();
}
for(i=0;i<5;i++){
obj[i].disrec();
}
getch();
}