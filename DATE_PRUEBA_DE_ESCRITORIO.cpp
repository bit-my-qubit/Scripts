#include <iostream>
using namespace std;
int main(){
    int A=12; //representa el recipiente de capacidad 12 gal
    int B=0; //representa el recipiente de capacidad 7 gal
    int C=0;//representa el recipiente de capacidad 5 gal
    cout<<"A="<<A<<" B="<<B<<" C="<<C<<endl;
    C=A-7; A=A-C;   cout<<"1. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=C; C=0;       cout<<"2. A="<<A<<" B="<<B<<" C="<<C<<endl;
    C=A-2; A=2;     cout<<"3. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=C+2; C=3;     cout<<"4. A="<<A<<" B="<<B<<" C="<<C<<endl;
    A=A+B; B=0;     cout<<"5. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=C; C=0;       cout<<"6. A="<<A<<" B="<<B<<" C="<<C<<endl;
    A=A-5; C=5;     cout<<"7. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=B+4; C=1;     cout<<"8. A="<<A<<" B="<<B<<" C="<<C<<endl;
    A=B+A; B=0;     cout<<"9. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=C; C=0;       cout<<"10. A="<<A<<" B="<<B<<" C="<<C<<endl;
    A=A-5; C=5;     cout<<"11. A="<<A<<" B="<<B<<" C="<<C<<endl;
    B=C+1; C=0;     cout<<"12. A="<<A<<" B="<<B<<" C="<<C<<endl;
}
