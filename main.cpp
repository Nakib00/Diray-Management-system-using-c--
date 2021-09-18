#include<iostream>
#include <string>
using namespace std;


void display(){
    cout<<"************************************"<<endl;
    cout<<"Diray Management system"<<endl;
    cout<<"************************************"<<endl;
    cout<<"___________Manue______________"<<endl;
    cout<<"1.Add Story"<<endl;
    cout<<"2.View story"<<endl;
    cout<<"3.Add password"<<endl;
    cout<<"4.Exit"<<endl;
}

int main(){

display();
cout<<endl;

int option;
string password;
string temp="123";

string story="Welcome to you Diray write somting";

while(option!=4){

    cout<<"Option :";
    cin>>option;
    cout<<endl;
    cout<<"Password :";
    cin>>password;

    if((option==1) && (password==temp)){
    cout<<"Write you story :";
    cin>>story;
    cout<<endl;
    }else if ((option==2) && (password==temp))
    {
        cout<<"Your story : "<<story<<endl;
    }else if ((option==3) && (password==temp)){
        cout<<"Add New passwors :";
        cin>>temp;
    }
}
return 0;
}