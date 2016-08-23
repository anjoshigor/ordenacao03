#include "../sorting_deck.hpp"

void sorting_deck::selection (int vet[], int n){
  int i, j, min;
  int aux;

    for (i=0; i < n-1; i++){
    	min = i;
    		for(j = i; j<n; j++){
    			if(vet[j]<vet[min]){
    				min=j;
    			}
        }
    		aux = vet[min];
    		vet[min] = vet[i];
    		vet[i] = aux;

    		}

}
