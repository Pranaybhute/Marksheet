/*
Author: 	Pranay Bhute
Module: 	Programing With C++
Topic: 	    Create Marksheet
*/

#include <iostream>
#include<unistd.h>
using namespace std;

int main(){

cout<<"\v"<<endl;
cout<<"------------------------------- WELCOME TO ----------------------------------"<<endl<<endl;
sleep(1);

cout<<"-------------------------- KAMLA NEHRU COLLEGE NAGPUR ------------------------"<<endl<<endl;
sleep(1);

cout<<"            Your marksheet is auto-generated please enter your details.     "<<endl<<endl;
sleep(1);

cout<<"--------------------------------- NOTE ------------------------------------"<<endl<<endl;
sleep(1);

cout<<"your details are enter correctly beacause marksheet only generated one time.\nif you enter wrong details college are not responsible"                    <<endl;
sleep(1);

cout<<"\v_____________________________ MARKSHEET_____________________________________\v"<<endl<<endl;
sleep(1);

string name;
string father;
long roll_number;
int science,maths,social,english,hindi;
string Class;
int total;
char grades;

cout<<"Enter Your Name: ";
cin>>name;

cout<<"Enter Your Father Name: ";
cin>>father;

cout<<"Enter Your Class Name: ";
cin>>Class;

cout<<"Enter Your Roll NUmber: ";
cin>>roll_number;

sleep(1.6);
cout<<"\v------------------------------------  MARKS --------------------------------------"<<endl<<endl;
cout<<"please enter marks correctly.\nif marks enter wrong so college are not responsible of any case."<<endl;
sleep(1);

Hindi:
cout<<"\nEnter Your Hindi Mark: ";
cin>>hindi;
if(hindi>=100){
    cout<<"not valid.plz enter correctly"<<endl;
    goto Hindi;
}
English:
cout<<"Enter Your English Mark: ";
cin>>english;
if(english>=100){
    cout<<"not valid.plz enter correctly"<<endl;
goto English;
}
Maths:
cout<<"Enter Your Maths Mark: ";
cin>>maths;
if(maths>=100){
    cout<<"not valid.plz enter correctly"<<endl;
    goto Maths;
}
Science:
cout<<"Enter Your Science Mark: ";
cin>>science;
if(science>=100){
    cout<<"not valid.plz enter correctly"<<endl;
    goto Science;
}
SocailScience:
cout<<"Enter Your Social Science Mark: ";
cin>>social;
if(social>=100){
    cout<<"not valid.plz enter correctly"<<endl;
    goto SocailScience;
}

total=hindi+english+science+social+maths;

int per=total/5;

if(total>500 || total<0){
    cout<<"total score cannot be greater than 500.plz try again";
    exit(0);
}

if(total>=400 && total<=500){
    grades='A';
}else if(total>=300 && total<400){
    grades='B';
}else if(total>=200 && total<300){
    grades='C';
}else if(total>=150 && total<200){
    grades='D';
}else {
    grades='E';
}


sleep(1.5);
cout<<"_________________________________________________________________________________________"<<endl;
cout<<"| ------------------------------------ WELCOME TO --------------------------------------|"<<endl;
cout<<"| ---------------------------- KAMLA NEHRU COLLEGE NAGPUR ------------------------------|"<<endl;
cout<<"|____________________________________  MARKSHEET________________________________________|"<<endl;
cout<<"|\tName: "<<name<<"\t\t\t\t\t Father Name: "<<father<<"\t\t|"<<endl;
cout<<"|\tRoll No: "<<roll_number<<"\t\t\t\t\t Class:" <<Class<<"\t\t\t|"<<endl;
cout<<"|_______________________________________________________________________________________|"<<endl;
cout<<"|\t\t\t\t\t|\t\t\t\t\t\t|"<<endl;
cout<<"|\t\tSUBJECT\t\t\t|\t\t\tMARKS\t\t\t|"<<endl;
cout<<"|_______________________________________|_______________________________________________|"<<endl;
cout<<"|\t\t Hindi\t\t\t|\t\t"<<hindi<<"\t\t\t\t|"<<endl;
cout<<"|\t\t English\t\t|\t\t"<<english<<"\t\t\t\t|"<<endl;
cout<<"|\t\t Maths\t\t\t|\t\t"<<maths<<"\t\t\t\t|"<<endl;
cout<<"|\t\t Science\t\t|\t\t"<<science<<"\t\t\t\t|"<<endl;
cout<<"|\t\t SocialScience\t\t|\t\t"<<social<<"\t\t\t\t|"<<endl;
cout<<"|_______________________________________|_______________________________________________|"<<endl;
cout<<"|\t\t\t\t\t|\t\t\t\t\t\t|"<<endl;
cout<<"| \t\tTOTAL\t\t\t|\t\t"<<total<<"\t\t\t\t|"<<endl;
cout<<"|_______________________________________|_______________________________________________|"<<endl;
cout<<"|\t\t\t\t\t|\t\t\t\t\t\t|"<<endl;
cout<<"|    Total Marks: "<<total<<"\t\t\t|\t\t\t\t\t\t|"<<endl;
cout<<"|    Percentage:  "<<per<<"%"<<"\t\t\t|\t\t\t\t\t\t|"<<endl;
cout<<"|    Grade:  "<<grades<<"\t\t\t\t|\t\t\t\t\t\t|"<<endl;    
cout<<"|_______________________________________|_______________________________________________|"<<endl;

sleep(2);
cout<<"Marksheet is created by auto-generate from your details. you feel the wrong details college are not responsible."<<endl;
cout<<"any doubt so please contact the college."<<endl;
sleep(2);
cout<<"\v\t\t\t\t\t\tThank-You"<<endl;
cout<<"\v"<<endl;


return 0;

}