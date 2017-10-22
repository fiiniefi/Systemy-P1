# Systemy-P1
Wielowątkowy "Hello World!"

Napisz program w języku C lub C++ uruchamiający dwa lub więcej wątków 
potomnych. Z każdego wątku potomnego wypisz dowolny (różny dla różnych 
wątków) napis na standardowe wyjście i zakończ wątek. Z wątku-rodzica 
wypisz dowolny napis (różny od napisów wypisywanych w wątkach potomnych) 
po zakończeniu wykonania wszystkich wątków potomnych i zakończ wątek. 
Wszystkie wypisywane napisy powinny być zakończone znakiem nowej linii 
'\n' lub po wypisaniu każdego napisu należy wyczyścić strumień 
(cout.flush()).

Ustalenia techniczne:
1. Program powinien mieć jeden plik źródłowy o nazwie main.c lub main.cpp
2. Program powinien być obsługiwany z poziomu polecenia make. 
Uruchomienie polecenia 'make' powinno służyć do kompilacji pod warunkiem 
zmian w pliku main.c(pp). Uruchomienie polecenia 'make run' powinno 
służyć do uruchomienia programu.
3. Program powinien być napisany w C lub C++ z użyciem bibilioteki 
pthreads (podpowiedź: gcc -pthread)
4. Program powinien uruchamiać się na platformie Linux.
5. Repozytorium powinno zawierać plik .gitignore, za pomocą którego 
unikniesz umieszczania w repozytorium pliku binarnego.
6. Instrukcja kompilacji powinna zawierać flagi: -Wall, -Werror
7. Liczba commitów powinna być nie mniejsza niż 3.
