#include<iostream>
#include<string.h>
using namespace std;
class Hotel{
    private:
    int hotel_id;
    char hotel_staff_name[20];
    int hotel_staff_count;
    int hotel_room_size;
    int hotel_establish_year;
    char hotel_address[100];
    int hotel_rating;
    char hotel_website[50];
    public:
    void setter(int a,char b[20], int c, int d, int e, char f[100],int g, char h[50]){
    this->hotel_id = a;
    strcpy(this->hotel_staff_name,b);
    this->hotel_staff_count = c;
    this->hotel_room_size = d;
    this->hotel_establish_year=e;
    strcpy(this->hotel_address,f);
    this->hotel_rating = g;
    strcpy(this->hotel_website,h);
    }
    void printer(){
         cout<<"hotel_id: "<<hotel_id<<endl;        
         cout<<"hotel_staff_name: "<<hotel_staff_name<<endl;        
         cout<<"hotel_staff_count: "<<hotel_staff_count<<endl;        
         cout<<"hotel_room_size: "<<hotel_room_size<<endl;        
         cout<<"hotel_establish_year: "<<hotel_establish_year<<endl;        
         cout<<"hotel_address: "<<hotel_address<<endl;        
         cout<<"hotel_rating: "<<hotel_rating<<endl;        
         cout<<"hotel_website: "<<hotel_website<<endl;            
    }
};
int main(){
    int a;
    char b[20];
    int c;
    int d;
    int e;
    char f[100];
    int g;
    char h[50];
    Hotel obj;
    cout<<"hotel_id: ";
    cin>>a;
    cout<<"hotel_staff_name: ";
    cin>>b;
    cout<<"hotel_staff_count: ";
    cin>>c;
    cout<<"hotel_room_size: ";
    cin>>d;
    cout<<"hotel_establish_year: ";
    cin>>e;
    cout<<"hotel_address: ";
    cin>>f;
    cout<<"hotel_rating: ";
    cin>>g;
    cout<<"hotel_website: ";
    cin>>h;
    obj.setter(a,b,c,d,e,f,g,h);
    obj.printer();
}

// #include<iostream>
// #include<string.h>

// using namespace std;

// class Employee {
// 	private:
// 	int	id;
// 	char staff_name[100] ;
// 	char staff_count[100];
// 	char room_size[100];
// 	int establish_year;
// 	char address[100];
// 	int	rating ;
// 	char website[100];

// 	public:
// 		void setdata(int id,char staff_name[],char staff_count[],char room_size[],int establish_year,char address[],int rating,char website[])	{
// 			this->id = id;
// 			strcpy(this->staff_name,staff_name);
// 			strcpy(this->staff_count,staff_count);
// 			strcpy(this->room_size,room_size);
// 			this->establish_year=establish_year;
// 			strcpy(this->address,address);
// 			this->rating=rating;
// 			strcpy(this->website,website);
//        };
//        void getdata(){
//        	cout<<"staff id : "<<id<<endl;
//        	cout<<"staff named : "<<staff_name<<endl;
//        	cout<<"staff count : "<<staff_count<<endl;
//        	cout<<"room_size : "<<room_size<<endl;
//        	cout<<"establish_year : "<<establish_year<<endl;
//        	cout<<"address : "<<address<<endl;
//        	cout<<"rating : "<<rating<<endl;
//        	cout<<"website : "<<website<<endl;
// 	   }

// };

// int main(){
// 	int	id = 11;
// 	char staff_name[] = "virat";
// 	char staff_count []= "50";
// 	char room_size[] = "15feet x 15feet";
// 	int establish_year = 1991;
// 	char address[]= "127 bakers street ";
// 	int	rating = 5 ;
// 	char website[] = "www.bookmyhotel.com";
	
// 	Employee obj;
//      obj.setdata(id,staff_name,staff_count,room_size,establish_year,address,rating,website);
//      obj.getdata();
//     return 0;
// }
