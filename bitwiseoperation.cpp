#include <iostream>
#include <string>

using namespace std; 

int main(){
     long int x=0,c=0;
     string a="finding";
     for(int i=0;i<a.length()-1;i++){
        x=1;
        x=x<<(a[i]-97);
        if((x&c)>0){
            cout<<a[i]<<" is Duplicate"<<endl;
        }
        else{
            c=x|c;
        }

     }
}