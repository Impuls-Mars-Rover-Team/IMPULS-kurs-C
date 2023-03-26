/*
 * IMPULS kurs C 
 * Struktury
 * @gwitkowski2000 2023
 */


/* Struktury służą do organizacji powiązanych ze sobą zmiennych różnych typów wewnątrz 1 "obiektu". 
 * Przykładowo, chcąc opisac osobę o danym imieniu, nazwisku, wieku, wzroście i np. ulubionej literze
 * Musielibyśmy utworzyć 5 zmiennych typu:
 * personName, personSurname, personAge, personHeight, personFavouriteLetter.
 * 
 * Chcąc utworzyć kilka osób, musimy stworzyć kilka * 5 zmiennych wg powyższego schematu, dzięki czemu
 * łatwo się pogubić (np. przypisać innej osobie dane innej osoby, lub użyć w funkcji złych danych)
 * 
 * Korzystając ze struktur, za każdym razem twozymy obiekt o danej nazwie, zawierający w sobie już zmienne
 * dotyczące imienia, nazwiska, wieku itp.
 * 
 * Składnia:
 * Deklaracja struktury:
 * struct nazwaStruktury{
 *   typZmiennej1 nazwaZmiennej1;
 *   typZmiennej2 nazwaZmiennej2;
 *   typZmiennej3 nazwaZmiennej3;
 *   typZmiennej4 nazwaZmiennej4;
 * };
 * 
 * Utworzenie nowej instancji utworzonej struktury:
 * struct nazwaStrukury nazwaInstancjiStruktury;
 * np. struct Person personXY;
 * 
 * dostęp (edycja zmiennych, odczyt) poszczególnych elementów struuktury można uzyskać, pisząc:
 * nazwaInstancjiStruktury.nazwaZmiennej
 * 
 * np. 
 * nazwaInstancjiStruktury.nazwaZmiennej = 87;
 * printf("%d\r\n", nazwaInstancjiStruktury.nazwaZmiennej);
 * 
 * */

#include <stdio.h>

struct Person{
    char name[20];
    char surname[20];
    int age;
    double height;
    char favouriteLetter;
};

struct Person GWitkowski = {
    .name = "Grzegorz",
    .surname = "Witkowski",
    .age = 23,
    .height = 1.82,
    .favouriteLetter = 'a'
};




int main(void){

    struct Person personXY;
    personXY.age = 45;
    

    printf("%s\r\n", GWitkowski.name);
    printf("%s\r\n", GWitkowski.surname);
    printf("%d\r\n", GWitkowski.age);
    printf("%.2lf\r\n", GWitkowski.height);
    printf("%c\r\n", GWitkowski.favouriteLetter);

    printf("%d\r\n", personXY.age);
    personXY.age = 78;
    printf("%d\r\n", personXY.age);

}