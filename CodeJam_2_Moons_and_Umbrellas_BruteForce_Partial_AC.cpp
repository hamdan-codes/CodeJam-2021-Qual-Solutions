/*
 * Author Chaudhary Hamdan
 * C++ Template for Competitive Programming
 * Github link : https://github.com/hamdan-codes
 */

/*
 * Template available at my Github
 * Repository Link :-
 * https://github.com/hamdan-codes/templates-for-CP/
 */




#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             LONG_LONG_MAX
#define ps(x,y)         fixed<<setprecision(y)<<x
#define endl            '\n'
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin >> x; while(x--)
#define f(i,x,y)        for(int i = x; i < y; i++)



using namespace std;

using namespace __gnu_pbds;
using namespace __gnu_cxx;

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void c_p_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input.txt", "r", stdin);
	freopen("C:\\Users\\KIIT\\output.txt", "w", stdout);
#endif
}
/* ********************* Your Functions Below ********************** */

int mincost = inf;



int cost(string s, int x, int y)
{
	int ans = 0;
	int l = s.length();

	f(i, 0, l - 1)
	{
		if (s[i] == 'C' && s[i + 1] == 'J')
			ans += x;
		if (s[i] == 'J' && s[i + 1] == 'C')
			ans += y;
		if (s[i] == '?' || s[i + 1] == '?')
			ans += 1e6;

	}
	return ans;



}




string calc(string s, int x, int y, int l, int i)
{


	if (i == l)
	{
		return s;
	}


	int cj, cc;
	string ans;

	if (s[i] == '?')
	{
		s[i] = 'C';
		string s1 = calc(s, x, y, l, i + 1);

		s[i] = 'J';
		string s2 = calc(s, x, y, l, i + 1);

		string ret = (cost(s1, x, y) > cost(s2, x, y)) ? s2 : s1;
		return ret;

	}
	else
	{
		return calc(s, x, y, l, i + 1);
	}


}









/* ********************* Your Functions Above ********************** */

int32_t main()
{
	c_p_p();

	/* *************** Your main function Code Below ****************** */


	int tc = 0;
	w(t)
	{
		tc++;


		int x, y, shai = 0, ans = 0;
		string s;

		cin >> x >> y >> s;

		int l = s.length();
		if (s[l - 1] == '?')
			shai = 1;

		s = calc(s, x, y, l, 0);
		//cout << s << endl;

		ans = cost(s, x, y);


		cout << "Case #" << tc << ": " << ans << endl;

	}


















	/* **************** Your main function Code Above ****************** */

	return 0;
}
