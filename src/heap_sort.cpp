#include "../sorting_deck.hpp"

#include <utility>

void max_heapify(int vet[], int n, int i){
  int left = (2*i)+1;
  int right = (2*i)+2;
  int largest = i;
  int tmp;

  if( (left<n) && (vet[left] > vet[largest]) )
    largest = left;

  if((right<n) && (vet[right] > vet[largest]) )
    largest = right;

  if(largest != i){
    tmp = vet[i];
    vet[i] = vet[largest];
    vet[largest] = tmp;
    max_heapify(vet, n, largest);
  }

}

void build_max_heap(int vet[], int n){
  for (int i = n/2; i > -1; i--) {
    max_heapify(vet, n, i);
  }
}

void sorting_deck::heap_sort(int vet[], int n){
  build_max_heap(vet, n);
  for (int i = n-1; i >= 0; i--) {
    std::swap(vet[0], vet[i]);
    n--;
    max_heapify(vet, n, 0);
  }
}
