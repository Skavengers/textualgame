#include <iostream>
#include <string>
#include<list>  
#include <cmath>
#include<bits/stdc++.h>
#include "dp.cpp"
using namespace std;


string press( string q1, string q2, string q3)
{
    cout<<"press :"<<endl;
    cout<<"1: " << q1 <<endl;
    cout<<"2: " << q2 <<endl;
    cout<<"3: " << q3 <<endl;
    string rep;
    cin>>rep;
    return rep;
}
void bigspace(){
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
}

void diescreen(){
    cout<<" \\ \\  /              _ \\ _)       "<<endl;
    cout<<"  \\  /  _ \\  |  |    |  | |   -_) "<<endl;
    cout<<"   _| \\___/ \\_,_|   ___/ _| \\___| "<<endl;
    cout<<"                                  "<<endl;
}
void kk(string text = "continue"){
    int e;
    cout<<"1: "<<text<<endl;
    cin>>e;
}
void GEoeval(){
    cout<<"|----------------------------------|"<<endl;
    cout<<"|        Geographie Test           |"<<endl;
    cout<<"|----------------------------------|"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|  xxxxxxxxxxxxxxxxx               |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|  xxxxxxxxxxxx                    |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|  xxxxxxxxxxxxxxxxxxxxxxxxxxxxx   |"<<endl;
    cout<<"|  xxxxxxx                         |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|                                  |"<<endl;
    cout<<"|----------------------------------|"<<endl;

}

void chap2(){
    cout<<"How dare you enter into my room"<<endl;
    diescreen();
}

void chap1(){
    cout<<"Your Master:"<<endl;
    cout<<"'Please don't let this amazing shit of paper alone "<<endl;
    kk();
    cout<<"... Don't look at me and do it'"<<endl;
    cout<<"You bow on your scroll and at the top the terrible word Eval is wrote"<<endl;
    kk("Look at it");
    GEoeval();
    kk("Take your pen");
    cout<<"Geographie Test"<<endl<<endl<<endl<<"Q1 Who is our eternal master"<<endl;
    kk("Ourself    2:USA   3:Xi Jinping");
    cout<<"Your Master:"<<endl<<"'Ropiaouuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu !'"<<endl;
    kk();
    cout<<"'Could you stop playing with me. "<<endl;
    cout<<"This is an exam this is not breaktime'"<<endl;
    kk();
    cout<<"'Don't put USA this is not funny! The magistral incradible amazing who creates "<<endl<<"the world the God of the God the Dictator of the president "<<endl<<"XIN JIN PING will be furious!!!!!!!!'"<<endl;
    kk();
    cout<<"'Get out of my sight'!"<<endl;
    cout<<"Ropiaou :"<<endl<<"But Teacher..."<<endl;
    kk();
    cout<<"Riiiiiiiiiiiiing Riiiiiiiiiiiiiiiiing!"<<endl;
    kk();
    cout<<"Your Master:"<<endl<<"Everyone outside besides Ropiaou"<<endl<<endl<<endl<<endl;
    kk("Exit");
    pathmap(0);



}

int main(){
    cout<<"Welcome to"<<endl<<endl;
    cout<<"         _____       _              _ "<<endl;
    cout<<"        |   __| ___ | |_  ___  ___ | |"<<endl;
    cout<<"        |__   ||  _||   || . || . || |"<<endl;
    cout<<"to your |_____||___||_|_||___||___||_|"<<endl;
    cout<<endl;
    int letsgo(0);
    while (letsgo!=1)
    {
        cout<<"write the number 1 to begin!"<<endl;
        cin>>letsgo;
    }
    cout<<"Nice Antochan that's great"<<endl;
    kk("ok");
    cout<<"AH AH AHAAAAAAAAAAAAAAAAAAAAAAAAAAH AH AAAAAAAAAAAAAH"<<endl<<"You're so funny"<<endl;
    kk("ok");
    bigspace();
    cout<<"forward you a white carpet is lying on a small table"<<endl;
    cout<<"you're yawning when someone shout"<<endl<<"'Oh my god antochan what are you doing ?'"<<endl;
    string rep = press("UwU","Sorry miss the course was boring that I sleep","I'm really sorry.");
    bigspace();
    if (rep=="1"){
        diescreen();
        cout<<"never say such thing \n";
    }
    if (rep=="2"){
        cout<<"mister Antochan!"<<endl<<"Do you know where do you have to go"<<endl;
        kk("nop");
        bigspace();
        cout<<"at the director's room"<<endl;
        kk("...");
        diescreen();
}     
    if (rep=="3"){
        cout<<"'next time you will be fired'"<<endl<<endl;
        chap1();
        bigspace();
        chap2();
    }

    return 0;
}

