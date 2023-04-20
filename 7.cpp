#include<iostream>
#include<string.h>
using namespace std;
class States
{
public:
    int a;
    char name[20];
    States(int a,char b[20]){
        this->a = a;
        strcpy(this->name,b);
        cout<<"Following is an integer passed in parameter: "<<a<<endl;
        cout<<"Following is an array of character passed in parameter: "<<b<<endl;
    }
};
int main (){
    char strrring[20] = "JohnWick";
    States objpara(50,strrring);
    return 0;
}