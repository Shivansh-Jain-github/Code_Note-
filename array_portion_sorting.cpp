#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

void sort_algo_ex2();

int main(){

    /* create an array of int type and store some values in it and sort it 
      within a given portion.
    */
    sort_algo_ex2();

}

void sort_algo_ex2(){
    int a[10]={50,10,40,90,80,30,100,60,20,70};
  sort(a+2,a+8);
  for(int i=0;i<=9;i++)
    cout<<" "<<a[i];
cout<<endl;
}