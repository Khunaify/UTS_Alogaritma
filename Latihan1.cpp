#include <iostream>

using namespace std;
int main()
{
 int A,B,X,Y;
 do{
 cout << "Masukkan Nilai A : "  ;
 cin >> A ;
 cout << "Masukkan Nilai B : "  ;
 cin >> B ;
 X = A;
 Y = B;
 } while(X!= Y || X < Y );
{ X = X + A;
  Y = Y + B;
}
cout<<X <<endl; //Jika False akan mencetak X dan Jika True akan berulang
return 0;
}

