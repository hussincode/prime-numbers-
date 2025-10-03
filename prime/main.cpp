#include <iostream>

using namespace std;

bool is_prime (int n){

    if(n <= 1) return false;
    if(n == 2) return true;
    if (n % 2 == 0 && n > 2) return false;

    for(int i = 3; i * i <= n; i++){

        if(n % i == 0) return false;

    }

    return true;

}

int main()
{
    int n;
    cin >> n;

    if (is_prime(n)){


        cout << "is prime";

    }

    if(!is_prime(n)){

        cout << "is not prime";

    }
}
