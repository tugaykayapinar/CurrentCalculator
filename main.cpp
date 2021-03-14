#include <iostream>

using namespace std;

void welcome(){
    cout<<"<<<<< Welcome Current Calculator >>>>>"<<endl;
    cout<<"Author : Tugay Kayapinar" <<endl;
    cout<<"Date   : 14 March 21\n\n\n";
}
float get_voltage(){
    cout<<"What is the DC Voltage of Your Source: "<<endl;
    float DCvalue=0;
    cin>>DCvalue;
    return DCvalue;


}
int options(){
    cout<<"0-Exit"<<endl;
    cout<<"1-Add Parallel Resistor"<<endl;
    cout<<"2-Add Serial Resistor"<<endl;
    cout<<"3-Calculate Current"<<endl;
    int selection=0;
    cout<<"Selection :";
    cin>>selection;
    return selection;


}
float get_parallel_resistor(){
    cout<<"What is the R: "<<endl;
    float R=0;
    cin>>R;
    return R;


}

float get_serial_resistor(){
    cout<<"What is the R: "<<endl;
    float R=0;
    cin>>R;
    return R;
}





int main()
{
    welcome();
    float currentR=0;
    float voltage=get_voltage();
    float Res=0,Current=0;
    int currentoptions=options();
    while(currentoptions!=0){
        switch (currentoptions){
        case 1:
            currentR=get_parallel_resistor();
            Res=1/((1/Res)+(1/currentR));
            currentoptions=options();
            break;
        case 2:
            currentR=get_serial_resistor();
            Res=Res+currentR;
            currentoptions=options();
            break;
        case 3:
            Current=voltage/Res;
            cout<<"Voltage: "<<voltage<<endl;
            cout<<"Res    : "<<Res<<endl;
            cout<<"Current: "<<Current<<endl;
            currentoptions=options();
            break;

        }


    }

}
