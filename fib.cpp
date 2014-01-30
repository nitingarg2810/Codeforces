#include <iostream> 

using namespace std; 

int fib(int i) { 
if (i < 1) { 
return 0; 
} else if (i == 1) { 
return 0;
}
else if(i == 2 || i == 3){
return 1;
} else { 
return fib(i-1) + fib(i-2) + fib(i-3); 
} 
} 

int main() { 

int t, n; 
cin >> t;

for (int i = 1; i <= t; i++) { 
cin >> n;

cout << fib(n) << endl;
}
return 0;
}
