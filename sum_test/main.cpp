#include <iostream>
#include "sum.h"

using namespace std;

int main(void){
    int n;
    cin >> n;
    int s= sum(n);
    cout << s << endl;
    return 0;
}
