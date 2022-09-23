// lab2ex3.cpp
#include <iostream>
using namespace std;
void test(int a, int* b, int* c, int& d, int*& e){
    a=11; // effet local
    b++; // change l’adresse locale de b
    *c=13; // change la valeur pointee par c
    d=14; // change la valeur referee par d
    e=c; // change la valeur du pointeur (adresse) pour celle de c.
}
int main(){
    int v1=1, v2=2, v3=3, v4=4, *p5=&v1;
    test(v1, &v2, &v3, v4, p5);
    cout<<v1<<"\t"<<v2<<"\t"<<v3<<"\t"<<v4<<"\t"<<*p5<<"\t"<<endl;
    return 0;
}