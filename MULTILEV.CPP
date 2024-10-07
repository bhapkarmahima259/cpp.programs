#include<iostream.h>
#include<conio.h>
class student{
public:
int id,mbno[10];
char name[20];
char add[20];
void set(){
id=1;
strcpy(name,"mahima");
strcpy(add,"rakhunde nagar nagpur")
strcpy(mbno,"7507450903")
}
void dis(){
cout<<id<<" "<<name<<" "<<add<<" "<<mbno<<endl;
}
};
class exam{
public:
int paper1,paper2;
void setexam(){
paper1=6;
paper2=8;
}
void disexam()
{
