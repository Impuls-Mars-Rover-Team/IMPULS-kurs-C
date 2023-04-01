/*
 * IMPULS kurs C
 * Struktury
 * @gwitkowski2000 2023
 */

/* Struktury pozwalają na grupowanie różnych zmiennych pod jedną zmienną. W odróżnieniu od tablic,
 * zmienne znajdujące się w strukturze nie muszą być tego samego typu.
 * Mając utworzoną strukturę, możemy tworzyć kolejne instancje tej struktury, zawierajace inne dane.
 * 
 * Przykładowo, używając zwykłych zmiennych do opisu osób, potrzebowalibyśmy:
 * char imie[] = "Jan";
 * char nazwisko[] = "Kowalski",
 * int wiek = 20;
 * float wzrost = 1.82;
 * 
 * Chcąc opisać kolejną osobę trzeba by przerobić nazwy zmiennych tak, żeby jednoznacznie mówiły o kogo chodzi, więc:
 * 
 * char osoba1_imie[] = "Jan";
 * char osoba1_nazwisko[] = "Kowalski",
 * int osoba1_wiek = 20;
 * float osoba1_wzrostM = 1.82;
 * 
 * char osoba2_imie[] = "Janusz";
 * char osoba2_nazwisko[] = "Niekowalski",
 * int osoba2_wiek = 27;
 * float osoba2_wzrostM = 1.78;
 * 
 * korzystanie z takich danych może być niewygodne, w takim wypadku z pomocą przychodzą struktury:
 * 
 * deklaracja:
 
 struct osoba{
    char imie[20];
    char nazwisko[20];
    int wiek;
    float wzrostM;
};

struct osoba pracownik1 = {
    .imie = "Jan",
    .nazwisko = "Kowalski",
    .wiek = 20,
    .wzrostM = 1.82,
};

 * dostęp do elementu struktury odbywa się przez podanie nazwy instancji, kropki i zmiennej której chcemy użyć:
   
   pracownik1.wiek = 27;
   printf("%d\r\n", pracownik1.wiek);


 * Aby utworzyć wskaźnik na strukturę, korzystamy ze składni:


  struct nazwaStruktury *nazwaWskaznikaNaStrukture = &nazwaInstancjiStruktury;
  
 * żeby użyć tego wskaźnika, korzystamy ze składni:

  nazwaWskaznikaNaStrukture->nazwaZmiennej;

 */
