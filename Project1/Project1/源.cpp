#include<iostream>

using namespace std;
template <typename T1, typename T2>
auto MyMax(T1 x, T2 y)->decltype(x > y ? x : y) {
	return x > y ? x : y;
}
//auto myMymax(T1 x,T1 y)
int main() {
    int a;
    int b;

    cin >> a >> b;
    cout << a + b << endl;
}