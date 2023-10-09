#include <iostream>

using std::cout;
using std::cin;
int sicrama();
int yakalama();

int tavsan, tahmin=2, yon=0 ,ilerigeri,kontrol=0,kontrol2=0,deneme=0;

int main(){
    cout<<"100 bosluklu tavsan bulma oyunu icin tavsanin bulunacagi deligi sec:";
    cin>>tavsan;
    cout<<"\nTavsan bulma oyunu: \n";

    do
    {
        sicrama();
        yakalama();
        deneme = deneme+1;
    } while (tahmin != tavsan);
    
    cout<<"Tavsan "<<tavsan<<" deliginde iken tahminin: "<<tahmin;
    cout<<"\n"<<deneme<<". denemede yakaladin";
    
    return 0;
}


int sicrama(){

        ilerigeri = (rand()%2);
        if (ilerigeri == 0)
        {
            ilerigeri=-1;
        }
        tavsan = tavsan + ilerigeri;

        if (tavsan >= 101)
        {
            tavsan=99;
        }
        else if (tavsan <= 0)
        {
            tavsan = 2;
        }
        
        cout<<"Tavsan bu delikte: "<<tavsan<<"\n";
    return 0;
}


int yakalama() {

    if (tahmin == 99)
    {
        yon = 1;
        kontrol2 = kontrol2 + 1;
    }
    if (tahmin == 2)
    {
        yon = 0;
        kontrol = kontrol + 1;
    }

    

    if (yon == 0 && kontrol == 2)
    {
        tahmin = tahmin + 1;
    }
    else if (yon==1 && kontrol2 == 2)
    {
        tahmin = tahmin - 1;
    }
    cout<<"Tahminin bu :"<<tahmin<<"\n";
    return 0;
    }


