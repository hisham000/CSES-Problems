#include <iostream>
#include<cstring>
using namespace std;
using std::cout;
using std::cin;
int sol(){
    string n;
    cin>>n;
    int len=n.length();
    int max=0;
    int counter=1;
    for(int i=0;i<len;i++){
        if (n[i]==n[i+1]){
            counter=counter+1;
        }
        else{
            counter=1;
        }
        if (counter>max)
            max=counter;
    }
    return max;
}
int main(){
    cout<<sol();
    return 0;
}