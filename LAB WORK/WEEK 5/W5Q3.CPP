{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list of elements which are common to both. (Time Complexity = O(m+n))\
#include<bits/stdc++.h>\
using namespace std;\
int main()\
\{\
    int n;\
    cin>>n;\
    int a1[n];\
    for(int i=0;i<n;i++)\
        cin>>a1[i];\
    int m;\
    cin>>m;\
    int a2[m];\
    for(int i=0;i<m;i++)\
        cin>>a2[i];\
        \
    int i=0,j=0;\
    sort(a1,a1+n);\
    sort(a2,a2+m);\
    while(i!=n && j!=m)\
    \{\
        if(a1[i]==a2[j])\
        \{\
            cout<<a1[i]<<" ";\
            i++;\
            j++;\
        \}\
        else if(a1[i]<a2[j])\
            i++;\
        else\
            j++;\
    \}\
    return 0;\
\}}