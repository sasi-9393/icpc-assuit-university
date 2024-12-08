#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Modular Arithmetic Constant
const int MOD = 1000000007;

// Mathematical Constant Pi
const double PI = 3.141592653589793;

#define ll long long

// Debugging macros
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

// Base Template for Debugging
template <typename T>
void _print(const T& value) {
    cerr << value;  // Default print for anything that's not a container
}

// Specialization for pair
template <typename T, typename V>
void _print(const pair<T, V>& p) {
    cerr << "{ ";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << " }";
}

// Specialization for vector
template <typename T>
void _print(const vector<T>& v) {
    cerr << "[ ";
    for (const T& elem : v) {
        _print(elem);
        cerr << " ";
    }
    cerr << "]";
}

// Specialization for set
template <typename T>
void _print(const set<T>& s) {
    cerr << "{ ";
    for (const T& elem : s) {
        _print(elem);
        cerr << " ";
    }
    cerr << "}";
}

// Specialization for map
template <typename K, typename V>
void _print(const map<K, V>& m) {
    cerr << "{ ";
    for (const auto& pair : m) {
        _print(pair);
        cerr << " ";
    }
    cerr << "}";
}

// Specialization for unordered_map
template <typename K, typename V>
void _print(const unordered_map<K, V>& m) {
    cerr << "{ ";
    for (const auto& pair : m) {
        _print(pair);
        cerr << " ";
    }
    cerr << "}";
}

// Main function
int main() {
    FAST_IO;

    // Write your code here
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;++i)cin>>arr[i];
    int ans=INT_MAX;int index=0;

    for(int i=0;i<n;++i){
        if(ans>arr[i]){
            ans=arr[i];
            index=i;
        }
        
    }
    cout<<ans<<" "<<index+1;

    return 0;
}