#include<iostream>
#include<cstring>
using namespace std;
class invaliduserexception{
      public:
        const char * message;

         invaliduserexception(const char * msg){
                message=msg;
         }

};




int main(){
    int age;
    float inc;
    char  city[20];
    char vehicle[20];
    cout<<"\nEnter the age : "<<endl;
    cin>>age;
    cout<<"Enter the income : "<<endl;
    cin>>inc;
    cout<<"Enter the city name : "<<endl;
    cin>>city;
    cout<<"Do you own a 4-wheeler : "<<endl;
    cin>>vehicle;


    try{
       if(age<=18 || age>=55){
         throw invaliduserexception("age must be between 18 and 55");
         }
       if(inc <50000 || inc>100000){
         throw invaliduserexception("Income  must be between 50000rs and 100000rs");
         }
      if(strcmp(city,"Pune")!=0 && strcmp(city,"Mumbai")!=0 && strcmp(city,"Banglore")!=0 && strcmp(city,"Chennai")!=0){
         throw invaliduserexception("User must be living in Pune, mumbai, banglore , chennai ");
        }
      if(strcmp(vehicle ,"yes")!=0){
         throw invaliduserexception("user must own a 4-wheeler");
       }
      cout<<"All condition are satisfied"<<endl;
      cout<<"user is eligible"<<endl;
      }
     catch(invaliduserexception e){
          cout<<e.message<<endl;
      }

    return 0;
}
