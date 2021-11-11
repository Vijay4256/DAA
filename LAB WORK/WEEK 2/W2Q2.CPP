{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.\
#include<bits/stdc++.h>\
using namespace std;\
int main()\
\{\
    int t;\
    cin>>t;\
    while(t--)\
    \
    \{\
        int n;\
        cin>>n;\
        int arr[n];\
        for(int i=0;i<n;i++)\
            cin>>arr[i];\
        int diff;\
        cin>>diff;\
        int count=0;\
        for(int i=0;i<n-1;i++)\
        \{\
            for(int j=i+1;j<n;j++)\
                if(arr[j]-arr[i]==diff || arr[i]-arr[j]==diff)\
                    count++;\
        \}\
        cout<<count<<endl;\
    \}\
    return 0;\
\}}