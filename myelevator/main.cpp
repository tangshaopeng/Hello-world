#include<iostream>
#include"elevator.h"
#include"elevator.cpp"
#include"date.cpp"
#include"date.h"
int main(){

    AdvancedElevator lift;
    CDate da;
	cout<<"������"<<da.getYear()<<"��"<<da.getMonth()<<"��"<<da.getDay()<<"��"<<endl;
    cout<<"�õ���һ��ʮ�㣬��ӭ����ʹ�ã�"<<endl<<endl;

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
