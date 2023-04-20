#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
private:
    int emp_id;
    char emp_name[20];
    char emp_role[20];
    int emp_salary;
    int emp_exp;
    char emp_add[40];
    char emp_mail[20];
    int emp_contact;

public:
    void getter(){
        cout<<"Enter Employee's id:";
        cin>>this->emp_id;
        cout<<"Enter Employee's name:";
        cin>>this->emp_name;
        cout<<"Enter Employee's role in company:";
        cin>>this->emp_role;
        cout<<"Enter Employee's salary:";
        cin>>this->emp_salary;
        cout<<"Enter Employee's experience in years:";
        cin>>this->emp_exp;
        cout<<"Enter Employee's address:";
        cin>>this->emp_add;
        cout<<"Enter Employee's email:";
        cin>>this->emp_mail;
        cout<<"Enter Employee's contact number:";
        cin>>this->emp_contact;
    }
    void setter(){
        this->emp_id = emp_id;
        strcpy(this->emp_name,emp_name);
        strcpy(this->emp_role,emp_role);
        this->emp_salary = emp_salary;
        this->emp_exp = emp_exp;
        strcpy(this->emp_add,emp_add);
        strcpy(this->emp_mail,emp_mail);
        this->emp_contact = emp_contact;
    }
    void printer(){
        cout<<"Employee's id: "<<this->emp_id<<endl;
        cout<<"Employee's name: "<<this->emp_name<<endl;
        cout<<"Employee's role is: "<<this->emp_role<<endl;
        cout<<"Employee's salary is: "<<this->emp_salary<<endl;
        cout<<"Employee's experience is: "<<this->emp_exp<<endl;
        cout<<"Employee's E-mail is: "<<this->emp_mail<<endl;
        cout<<"Employee's address is: "<<this->emp_add<<endl;
        cout<<"Employee's contact number is: "<<this->emp_contact<<endl;
    }
};

int main(){
    Employee s[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        s[i].getter();
        s[i].setter();
    }
    for ( i = 0; i < 3; i++)
    {
        s[i].printer();
    }
    return 0;
}

