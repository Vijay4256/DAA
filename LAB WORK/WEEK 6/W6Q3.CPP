{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
\
/* Given a graph, design an algorithm and implement it using a program to find if a graph is\
bipartite or not. (Hint: use BFS)\
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
vi col;\
\
bool isBipartite(int node, int c = 0) \{\
    if(col[node] != -1 && col[node] != c) \{\
        return false;\
    \}\
    if(col[node] == c) \{\
        return true;\
    \}\
    col[node] = c;\
\
    rep(i, 1, adj[node].size()) \{\
        if(adj[node][i]) \{\
            if(!isBipartite(i, (c xor 1))) \{\
                return false;\
            \}\
        \}\
    \}\
    return true;\
\}\
\
int main() \{\
    int n; cin >> n; n++;\
    adj = vvi(n, vi(n, 0));\
    col = vi(n, -1);\
\
    rep(i, 1, n) \{\
        rep(j, 1, n) \{\
            cin >> adj[i][j];\
        \}\
    \}\
\
    bool f = true;\
    rep(i, 1, n) \{\
        if(!isBipartite(i)) \{\
            f = false;\
            break;\
        \}\
    \}\
\
    if(f) \{\
        cout << "Yes Bipartite" << endl;\
    \}else \{\
        cout << "Not Bipartite" << endl;\
    \}\
    \
    return 0;\
\}}