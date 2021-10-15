//Name: Kim Carlo Larino
//Section: BSCS 1-1
//Description: Performance Task 1 for CPF

//Retrieval of Data

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

//Start of Program

int main (){

    //Inputs

    long long int range,end,number,start;


//Page 1 - Start of Program

    system("Color 01");

    system("CLS");

//Page 2

    cout <<endl;
    cout <<endl;
    cout <<"Odd/Even Number Scheme"<<endl;
    cout <<"======================================" << endl;
    cout <<endl;
    cout <<"Enter Range of Numbers: ";
    cin >> range;
    start = 0;
    cout <<endl;

    while(start<=range){


        cout <<"Enter Integer: ";
        cin >> number;
        if(number % 2 == 0){
            cout <<number<<" is an even number"<<endl;
            cout <<endl;
        }
        else{
            cout <<number<<" is odd number"<<endl;
            cout <<endl;
        }

        start++;
    }

return 0;

}