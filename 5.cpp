#include<iostream>
using namespace std;
class States
{
private:
    static char name1[40];
    static char name2[40];
    static char name3[40];
    static char name4[40];
    static char name5[40];
    static char name6[40];
    static char name7[40];
    static char name8[40];
    static char name9[40];
    static char name10[40];
    static char name11[40];
    static char name12[40];
    static char name13[40];
    static char name14[40];
    static char name15[40];
    static char name17[40];
    static char name18[40];
    static char name19[40];
    static char name20[40];
    static char name21[40];
    static char name22[40];
    static char name23[40];
    static char name24[40];
    static char name25[40];
    static char name26[40];
    static char name27[40];
    static char name28[40];
public:
    static void listout(){
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name4<<endl;
        cout<<name5<<endl;
        cout<<name6<<endl;
        cout<<name7<<endl;
        cout<<name8<<endl;
        cout<<name9<<endl;
        cout<<name10<<endl;
        cout<<name11<<endl;
        cout<<name12<<endl;
        cout<<name13<<endl;
        cout<<name14<<endl;
        cout<<name15<<endl;
        cout<<name17<<endl;
        cout<<name18<<endl;
        cout<<name19<<endl;
        cout<<name20<<endl;
        cout<<name21<<endl;
        cout<<name22<<endl;
        cout<<name23<<endl;
        cout<<name24<<endl;
        cout<<name25<<endl;
        cout<<name26<<endl;
        cout<<name27<<endl;
        cout<<name28<<endl;
    };

};
char States::name1[40] =  "Arunachal Pradesh";
char States::name2[40] =  "Assam";
char States::name3[40] =  "Bihar";
char States::name4[40] =  "Chhattisgarh";
char States::name5[40] =  "Goa";
char States::name6[40] =  "Gujarat";
char States::name7[40] =  "Haryana";
char States::name8[40] =  "Himachal Pradesh";
char States::name9[40] =  "Jharkhand";
char States::name10[40] = "Karnataka";
char States::name11[40] = "Kerala";
char States::name12[40] = "Madhya Pradesh";
char States::name13[40] = "Maharashtra";
char States::name14[40] = "Manipur";
char States::name15[40] = "Meghalaya";
char States::name17[40] = "Mizoram";
char States::name18[40] = "Nagaland";
char States::name19[40] = "Odisha";
char States::name20[40] = "Punjab";
char States::name21[40] = "Rajasthan";
char States::name22[40] = "Sikkim";
char States::name23[40] = "Tamil Nadu";
char States::name24[40] = "Telangana";
char States::name25[40] = "Tripura";
char States::name26[40] = "Uttar Pradesh";
char States::name27[40] = "Uttarakhand";
char States::name28[40] = "West Bengal";

int main (){
    States obj;
    obj.listout();
    return 0;
}