{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
\
// <------------------------------------- Headers Files ------------------------------------->\
#include<bits/stdc++.h>\
#include <ext/pb_ds/assoc_container.hpp>\
#include <ext/pb_ds/tree_policy.hpp>\
\
// <------------------------------------- Directives ------------------------------------->\
#define ll long long int\
#define vi vector<int>\
#define vl vector<ll>\
#define vll vector<vector<ll>>\
#define vc vector<char>\
#define vvc vector<vector<char>>\
#define pii pair<int, int>\
#define ff first\
#define N 1e5\
#define mod 1000000007\
#define ss second\
#define pb push_back\
#define mp make_pair\
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);\
#define endl "\\n"\
#define tab1 " "\
#define vvi vector<vector<int>>\
#define rep(i, a, b) for(int i = a; i < b; i++)\
#define rrep(i, b, a) for(int i = b - 1; i >= a; i--)\
#define fbo find_by_order\
#define oof order_of_key\
\
using namespace std;\
using namespace __gnu_pbds;\
\
// <------------------------------------- Templates ------------------------------------->\
template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;\
template <class K, class V> using omap = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;\
\
// <------------------------------------- Code ------------------------------------->\
\
int main() \{\
    clock_t begin_69 = clock();\
    fast_io;\
    int n; cin >> n;\
    n++;\
    vvi adj(n, vi(n));\
    rep(i, 1, n) \{\
    	rep(j, 1, n) \{\
    		cin >> adj[i][j];\
    	\}\
    \}\
    int sc; cin >> sc;\
    vi dis(n, N);\
    vi par(n);\
\
    multiset<pii> s;\
    s.insert(mp(0, sc));\
    dis[sc] = 0;\
\
    while(!s.empty()) \{\
    	auto p = *(s.begin());\
    	s.erase(p);\
\
    	rep(i, 1, n) \{\
    		if(adj[p.ss][i]) \{\
	    		if(dis[i] > dis[p.ss] + adj[p.ss][i]) \{\
	    			par[i] = p.ss;\
	    			s.erase(\{dis[i], i\});\
	    			dis[i] = dis[p.ss] + adj[p.ss][i];\
	    			s.insert(\{dis[i], i\});\
	    		\}\
	    	\}\
    	\}\
    	\
    \}\
    vvi ans(n);\
    rep(i, 1, n) \{\
   		ans[i].pb(i);\
   		int tmp = i;\
   		while(tmp != sc) \{\
   			ans[i].pb(par[tmp]);\
   			tmp = par[tmp];\
   		\}\
    \}\
    rep(i, 1, n) \{\
    	for(auto it: ans[i]) \{\
    		cout << it << tab1;\
    	\}cout << ": " << dis[i] << endl;\
    \}\
\
	    \
    #ifndef ONLINE_JUDGE\
          clock_t terminator_69 = clock();\
          cerr << "\\nExecuted In: " << double(terminator_69 - begin_69) / CLOCKS_PER_SEC * 1000 << " ms" << endl;\
    #endif \
    return 0;\
\}}