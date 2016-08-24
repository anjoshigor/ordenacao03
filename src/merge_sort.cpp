#include "../sorting_deck.hpp"

void merge(int vet[], int left[], int n1, int right[], int n2){

  int i=0, j=0, k=0;

  while(i<n1 && j< n2) {
		if(left[i]  < right[j])
      vet[k++] = left[i++];
    else
      vet[k++] = right[j++];

  }

	while(i < n1)
    vet[k++] = left[i++];
  while(j < n2)
    vet[k++] = right[j++];

  }

void sorting_deck::merge_sort(int vet[], int n) {

  if(n<2) return; //base

  int mid = n/2;

  int* left = new int[mid];
  int* right = new int[n-mid];

  /**Dividing the sub-arrays**/
  for (int i = 0; i < mid; i++)
    left[i]=vet[i];


  for (int i = mid; i < n; i++)
    right[i-mid]=vet[i];
  /**Dividing the sub-arrays**/


    merge_sort(left,mid); //the left sub-array
    merge_sort(right,n-mid); //the right sub-array
    merge(vet,left,mid,right,n-mid);

    delete [] left;
    delete [] right;
}
