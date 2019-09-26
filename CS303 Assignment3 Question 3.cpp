#include <string>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
  string s = "The quick brown fox jumps over the lazy dog.";
  reverse(s.begin(),s.end());
  stack<char> t;
  for(unsigned int i = 0;i < s.length();i++){
    if(s[i] != ' '){
      t.push(s[i]);
    }
    else {
      while(!t.empty()){
        cout << t.top();
        t.pop();
      }
      cout << " ";
   }
  }
  while(!t.empty()){
    cout << t.top();
    t.pop();
  }
}