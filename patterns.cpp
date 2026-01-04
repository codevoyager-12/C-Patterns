#include<iostream>
using namespace std;
int main(){
    // Simple pyramid
  cout<<"Enter the number "<<endl;
  int num;
  cin>> num;
  for(int i=0;i<num;i++){
    for(int j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
  }
}