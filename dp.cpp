#include <iostream>
#include <string>
#include<list>  
#include <cmath>
#include<bits/stdc++.h>
#include "dp.hpp"
using namespace std;


int carte00(){
    cout<<"xxxxxxxxxxxxx------------xxxxxxxxxxxx"<<endl;
    cout<<"x                                    "<<endl;
    cout<<"                                1 -->"<<endl;
    cout<<"                                     "<<endl;
    cout<<"x                             xxxxxxx"<<endl;
    cout<<"x             |               xxxxxxx"<<endl;
    cout<<"x             |               xxxxxxx"<<endl;
    cout<<"x            \\2/              xxxxxxx"<<endl;
    int side;
    cin>>side;
    return side;
}
int carte10(){
    cout<<"xx----xxxxxxx----xxxx----xxxxxxxxxxxx"<<endl;
    cout<<"                                     "<<endl;
    cout<<"<--0                              3-->"<<endl;
    cout<<"                                     "<<endl;
    cout<<"xx----xxxxxxx----xxxx----xxxxxxxxxxxx"<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    int side;
    cin>>side;
    return side;
}

int carte20(){
    cout<<"xxxxxxxxxxxxxxxxxxxxx----xxxxxxxxxxxx"<<endl;
    cout<<"                              /      "<<endl;
    cout<<"<--1                          |   4-->"<<endl;
    cout<<"                              \\      "<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxx----xxxxxxxxxxxx"<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    int side;
    cin>>side;
    return side;
}
int carte01(){
    cout<<"x             ^               xxxxxxx"<<endl;
    cout<<"              |               xxxxxxx"<<endl;
    cout<<"              0               xxxxxxx"<<endl;
    cout<<"-------//closed\\\\-------------xxxxxxx"<<endl;
    cout<<"                              xxxxxxx"<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    cout<<"                                     "<<endl;
    int side;
    cin>>side;
    return side;


}
int pathmap(int cpath){
    while (cpath!=4){
    if (cpath == 0)
        cpath = carte00();
    
    if (cpath ==1)
        cpath = carte10();
    
    if (cpath == 2)
        cpath = carte01();
    if (cpath  == 3)
        cpath = carte20();
    }
    return 0;
}
