#include<iostream>

using namespace std;


class complex{
      public:
            int real;
            int img;
     
            complex(){}
            complex operator+(complex);
            complex operator*(complex);
            friend ostream &operator<<(ostream &, complex&);
            friend istream &operator>>(istream &, complex&);


};



complex complex:: operator+(complex obj){
        complex temp;
        temp.real = real + obj.real;
        temp.img =  img +  obj.img;
        return temp;

}



istream &operator>>(istream &is , complex& obj){
        is>>obj.real;
        is>>obj.img;
        return is;

}



ostream &operator<<(ostream &out , complex& obj){
        out<<""<<obj.real;
        out<<"+"<<obj.img<<"i";
        return out;

}



complex complex:: operator*(complex obj){
        complex temp;
        temp.real = real*obj.real - img*obj.img;
        temp.img = real*obj.real + img*obj.img;

        return temp;


}




int main(){
    int ch;
    char ans;
    complex a,b,c,d;

    do{
      cout<<"Addition"<<endl;
      cout<<"Multiplication"<<endl;
      cout<<"Enter your choice"<<endl;
      cin>>ch;

      switch(ch){
            case 1:
                 cout<<"Enter the first complex number"<<endl;
                 cout<<"Enter the real and imaginary part"<<endl;
                 cin>>a;
                 cout<<"Enter the second complex number"<<endl;
                 cout<<"Enter the real and imaginary part"<<endl;
                 cin>>b;
                 c = a+b;
                 cout<<c;
                 break;
           case 2:
                cout<<"Enter the first complex number"<<endl;
                cout<<"Enter the real and imaginary part"<<endl;
                cin>>a;
                cout<<"enter the second complex number"<<endl;
                cout<<"enter the real and imaginary part"<<endl;
                cin>>b;

                d = a*b;
                cout<<d;
                break;
               }
           cout<<endl;
           cout<<"Do you want to go to main menu or not"<<endl;
           cin>>ans;
           }while(ans=='Y' || ans == 'y');


     return 0;
 }
