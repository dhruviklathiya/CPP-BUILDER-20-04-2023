#include<iostream>
#include<string.h>

using namespace std;

class student1
{
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_email[20];
    char stu_city[20];
    char stu_college[20];
public:
    void getter(){
        cout<<"Enter student's id:";
        cin>>this->stu_id;
        cout<<"Enter student's name:";
        cin>>this->stu_name;
        cout<<"Enter student's age in years:";
        cin>>this->stu_age;
        cout<<"Enter in which course student is:";
        cin>>this->stu_course;
        cout<<"Enter student's email:";
        cin>>this->stu_email;
        cout<<"Enter student's city:";
        cin>>this->stu_city;
        cout<<"Enter student's college:";
        cin>>this->stu_college;
    }
    void printer(){
        cout<<"Student's id: "<<this->stu_id<<endl;
        cout<<"Student's name: "<<this->stu_name<<endl;
        cout<<"Student's age is: "<<this->stu_age<<endl;
        cout<<"Student is in following course: "<<this->stu_course<<endl;
        cout<<"Student's E-mail is: "<<this->stu_email<<endl;
        cout<<"Student is from following city: "<<this->stu_city<<endl;
        cout<<"Student is in following college: "<<this->stu_college<<endl;
    }
};
int main(){
    int n;
    int i;
    cout<<"How many students details you're willing to store?";
    cin>>n;
    student1 s[n];
    for ( i = 0; i < n; i++)
    {
        s[i].getter();
    }
    for ( i = 0; i < n; i++)
    {
        s[i].printer();
    }
    return 0;
}

// WAY 2:
// #include<iostream>
// #include<string.h>

// using namespace std;

// class student1
// {
// private:
//     int stu_id;
//     char stu_name[20];
//     int stu_age;
//     char stu_course[20];
//     char stu_email[20];
//     char stu_city[20];
//     char stu_college[20];
// public:
//     void getter(){
//         cout<<"Enter student's id:";
//         cin>>this->stu_id;
//         cout<<"Enter student's name:";
//         cin>>this->stu_name;
//         cout<<"Enter student's age in years:";
//         cin>>this->stu_age;
//         cout<<"Enter in which course student is:";
//         cin>>this->stu_course;
//         cout<<"Enter student's email:";
//         cin>>this->stu_email;
//         cout<<"Enter student's city:";
//         cin>>this->stu_city;
//         cout<<"Enter student's college:";
//         cin>>this->stu_college;
//     }
//     void setter(){
//         this->stu_id = stu_id;
//         strcpy(this->stu_name,stu_name);
//         this->stu_age = stu_age;
//         strcpy(this->stu_course,stu_course);
//         strcpy(this->stu_email,stu_email);
//         strcpy(this->stu_city,stu_city);
//         strcpy(this->stu_college,stu_college);
//     }
//     void printer(){
//         cout<<"Student's id: "<<this->stu_id<<endl;
//         cout<<"Student's name: "<<this->stu_name<<endl;
//         cout<<"Student's age is: "<<this->stu_age<<endl;
//         cout<<"Student is in following course: "<<this->stu_course<<endl;
//         cout<<"Student's E-mail is: "<<this->stu_email<<endl;
//         cout<<"Student is from following city: "<<this->stu_city<<endl;
//         cout<<"Student is in following college: "<<this->stu_college<<endl;
//     }
// };
// int main(){
//     student1 s[5];
//     int i;
//     for ( i = 0; i < 4; i++)
//     {
//         s[i].getter();
//         s[i].setter();
//     }
//     for ( i = 0; i < 4; i++)
//     {
//         s[i].printer();
//     }
//     return 0;
// }

