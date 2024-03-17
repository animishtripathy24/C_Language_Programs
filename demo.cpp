#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<a.length()<<" ";
    cout<<b.length()<<endl;
    cout<<a.append(b)<<endl;
    a[0]='e';
    b[0]='a';
    cout<<a<<" ";
    cout<<b<<" ";
    
  
    return 0;
}
