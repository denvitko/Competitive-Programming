#include <iostream>
#include <iomanip>

void solve() {
  //solution of the problem goes here
}

int main() {
  
    #ifndef ONLINE_JUDGE
      clock_t startTime = clock();
    #endif
  
    int T{};
    std::cin >> T;
    for(int t{0}; t < T; t++) {
      solve();
    }
  
    #ifndef ONLINE_JUDGE
      clock_t endTime = clock();
      std::cerr << std::fixed << std::setprecision(10) << "\nRuntime taken: " << (double)(endTime - startTime)/CLOCKS_PER_SEC << std::endl;
    #endif
  
    return 0;
}
