#include <iostream>

using std::cout;
using std::cin;
int  n=0,tavsan,tahmin=2,deneme=0,ilerigeri=0,maxdeneme,i=0,t=-1,z=0;
int main(){
    cout<<"100 bosluklu tavsan bulma oyunu icin tavsanin deligini sen belirle oynuyacagini sec: ";
    cin>>tavsan;
    cout<<"100 bosluklu tavsan bulma oyunu \n";
    srand(time(NULL));

    do
    {

        ilerigeri = (rand() % 2) ;
        if (ilerigeri == 1)
        {
            ilerigeri= -1;
        }
        else if (ilerigeri == 0)
        {
            ilerigeri = 1;
        }
        
        
        tavsan = tavsan + ilerigeri;


        if (tavsan>=101)
        {
            tavsan = 99;
        }
        else if (tavsan<=0)
        {
            tavsan = 2;
        }
        cout<<"Tavsan bu delikte: "<<tavsan<<"\n";

        if (tahmin==2)
        {
            i=1;
            t=t+1;
        }
        else if (tahmin == 99 )
        {
            i=2;
            z=z+1;
        }
        if(i==1 && t==2){
        tahmin = tahmin+1;
        }

        else if (i==2 && z==2)
        {
            tahmin=tahmin-1;
        }
        cout<<"Tahminin bu: "<<tahmin<<"\n";
        deneme=deneme+1;
              

    } while (tavsan != tahmin);

        cout<<"Tavsan "<<tavsan<<" numarali deliginde iken tahminin: "<<tahmin<<"\n";
        cout<<deneme<<". denemde buldun.\n";
        
    return 0;
}



