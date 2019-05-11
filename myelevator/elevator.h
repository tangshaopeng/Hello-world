#include <iostream>
#include<ctime>
#include<cstdio>
#include<windows.h>
#pragma once
using namespace std;

class Person{
public:
    int Nowfloor;
    int Destination;
    int Weight;
};

class Elevator{
private:
    int n=1;
    int max=10;
public:
    int getN(){return n;}
    void Up(int t);
    void Down(int t);

};

class AdvancedElevator:public Elevator{
private:
    int choice;
    int count;
    Person person[100];
    int sort[200];
public:
    void Show1();
    void Show2();
    void setInform();
    void Sort();
    void Show3();
};
