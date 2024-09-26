///week03-1.cpp了解"文法糖"range-based for迴圈在2011年的c++才能用
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c:s){
        cout <<c<<"\n";
    }
}
