#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
int main()
{   
    vce
    vector<int>a(5);
    arr={4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
