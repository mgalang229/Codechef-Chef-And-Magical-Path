#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	long long n, m;
	cin >> n >> m;
	// if the dimension of the grid is either (1 x m) or (n x 1), where n and m are greater
	// than 3, then the distance of the starting cell from the 
	// ending cell will be greater than 1 so that's why it's not valid
	
	// if the dimension of the grid wherein both rows and columns are odd, then it's not valid
	
	// otherwise, a magical path can always be formed (Hamiltonian Path)
	if((n == 1 && m > 3) || (m == 1 && n > 3)) {
		cout << "No";
	} else if(n % 2 == 1 && m % 2 == 1) {
		cout << "No";
	} else {
		cout << "Yes";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

