/*
 * IMPULS kurs C 
 * Wskaźniki
 * @gwitkowski2000 2023
 */

/* Wskaźnik to zmienna, która przechowuje adres w pamięci innej zmiennej 
 * Aby zdobyć adres zmiennej używamy operatora wyłuskania / pobrania adresu (reference operator) &
 * np. &zmienna
 * 
 * Aby utworzyć zmienną która jest wskaźnikiem, musimy podać typ na jaki będzie wskazywał wskaźnik
 * Oraz dodać gwiazdkę przed nazwą zmiennej wskaźnikowej, np.
 * 
 * int *wskaznikNaInt = &zmiennaInt;
 * float *wskaznikNaFloat = &zmiennaFloat;
 * double *wskaznikNaDouble = &zmiennaDouble;
 * char *wskaznikNaChar = &zmiennaChar;
 * 
 * Aby wyświetlić wskaźnik przy pomocy funkcji printf lub sprintf, wykorzystujemy znak specjalny %p
 * 
 * Aby zmodyfikować zmienną znajdującą się pod danym wskaźnikiem określonym adresem, używamy składni:
 *   *nazwaWskaźnika = operacjaNaZmiennejPodDanymAdresem();
 * np.:
 *   *wskaznikNaInt = 123;
 * 
 * Gdzie są przydatne wskaźniki (w naszym przypadku)?
 * STM32, STM8 - do zapisu zmiennych i danych w konkretnych sekcjach pamięci - np. SRAM, EEPROM, FLASH
 * 
 *
 * */

