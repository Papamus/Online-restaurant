#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


void Welcome() {
    cout<<"Witamy w restauracji BESTFOOD! \nAdres restauracji: Mickiewicza 3 Poznan \nZamowienia mozna skladac pon-pt tylko w godzinach 10-18 "<<endl;
    cout<<" "<<endl;
    cout<<"Zamawiasz na miejscu (wpisz 1) czy na dowoz (wpisz 2)? "<<endl;
}

void CheckDay() {
    int day_tracker;
    cout<<"Wpisz nr dnia tygodnia "<<endl;
    cin>>day_tracker;
    if (day_tracker == 6 || day_tracker == 7) {
        cout<<"Restauracja jest zamknieta w weekend i nie przyjmuje zadnych zamowien!"<<endl;
        exit(0);
    }   
    else if (day_tracker < 0 || day_tracker > 7) {
        cout<<"Wpisz poprawna liczbe"<<endl;
    }
    else {
        cout<<"Mozesz zlozyc zamowienie od 10 do 18 tylko w pelnych godzinach"<<endl;
    }
}

void CheckHour() {
    int hour_tracker, minute_tracker;
    cout<<"Podaj godzine na ktora chcesz swoje zamowienie (podaj najpierw godzine a pozniej minuty)"<<endl;
    cin>>hour_tracker;
    cin>>minute_tracker;
    while (hour_tracker<10 || hour_tracker>=18 || minute_tracker<0 || minute_tracker >= 60){
        cout<<"Wpisales niepoprawna godzine, wpisz ja ponownie!"<<endl;
        cin>>hour_tracker;
        cin>>minute_tracker;
    }
    cout<<"Zamowiles jedzenie na godzine: "<<hour_tracker<<":"<<minute_tracker<<endl;
}

void InfoForOrder() {
    string username;
    int table;
    cout<<"Podaj imie i nr stolika (od 1 do 8)"<<endl;
    cin>>username;
    cin>>table;
    while (username.length()<3 || username.length()>20)
    {
        cout<<"Wpisz poprawne imie"<<endl;
        cin>>username;
    }
    while (table<1 || table>8)
    {
        cout<<"Wybierz poprawny numer stolika"<<endl;
        cin>>table;
    }
    cout<<"Twoje dane to:\nImie: "<<username<<" \nNr stolika: "<<table<<endl;
}

int main() {

    int choose_order_form;
    Welcome();
    cin>>choose_order_form;

    if(choose_order_form == 1){
        CheckDay();
        InfoForOrder();
        CheckHour();

        cout<<"Oto nasze menu"<<endl;
        //wyswietlenie menu

        cout<<"Jesli chcesz wyjsc z aplikacji wcisnij q"<<endl;
        //idk

        cout<<"Czy masz ochote na przystawke?"<<endl;
        // if tak wybor przystawek, if nie przejscie do dan glownych (razem z iloscia porcji)
        // po kazdym wyborze aktualizacja ceny

        cout<<"Czy chcesz cos do picia?"<<endl;
        //wybor picia

        cout<<"Za wszystko zaplacisz: x"<<endl;





        cout<<"Jesli chcesz cos usnuac wcisnij r"<<endl;
        cout<<"Czy potwierdzasz swoje zamowienie??"<<endl;
        //wyswietl calosc zamowienia i cene i zapisz w pliku txt

        cout<<"Czas przygotowania twojego zamowienia wynmosi: "<<endl;

        cout<<"Zyczymy smacznego!"<<endl;
        //zamkniecie aplikacji po x sekundach
    }



    // else if(choose_order_form == 2){
    //     cout<<"Podaj imie, adres oraz godzine z zakresu"<<endl;
    //     cin>>username;
    //     cin>>address;
    //     cin>>order_hour;
    //     while (username.length()<3 || username.length()>20)
    //     {
    //         cout<<"Wpisz poprawne imie"<<endl;
    //         cin>>username;
    //     }

    //     while (address.length()<6)
    //     {
    //         cout<<"Twoj adres jest za krotki, podaj nam wszystkie informacje"<<endl;
    //         cin>>address;
    //     }

    //     while (order_hour<10 || order_hour>18)
    //     {
    //         cout<<"Wybierz poprawna godzine zamowienia"<<endl;
    //         cin>>order_hour;
    //     }
    //     cout<<"Oto nasze menu"<<endl;
    //     //wyswitlenie menu

    //     cout<<"Jesli chcesz wyjsc z aplikacji wcisnij q"<<endl;

    //     cout<<"Czy masz ochote na przystawke?"<<endl;
    //     // if tak wybor przystawek, if nie przejscie do dan glownych (razem z iloscia porcji)
    //     // po kazdym wyborze aktualizacja ceny

    //     cout<<"Czy chcesz cos do picia?"<<endl;
    //     //wybor picia

    //     cout<<"Za wszystko zaplacisz: x"<<endl;





    //     cout<<"Jesli chcesz cos usnuac wcisnij r"<<endl;
    //     cout<<"Czy potwierdzasz swoje zamowienie??"<<endl;
    //     //wyswietl calosc zamowienia i cene i zapisz w pliku txt

    //     cout<<"Czas przygotowania twojego zamowienia plus dostawy wynosi: "<<endl;

    //     cout<<"Zyczymy smacznego!"<<endl;
    //     //zamkniecie aplikacji po x sekundach


    // }
    // else{
    //         cout<<"Prosze wybrac poprawna opcje!"<<endl;

        // }
    return 0;
}