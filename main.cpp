#include <iostream>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include <string.h>
using namespace std;


void login();
void forget();

void registration();


int main()
{
     int c;
     cout<<"\t\t\t___________________________________________\n\n\n";
     cout<<"\t\t\t              Welcome to login page         \n\n\n";
     cout<<"\t\t\t_________________    menu  ______________    \n\n\n";
     cout<<"                                                    \n\n";


     cout<<"\t| press 1 to  login    |"<< endl;
     cout<<"\t| press 2 to  register |"<< endl;
     cout<<"\t| press 3 to  forget   |"<< endl;
     cout<<"\t| press 4 to  Exit     |"<< endl;

     cout<<"\n\t\t\t  please enter your choice: ";
     cin>> c;

     cout<<endl;
     switch(c){


    case 1:
      login();
      break;

    case 2:
    registration();
    break;

    case 3:
    forget();
    break;


    case 4:
        cout<<"\t\t\t thankyou.. \n\n";
        break;



    default:

        system("cls");

        cout<<"\t\t\t please select from the options given obove \n"<<endl;

        main();



     }




    return 0;
}


void login(){

int count;

string userId,password,id, pass;

system("cls");
cout<<"\t\t\t please enter the user and password :"<<endl;

cout<<"\t\t\t UserName: " ;
cin>> userId;
cout<<"\t\t\t password: ";
cin>>password;

ifstream input("records.txt");


while(input>>id>>pass){


    if(id==userId && pass==password ){


        count =1;
        system("cls");

    }

}

input.close();
if(count==1){


    cout<< userId<<"\n your login is successfull \n Thanks for logging in! \n";
    main();

}

else{



    cout<<"\n user not register:";
    main();


}



}


void registration(){

string ruserId,rpassword, pid,rpass;
system("cls");


cout<<"\t\t\t enter the user name: ";

cin>>ruserId;
cout<<"\t\t\t enter the password: ";

cin>>rpassword;

ofstream f1("records.txt",ios::app);
f1<<ruserId<<' ' <<rpassword<<endl;
system("cls");
cout<<"\n\t\t\t Registration is successful :";
main();


}



void forget(){


int option;

system("cls");

cout<<"\t\t\t you forget the passwrod \n ";
cout<<"press 1 to search id by user name: "<<endl;
cout<<"press 2 to go to main menu: "<<endl;
cout<<"\t\t\t Enter you choice ";

cin>>option;

switch(option){



case 1:{

    int count =0;
    string suserId,sid,spass;
    cout<<"\n\t\t\t Enter the name you remembered : ";
    cin>>suserId;
    ifstream f2("records.txt");

    while(f2>>sid>>spass){



        if(sid==suserId){


            count=1;

        }
    }

    f2.close();

    if(count==1){


        cout<<"\n\n Your account is found! \n";
        cout<<"\n\n\n your passwprd is : "<<spass;

        main();

    }


    else{


        cout<<"sorry account not found! \n ";
        main();


    }
    break;


}

case 2:


    {
        main()
       ;


    }

default:

    cout<<"\t\t\t wrong choice ! please try agian"<<endl;
    forget();



}


}




