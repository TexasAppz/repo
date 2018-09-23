#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
  string arr[] = {"jaime", "luis", "garcia"};
  cout <<"what is your name: \n";


  for (int i = 0; i < sizeof(arr); i++){
    string arr_new = arr[i];
    cout<< arr_new <<" "<< endl;
  }
//  cout << arr << endl;
  return 0;
}
