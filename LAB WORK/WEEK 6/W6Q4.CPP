{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
\
/* Given a directed graph, design an algorithm and implement it using a program to find whether\
cycle exists in the graph or not.\
*/\
\
#include<bits/stdc++.h>\
#define ll long long int\
#define vi vector<int>\
#define pi pair<int, int>\
#define vvi vector<vector<int>>\
#define rep(i, a, b) for(int i = a; i < b; i++)\
#define rrep(i, b, a) for(int i = b - 1; i >= a; i--)\
\
using namespace std;\
\
vvi adj;\
vi vis;\
\
bool isCycle(int node) \{\
    vis[node] = 1;\
\
    rep(i, 1, adj[node].size()) \{\
        if(adj[node][i]) \{\
            if(vis[i] || isCycle(i)) \{\
                return true;\
            \}\
        \}\
    \}\
    vis[node] = 0;\
    return false;\
\}\
\
int main() \{\
    int n; cin >> n; n++;\
    adj = vvi(n, vi(n, 0));\
    vis = vi(n, 0);\
\
    rep(i, 1, n) \{\
        rep(j, 1, n) \{\
            cin >> adj[i][j];\
        \}\
    \}\
    \
    bool f = false;\
    rep(i, 1, n) \{\
        if(isCycle(i)) \{\
            f = true;\
            break;\
        \}\
    \}\
\
    if(f) \{\
        cout << "Yes Cycle Exists" << endl;\
    \}else \{\
        cout << "No Cycle Exists" << endl;\
    \}\
    return 0;\
\}}