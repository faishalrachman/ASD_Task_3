#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;


/**
* Type stuff <
*   ID 	  : integer
*   ..... : .....
*   ..... : .....
* >
*
* Type infotype : stuff
* Type address  : pointer to ElmList
*
* Type ElmList <
*	info : infotype
*	next : address
* >
*
* Type List : < First : address >
*
**/


struct stuff{
	int id;
    //------------- your code here -----------
    string nama;
    string nim;
    string kelas;
    string transprofession;


    //----------------------------------------
};

typedef stuff infotype;
typedef struct elmlist *address;

struct elmlist{
    //------------- your code here -----------
    infotype info;
    address next;
    //----------------------------------------
};

struct List{
    //------------- your code here -----------
    address first;

    //----------------------------------------
};


void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
address findElm(List L, infotype x);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);
void insertAfter(address Prec, address P);
void deleteAfter(address Prec, address &P);
infotype isiInfotype();


#endif // LIST_H_INCLUDED
