#include<iostream>
#include<string.h>
using namespace std;
class Train
{
private:
    int train_number;
    char train_name[30];
    char train_source[30];
    char train_destination[30];
    char train_time[10];
public:
    void getter(){
        cout<<"Enter train number:";
        cin>>this->train_number;
        cout<<"Enter train name:";
        cin>>this->train_name;
        cout<<"Enter train source location:";
        cin>>this->train_source;
        cout<<"Enter train destination location:";
        cin>>this->train_destination;
        cout<<"Enter train time:[DO INCLUDE AM/PM]";
        cin>>this->train_time;
    }
    void setter(){
        this->train_number = train_number;
        strcpy(this->train_name,train_name);
        strcpy(this->train_source,train_source);
        strcpy(this->train_destination,train_destination);
        strcpy(this->train_time,train_time);
    }
    void printer(){
        cout<<"Train's number is: "<<this->train_number<<endl;
        cout<<"Train's name is: "<<this->train_name<<endl;
        cout<<"Train's source location is: "<<this->train_source<<endl;
        cout<<"Train's destination location is: "<<this->train_destination<<endl;
        cout<<"Train's time is: "<<this->train_time<<endl;
    }
};
int main (){
    int n,i,j;
    cout<<"How many train's content do you wanna enter?";
    cin>>n;
    Train t[n];
    for (i = 0; i < n; i++)
    {
        t[i].getter();
        t[i].setter();
    }
    cout<<"Which train detail do you wanna print?";
    cin>>j;
    t[j-1].printer();
    return 0;
}