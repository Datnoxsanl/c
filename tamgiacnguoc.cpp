#include<iostream>
using namespace std ;
 int main (){
    int n,i,j;

     n = 6;

    cout << "Ve tam giac sao deu:\n";
   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
        cout<<" ";

      for(j = i; j <= n; j++)
           cout<< "* ";

                cout<< "\n";
   }


 return 0;

 }