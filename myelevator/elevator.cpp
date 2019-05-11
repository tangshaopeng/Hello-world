#include"elevator.h"

void AdvancedElevator::Show1(){
     cout<<" ---"<<"��ѡ�����"<<"--- "<<endl
         <<"|    "<<"1.����      "<<"|"<<endl
         <<"|    "<<"2.�½�      "<<"|"<<endl
         <<" ---------------- "<<endl<<endl;
     cin>>choice;
     cout<<"������Ҫ������������"<<endl;
     cin>>count;
     cout<<"������ÿ��������¥���Ŀ��¥�㣺"<<endl;
}

void AdvancedElevator::setInform(){

    int a,b;
    for(int i=0,j=0;i<count;i++,j+=2)
    {
        cin>>a>>b;
        person[i].Nowfloor=a,person[i].Destination=b;
        sort[j]=a,sort[j+1]=b;
    }


}
void AdvancedElevator::Show2(){
    cout<<"��ǰ����ͣ��"<<getN()<<"��"<<endl;
}
void AdvancedElevator::Sort(){
    int temp;
    for(int i=0;i<2*count-1;i++)
        for(int j=i+1;j<2*count;j++)
            if(sort[i]>sort[j])
            {
                temp=sort[i];
                sort[i]=sort[j];
                sort[j]=temp;
            }

}
void AdvancedElevator::Show3(){
    if(choice==1)
    {
        for(int i=1;i<=sort[2*count-1];i++)
            for(int j=0;j<=2*count-1;j++)
                if(i!=getN()&&i==sort[j])
                    Up(i);
    }
    else
    {
        for(int i=sort[2*count-1];i>=1;i--)
            for(int j=2*count-1;j>=0;j--)
                if(i!=getN()&&i==sort[j])
                Down(i);
    }
}
void Elevator::Up(int t){
        int i;
        for(i=n;i<=t-1;i++){
            cout<<"--"<<i<<"--"<<endl<<endl;
            Sleep(1000);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
        cout<<"��"<<t<<"�㵽��"<<endl<<endl;
        Sleep(5000);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

        n=t;

}

void Elevator::Down(int t){

            int i;
            for( i=n;i>=t+1;i--)
            {
                cout<<"--"<<i<<"--"<<endl<<endl;
                Sleep(1000);
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
            cout<<"��"<<t<<"�㵽��"<<endl<<endl;
            Sleep(5000);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

            n=t;


}
