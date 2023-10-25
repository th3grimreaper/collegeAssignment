#include<iostream>
#include "info.h"
using std::cout;
using std::cin;
using std::endl;

void printHollowSquare(int len, int breadth) {
  for(int i=0; i<len; i++) {
    for(int j=0; j<breadth; j++) {
      if((i==0 || i==len-1) || (j==0 || j==breadth-1)) {
        cout<<"*";
      } else {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

int main() {
  info();
  int len, brd;
  cout<<"enter the length and breadth:"<<endl;
  cin>>len>>brd;
  printHollowSquare(len, brd);
  return 0;
}
