#include <iostream>
#include <chrono>
#include "sorting_deck.hpp"

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;

  int vector[n];

    for (int i = 0; i < n; i++) {
      int v;
      std::cin >> v;
      vector[i]=v;
    }


  std::chrono::high_resolution_clock::time_point initTime = std::chrono::high_resolution_clock::now();
  sorting_deck::quicksort(vector, n);
  std::chrono::high_resolution_clock::time_point finalTime = std::chrono::high_resolution_clock::now();

  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(finalTime - initTime).count() << std::endl;
  return 0;
}
