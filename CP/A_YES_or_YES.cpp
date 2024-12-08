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

// Output macros
#define yes cout << "YES\n";
#define no cout << "NO\n";

// Custom endl macro for faster output
#define endl '\n'

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

// Specialization for 2D vector
template <typename T>
void _print(const vector<vector<T>>& v) {
    cerr << "[\n";
    for (const auto& row : v) {
        _print(row);
        cerr << "\n";
    }
    cerr << "]";
}

// Specialization for C-style array
template <typename T, size_t N>
void _print(const T (&arr)[N]) {
    cerr << "[ ";
    for (size_t i = 0; i < N; ++i) {
        _print(arr[i]);
        cerr << " ";
    }
    cerr << "]";
}

// Specialization for 2D C-style array
template <typename T, size_t R, size_t C>
void _print(const T (&arr)[R][C]) {
    cerr << "[\n";
    for (size_t i = 0; i < R; ++i) {
        cerr << "  [ ";
        for (size_t j = 0; j < C; ++j) {
            _print(arr[i][j]);
            cerr << " ";
        }
        cerr << "]\n";
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

// Specialization for unordered_set
template <typename T>
void _print(const unordered_set<T>& us) {
    cerr << "{ ";
    for (const T& elem : us) {
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

void solve(){
    string s;
    cin>>s;
    string c=string(1,tolower(s[0]))+string(1,tolower(s[1]))+string(1,tolower(s[2]));
    
    if(c=="yes"){yes;}
    else no;
}

// Main function
int main() {
    FAST_IO;
    int t;
    cin>>t;

    while(t--)solve();

    return 0;
}