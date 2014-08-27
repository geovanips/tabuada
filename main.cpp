#include <iostream>
using namespace std;

int main()
{
    int n,i,tab[10];
    cout << "###Tabuada####";
    cout << "\n Digite o numero que deseja obter a tabuada:  ";
    cin >> n;

   for (i=1;i<10;i++)
   {
     tab[i]=i*n;
    cout <<"A tabuda de "<<n <<" : "<<i<<" X " << n << " = "<< tab[i] << "\n";
   }
}
