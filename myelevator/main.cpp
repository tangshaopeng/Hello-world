#include<iostream>
#include"elevator.h"
#include"elevator.cpp"
#include"date.cpp"
#include"date.h"
int main(){

    AdvancedElevator lift;
    CDate da;
	cout<<"今天是"<<da.getYear()<<"年"<<da.getMonth()<<"月"<<da.getDay()<<"日"<<endl;
    cout<<"该电梯一共十层，欢迎您的使用！"<<endl<<endl;

    while(1<2)
    {
        lift.Show2();
        lift.Show1();

        lift.setInform();
        lift.Sort();
        lift.Show3();
    }

    return 0;
}
