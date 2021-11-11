{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
// jump search\
#include<bits/stdc++.h>\
using namespace std;\
\
int jumpSearch(int *a, int n, int key)\{\
    int i=0,j=2;\
    int comp=0;\
    while(comp++ && a[j]<=key && j<n)\{\
        if(a[j]==key)\{\
            cout << "Present ";\
            return j;\
        \}\
        i=j;\
        j*=2;\
        if(j>=n)\{\
            j=n-1;\
        \}\
    \}\
\
    for(int k=i; k<=j; k++,comp++)\{\
        if(a[k]==key)\{\
            cout << "Present ";\
            return j;\
        \}  \
    \}\
    cout << "Not Present ";\
    return comp;\
\}\
int main()\{\
    int t;\
    cin >> t;\
\
    while(t--)\{\
        int n;\
        cin >> n;\
\
        int *a=new int[n];\
        for(int i=0;i<n;i++)\{\
            cin >> a[i];\
        \}\
\
        int key;\
        cin >> key;\
\
        cout << jumpSearch(a,n,key) << endl;\
    \}\
    return 0;\
\}}