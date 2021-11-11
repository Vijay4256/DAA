{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww28600\viewh18000\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 //Linear Search\
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
        int key,i;\
        cin>>key;\
        for(i=0;i<n;i++)\
        \{\
            if(arr[i]==key)\
                break;\
        \}\
        if(i==n)\
            cout<<"Not Present "<<n<<endl;\
        else\
            cout<<"Present "<<i+1<<endl;\
    \}\
    return 0;\
\}}