#include<iostream>
using namespace std;
struct code {
    char nm[20];
    char email[30]; 
};
void exibe(const code &f){
    cout << f.nm << " : " << f.email << endl;
}
int main(){
    code cd = {"n4m3", "123@hotmail.com"};
    exibe(cd);
}
