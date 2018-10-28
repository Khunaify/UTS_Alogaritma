# UTS_Alogaritma

## Latihan1.cpp [soal1](https://raw.githubusercontent.com/Khunaify/UTS_Alogaritma/master/soal1.png)

**CODE PROGRAM**

```c++
#include <iostream>

using namespace std;

int main()
{
    int A,B,X,Y;	do{
   cout << "Masukkan Nilai A : "  ;
    cin>> A;
    cout << "Masukkan Nilai B : "  ;    cin>> B;
    X = A;	Y = B;    

    } while(X!= Y || X < Y ); { X = X + A;   Y = Y + B;}  cout << <<X <<endl; //Jika False akan mencetak X dan Jika True akan berulang  	return 0;    
}

```

hasilnya :
![soal11](https://raw.githubusercontent.com/Khunaify/UTS_Alogaritma/master/soal11.png)


## latihan2.cpp  [soal2](https://raw.githubusercontent.com/Khunaify/UTS_Alogaritma/master/soal2.png)
  
**CODE PROGRAM**
```c++
#include <iostream>

using namespace std;

int main()
{
    int N,X,T,Batas;
    cout << "Masukkan Nilai N : " ;
    cin>> N;
      Batas = N + 100;
X = 20;	T = N;	while( T <= Batas)	{ T = T + X;	X = X + 10;}	cout << T;}
```

hasilnya :
![soal21](https://raw.githubusercontent.com/Khunaify/UTS_Alogaritma/master/soal21.png)