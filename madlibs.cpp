//Authors: 
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
string juice;
double number;
char letter;
int time;
cout<<"Enter a name"<<endl;
cin>> name;
cout<<"Name a juice"<<endl;
cin>> juice;
cout<<"Enter a number between 1 and 10"<<endl;
cin>> number;
cout<<"name a letter"<<endl;
cin>> letter;
cout<<"enter a time"<<endl;
cin>> time;

cout<<" "<< name <<" went to safeway at "<< time <<" to buy a "<< juice <<", he couldn't buy it because he only had "<< number <<"$ so he decided to buy a "<< letter <<"soda  with the money left."<<endl;


  return 0;
    }
