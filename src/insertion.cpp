#include "../sorting_deck.hpp"

void sorting_deck::insertion (int vet[], int n){
  int i, j;
  int aux;

  for(j=1; j<n; j++){
  	aux=vet[j];
  	for (i=j-1; i>=0 && vet[i]>aux; i--){
  		vet[i+1] = vet[i];

  	}

  vet[i+1] = aux;
  }
}
