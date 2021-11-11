{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].\
#include<bits/stdc++.h>\
using namespace std;\
int main()\
\{\
    int t;\
    cin>>t;\
    while(t--)\
    \{\
        int n;\
        cin>>n;\
        vector<int> arr(n);\
        for(int &i:arr)\
            cin>>i;\
        int flag=0;\
        int i,j,k;\
        for(i=0;i<n-2;i++)\
        \{\
            for(j=i+1;j<n-1;j++)\
            \{    \
                for(k=j+1;k<n;k++)\
                \{\
                    if(arr[i]+arr[j]==arr[k])\
                    \{\
                        flag=1;\
                        break;\
                    \}\
                \}\
                if(flag)\
                    break;\
            \}\
            if(flag)\
                break;\
        \}\
        if(flag)\
            cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;\
        else\
            cout<<"No sequence found."<<endl;\
    \}\
    return 0;\
\}}