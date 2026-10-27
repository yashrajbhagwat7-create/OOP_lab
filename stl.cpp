#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Item{
      public:
      char name[40];
      int quantity;
      int cost;
      int code;
      
      bool operator==(const Item & i1){
           if(code == i1.code){
              return 1;
              }
           return 0;
           }
      bool operator< (const Item &i1){
           if(code<i1.code){
              return 1;
             }
           return 0;
           }
};

vector<Item> o1;

void print(Item &l1);
void search();
void display();
void insert();
void del();

bool compare(const Item &l1,const Item &l2){
     return l1.code<l2.code;
}
 

void insert(){
     Item l1;

     cout<<"\n Enter the name"<<endl;
     cin>>l1.name;
     cout<<"Enter the quantity"<<endl;
     cin>>l1.quantity;
     cout<<"Enter the cost"<<endl;
     cin>>l1.cost;
     cout<<"Enter the code"<<endl;
     cin>>l1.code;
     o1.push_back(l1);
      
}


void display(){
     for_each(o1.begin(),o1.end(),print);
}

void print(Item &l1){
     cout<<"The name: "<<endl;
     cout<<l1.name<<endl;
     cout<<"The Quantity: "<<l1.quantity<<endl;
     cout<<"The cost: "<<l1.cost<<endl;
     cout<<"The code: "<<l1.code<<endl;

}
void search(){
     vector<Item> :: iterator p;
     Item i1;
     cout<<"enter the code to search"<<endl;
     cin>> i1.code;
     p = find(o1.begin(),o1.end(),i1);
     if(p == o1.end()){
        cout<<"Not Found"<<endl;
       }
     else{
        cout<<"Found"<<endl;
}
}

void del(){
        vector<Item> :: iterator p;
        Item i1;
        cout<<"Enter the code to delete "<<endl;
        cin>>i1.code;
        p = find(o1.begin(),o1.end(), i1);
        if(p == o1.end()){
           cout<<"Not found"<<endl;
        }
        else{
            o1.erase(p);
            cout<<"Code Deleted"<<endl;
        }
}




int main(){
     int ch;
 
       do {
          cout<<"1.insert"<<endl;
          cout<<"2.display"<<endl;
          cout<<"3.search"<<endl;
          cout<<"4.sort"<<endl;
          cout<<"5.delete"<<endl;
          cout<<"Enter the choice"<<endl;
          cin>>ch;
          switch(ch){
                case 1:
                     insert();
                     break;
                case 2:
                     display();
                     break;
                case 3:
                     search();
                     break;
                case 4:
                    sort(o1.begin(),o1.end(),compare);
                        cout<<"\n\n Sorted on Cost";
                        display();
                        break;
                     
                case 5:
                     del();
                     break;
                case 6:
                     exit(0);
                }
        }while(ch!=7);

return 0;
}
         

     
