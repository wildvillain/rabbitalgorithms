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

        ilerigeri = (rand()%2);  //Öncelikle tek ve çift ayıran random sayı üretici yapıyoruz bunu da ilerigeri değişkenine atıyoruz.
        if (ilerigeri == 0)
        {
            ilerigeri=-1;  //eğer çift ise çıkan sonuç 0 çıkacağı için tavşan yerinde sabit kalmasın diye ilerigeri değerini -1 yapıyoruz.
        }
        tavsan = tavsan + ilerigeri; 
        // Tavşanın o an bulunduğu konumdan rastgele olarak başka bir konuma 1 adım olmak maksadı ile sıçramasını tasvir etmek için tavşanın konumuna ekleniyor.

        if (tavsan >= 101)
        {
            tavsan=99; // eğer tavşan 100 sınırından geçip rastgele +1 eklenirse geri dönsün diye koyduğum hata engelliyici if kodu
        }
        else if (tavsan <= 0)
        {
            tavsan = 2; //aynısı 0 aşşağısı içinde geçerli. Rastgele -1 gelirse diye koyduğum if komudu. Bu sayede tavşan 1 ile 100 sınırları arasında kalacaktır.
        }
        
        cout<<"Tavsan bu delikte: "<<tavsan<<"\n"; //tavşanın bulunduğu deliği yazdırmak istedim. 
    return 0;
}


int yakalama() {

    // Yakalama algoritması çalışma mantığı tavşan her seferinde sıçramak zorunda ve tek sayıda ise 
    //çift sayıya çift sayıda ise tek sayıya sıçramak zorundadan ortaya çıkmıştır.
    //Eğer biz çift sayıda iken tavşan çift sayıda ise biz ilerledikçe tavşan ile çarpışma imkanımız vardır.
    //Ancak bunun tersi ise biz aynı deliği ikinci kez kontrol eder isek ritmimiz tavşanınki ile uyar ve yakalayabiliriz.
    //Ritim değiştirme bloklarını 2. ve 99. olarak belirledim. Çünkü o blokların 2 kez kontrol edilmesi gerekmektedir.
    //Tavşanın kontrol ettiğimiz sırada son bloğa kaçma ihtimaline karşın bir güvencedir. Eğer o bloklar iki kez kontrol edilmesse
    //yakalanamama ihtimaline sahiptir.

    
    if (tahmin == 2)
    {
        yon = 1; // 2 numaralı kutuyu kontrol ederken ilerleme yönü 1 nolu yön olsun
        kontrol = kontrol + 1; //2 tahminini kaç kez kontrol ettiğimi sayan değişkendir.
    }
    if (tahmin == 99)
    {
        yon = -1; // 99 numaralı kutuyu kontrol ederken ilerleme yönü -1 nolu yön olsun
        kontrol2 = kontrol2 + 1; //99 numaralı kutuyu kaç kez kontrol ettiğimi sayan değişkendir.
    }
    //******************Önemli not*******************
    //
    // Bir değeri iki kez kontrol ettiğimde ritim değişir
    //Bütün yakalama algoritması bunun üzerine kuruludur.
    //Eğer 99 kısmını iki kez kontrol edip dönmeye başladıysa
    //kesin yakalayacaktır.
    
    if (yon == 1 && kontrol == 2) //yon 1 iken iki kez kontrol ettiysen tahmini arttır
    {
        tahmin = tahmin + 1;
    }
    else if (yon == -1 && kontrol2 == 2) //yon -1 iken iki kez kontrol ettiysen tahmini azalt
    {
        tahmin = tahmin - 1;
    }
    cout<<"Tahminin bu :"<<tahmin<<"\n";
    return 0;
    }


