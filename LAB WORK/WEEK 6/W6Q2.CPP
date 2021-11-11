{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
\
/*Given a (directed/undirected) graph, design an algorithm and implement it using a program to\
find if a path exists between two given vertices or not. (Hint: use DFS)*/\
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
bool isPath(int s, int d) \{\
    if(s == d) \{\
        return true;\
    \}\
    vis[s] = 1;\
    rep(i, 1, adj[s].size()) \{\
        if(adj[s][i]) \{\
            if(!vis[i]) \{\
                if(isPath(i, d)) \{\
                    return true;\
                \}\
            \}\
        \}\
    \}\
    return false;\
\}\
\
int main() \{\
    int n; cin >> n;\
    n++;\
    adj = vvi(n, vi(n, 0));\
    vis = vi(n, 0);\
    rep(i, 1, n) \{\
        rep(j, 1, n) \{\
            cin >> adj[i][j];\
        \}\
    \}\
    int s, d;\
    cin >> s >> d;\
    if(isPath(s, d)) \{\
        cout << "Yes Path Exists" << endl;\
    \}else \{\
        cout << "No Such Path Exists" << endl;\
    \}\
\
    return 0;\
\}}