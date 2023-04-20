#include<iostream>
#include<string.h>
using namespace std;
class States
{
public:
    int a;
    char name[20];
    States(int a,char b[20]){
        cout<<"<=== Execution of parameter constructor ===>"<<endl;
    }
    ~States(){
        cout<<"<=== Execution of destructors constructor ===>"<<endl;
    }
};
int main (){
    char strrring[20] = "JohnWick";
    States objpara(50,strrring);
    cout<<"<=== Execution of Main function ===>"<<endl;
    return 0;
}