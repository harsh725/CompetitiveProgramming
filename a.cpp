#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define eb emplace_back
#define all(x) x.begin(), x.end()
#define loop(begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define mod 1000000007
#define bits(x) __builtin_popcountll(x);
#define digits(a, x) a = floor(log10(x)) + 1
#define fact(x) (ll) round(tgamma(x + 1));
#define ss second
#define ff first
#define debug(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }

void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

template <typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1)
{
    if (start < 0)
        start = 0;
    if (end < 0)
        end = int(v.size());

    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}
ll mul(ll a, ll b, ll m)
{
    return (((a % m) * (b % m)) % m);
}

ll power(ll x, ll y);
bool ispower2(ll n) { return n && (!(n & (n - 1))); };

bool cmp(pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b)
{

    return a.ff > b.ff;
}

void solve()
{

    string s;
    cin >> s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1, z = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << z++ << ": ";
        solve();
    }

    return 0;
}

ll power(ll x, ll y)
{

    ll res = 1; // Initialize result

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // n must be even now
        y = y >> 1; // y = y/2
        x = x * x;  // Change x to x^2
    }
    return res;
}