#include <iostream>
using namespace std;

int main(){
    int a=1, b=2, c=3, d=4;
    int& ra=a;
    int& rb=b;
    int* pc=&c, *pd=&d;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "ra=" << ra << "\trb=" << rb << "\tpc=" << pc << "\tpd=" << pd << endl;
    ra = 4;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "ra=" << ra << "\trb=" << rb << "\tpc=" << pc << "\tpd=" << pd << endl;
    ra = rb;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "ra=" << ra << "\trb=" << rb << "\tpc=" << pc << "\tpd=" << pd << endl;
    c = 10;
    d += *pd;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "ra=" << ra << "\trb=" << rb << "\tpc=" << pc << "\tpd=" << pd << endl;
    return 0;
}


// a=1     b=2     c=3     d=4
// ra=1    rb=2    pc=0x8e33ffb14  pd=0x8e33ffb10
// a=4     b=2     c=3     d=4
// ra=4    rb=2    pc=0x8e33ffb14  pd=0x8e33ffb10
// a=2     b=2     c=3     d=4
// ra=2    rb=2    pc=0x8e33ffb14  pd=0x8e33ffb10
// a=2     b=2     c=10    d=8
// ra=2    rb=2    pc=0x8e33ffb14  pd=0x8e33ffb10