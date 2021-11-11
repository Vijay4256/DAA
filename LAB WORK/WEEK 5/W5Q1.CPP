{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
//Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)\
\
#include<iostream>\
using namespace std;\
int main()\
\{\
    int t;\
    cin>>t;\
    while(t--)\
    \{\
        int n;\
        cin>>n;\
        char ch[n];\
        for(int i=0;i<n;i++)\
            cin>>ch[i];\
            \
        int count[26]=\{0\};\
        for(int i=0;i<n;i++)\
            count[(int)ch[i]-97]+=1;\
        int max=1;\
        char c='a';\
        for(int i=0;i<26;i++)\
        \{\
            if(max<count[i])\
            \{\
                max=count[i];\
                c=i+97;\
            \}\
        \}\
        if(max>1)\
            cout<<c<<" - "<<max;\
        else\
            cout<<"No Duplicates Present";\
        cout<<endl;\
    \}\
    return 0;\
\}}