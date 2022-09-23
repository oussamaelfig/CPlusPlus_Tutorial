#include <iostream>
using namespace std;

int main(){
    int a=1, b=2, c=3, d=4;
    int* pa=&a;
    int* pb=&b;
    int* pc=&c, *pd=&d;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "pa=" << pa << "\tpb=" << pb << "\tpc=" << pc << "\tpd=" << pd << endl;
    *pa = 4;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "pa=" << pa << "\tpb=" << pb << "\tpc=" << pc << "\tpd=" << pd << endl;
    pa = pb;
    *pa = 8;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "pa=" << pa << "\tpb=" << pb << "\tpc=" << pc << "\tpd=" << pd << endl;
    c = 10;
    d += *pd;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\td=" << d << endl;
    cout << "pa=" << pa << "\tpb=" << pb << "\tpc=" << pc << "\tpd=" << pd << endl;
    return 0;
}

//Ex1:
// a=1     b=2     c=3     d=4
// pa=0x47cfdffc4c pb=0x47cfdffc48 pc=0x47cfdffc44 pd=0x47cfdffc40
// a=4     b=2     c=3     d=4
// pa=0x47cfdffc4c pb=0x47cfdffc48 pc=0x47cfdffc44 pd=0x47cfdffc40
// a=4     b=8     c=3     d=4
// pa=0x47cfdffc48 pb=0x47cfdffc48 pc=0x47cfdffc44 pd=0x47cfdffc40
// a=4     b=8     c=10    d=8
// pa=0x47cfdffc48 pb=0x47cfdffc48 pc=0x47cfdffc44 pd=0x47cfdffc40