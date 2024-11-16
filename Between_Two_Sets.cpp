#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (static_cast<long long>(a) * b) / gcd(a, b);
}

long long lcm_of_array( vector<int>& arr) {
    long long result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int gcd_of_array( vector<int>& arr) {
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int count_numbers_between( vector<int>& arr1,  vector<int>& arr2) {
    long long lcm_val = lcm_of_array(arr1);
    int gcd_val = gcd_of_array(arr2);

    if (lcm_val > gcd_val) {
        return 0;
    }

    return gcd_val / lcm_val;
}

int main() {
    int n,m;
    cin>>m>>n;
    vector<int> arr1(m); 
    vector<int> arr2(n);
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int result = count_numbers_between(arr1, arr2);
    cout << "The count of numbers between the two arrays is: " << result << endl;

    return 0;
}