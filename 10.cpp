#include <iostream>
using namespace std;
class Train
{
public:
    int Train_Number;
    char Train_Name[20];
    char Train_Source[20];
    char Train_Destination[20];
    char Train_Time[20];
    void setter(){
        cout<<"Train number";
        cin>>Train_Number;
        cout<<"Train name";
        cin>>Train_Name;
        cout<<"Train source";
        cin>>Train_Source;
        cout<<"Train Destination";
        cin>>Train_Destination;
        cout<<"Train Time";
        cin>>Train_Time;
    }
    void getter(){
        cout<<"Train number: "<<Train_Number<<endl;
        cout<<"Train name: "<<Train_Name<<endl;
        cout<<"Train source: "<<Train_Source<<endl;
        cout<<"Train destination: "<<Train_Destination<<endl;
        cout<<"Train time: "<<Train_Time<<endl;
    }
    int checker(){
        return Train_Number;
    }
};
int main()
{   
    int mm;
    cout<<"How many train data do you want?";
    cin>>mm;
    Train arryofobj[mm];
    int i,n;
    for(i=0;i<mm;i++){
        arryofobj[i].setter();
    }
    for(i=0;i<mm;i++){
        arryofobj[i].getter();
    }
    cout<<"Which train data do you want?";
    cin>>n;
    for(i=0;i<mm;i++){
        if(n == arryofobj[i].checker()){
            arryofobj[i].getter();
}
    }
}

// HINT:
//     return train_number;
// }

// int number = 123456;

// if(number == obj[i].set()){

//     obj[i].get();

// }
