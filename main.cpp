#include <iostream>

using namespace std;

struct Prodotti {
    string codice;
    string nome;
    float prezzo;
    
};

const int dimensionMax=100;

//prototipi
void carica(Prodotti v[], int &n);
void stampa(Prodotti v[], int n);


int main() {
    
    int n;
    Prodotti prod[dimensionMax];
    
    carica(prod, n);
    stampa(prod, n);

    return 0;
}

void carica(Prodotti v[], int &n) {
    
    cout<<"Quanti prodotti vuoi registrare ? : ";
    cin>>n;
    
    for(int i=0; i<n; i++) {
        cout<<endl;
        cout<<"Inserisci il codice del prodotto: ";
        cin>>v[i].codice;
        cout<<"Inserisci il nome del prodotto: ";
        cin>>v[i].nome;
        cout<<"Inserisci il prezzo del prodotto: ";
        cin>>v[i].prezzo;
        cout<<endl;
    }
    
    cout<<"Caricamento completato!"<<endl;
    
}

void stampa(Prodotti v[], int n) {
    
    cout<<endl;
    
    for(int i=0; i<n; i++) {
        cout<<endl;
        cout<<v[i].codice<<endl;
        cout<<v[i].nome<<endl;
        cout<<v[i].prezzo<<endl;
        cout<<endl;
    }
    
    cout<<endl;
    
}
