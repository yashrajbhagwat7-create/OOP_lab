#include<iostream>
#include<stdlib.h>
#include<string.h>


using namespace std;
template<typename T>

void sort(T a[], int n){
     int pos;
     T temp;
     for(int i =0; i<n-1;i++){
         pos = i;
         for(int j = i; j<n; j++){

             if(a[j] < a[pos]){
                pos=j;
               }
             if(pos!=i){
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
               }
         }
}

      cout<<"Sorted element"<<endl;
      for(int k =0; k<n; k++){
         cout<<"\n"<<a[k];
         }
}
     

int main(){
    int no;
    int ch;
    int fno;
    int ele;
    do{
         cout<<"\n1.int sorting"<<endl;
         cout<<"\n2.char sorting"<<endl;
         cout<<"\n3.float sorting"<<endl;
         cout<<"\nEnter choice"<<endl;
         cin>>ch;
         switch(ch){
               case 1:
                    int sort1[100];
                    cout<<"Enter the number of elements"<<endl;
                    cin>>no;
                    for(int  i =0; i<no; i++){
                        cin>>sort1[i];
                       }
                   sort<int>(sort1,no);
                   break;
              case 2:
                   char sort2[100];
                   cout<<"enter the number of elements"<<endl;

                   cin>>ele;
                   for(int i=0; i<ele; i++){
                       cin>>sort2[i];
                      }
                   sort<char> (sort2,ele);
                   break;
             case 3: 
                  float sort3[100]; 
                  cout<<"enter the number of elements"<<endl;
                  cin>>fno;
                  for(int  i =0 ; i<fno;i++){
                      cin>>sort3[i];
                     }
                  sort<float>(sort3,fno);
                  break;
                  
            case 4:
                 exit(0);
            }
}while(ch);

 
    return 0;
}

 
