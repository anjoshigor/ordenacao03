#include "../sorting_deck.hpp"

#include <utility>

int partition(int vet[], int p, int r){
  int x = vet[r];
  int i = p;

  for (int j = p; j < r; j++) {
    if(vet[j] <= x){
      std::swap(vet[i], vet[j]);
      i++;
    }
  }

  std::swap(vet[i], vet[r]);
  return i;
}

void sort(int vet[], int p, int r){
  int pivot;
  if(p<r){
    pivot = partition(vet, p, r);
    sort(vet, p, pivot-1);
    sort(vet, pivot+1, r);
  }
}

void sorting_deck::quicksort(int vet[], int n){
  sort(vet, 0, n-1);
}
