#include <iostream>

 

struct nodo {
    int valor;
    struct nodo* siguiente;
};

 

typedef struct nodo* lista;

 

void insertarInicio(lista& anterior, int guardar) {
    lista nuevo;
    nuevo = new struct nodo;
    nuevo->valor = guardar;
    nuevo->siguiente = anterior;
    anterior = nuevo;
}

 

void mostrarLista(lista actual) {
    while (actual != nullptr) {
        std::cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

 

int main() {
    lista miLista = nullptr;

 

    insertarInicio(miLista, 82);
    insertarInicio(miLista, 10);
    insertarInicio(miLista, 38);

 

    std::cout << "Values in the list: ";
    mostrarLista(miLista);

 

    return 0;
}
	