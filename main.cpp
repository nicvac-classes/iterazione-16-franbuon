#include <iostream>
using namespace std;

int main() {
    float N, num, max;
    int i;
    cout<<"Quanti sono i numeri?"<<endl;
    cin>>N;
    i=1;
    max=0;
    while(i<=N)
    {
        cout<<"Inserisci un numero"<<endl;
        cin>>num;
        if(num>max)
        {
            max=num;
        }
        i=i+1;
    }
    cout<<"Il numero massimo tra i numeri è "<<max;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
