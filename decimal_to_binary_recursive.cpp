#include<iostream>
using namespace std;

void fun(int dec){
    if(dec == 0) return;
    fun(dec/2);
    cout << dec%2;
}
int main()
{
    int decimal;
    cin >> decimal;
    fun(decimal);
    return 0;
}