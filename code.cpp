#include<bits/stdc++.h>
using namespace std;
#define ll long long


void print(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{

       cout<<"s1"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s1[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"s1p"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s1p[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"s2"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s2[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"s2p"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s2p[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"s3"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s3[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"s3p"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<s3p[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<endl;



}

void left(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{

  vector<vector<char>>temp;
    vector<vector<char>>temp1;

    //move upright
    
    temp=s1;

    s1=s2p;
 

    temp1= s2;

    
    s2=temp;
   
    
    temp=s1p;

    s1p=temp1;
  

    temp1= s2p;

    s2p=temp;

}

void right(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    left(s1, s1p, s2, s2p, s3, s3p);
    left(s1, s1p, s2, s2p, s3, s3p);
left(s1, s1p, s2, s2p, s3, s3p);
}

void up(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    vector<vector<char>>temp;
    vector<vector<char>>temp1;

    //move upright
    
    temp=s1;

    s1=s3p;
   

    temp1=s3;

    
    s3=temp;
    s3=temp;
    
    temp=s1p;

    s1p=temp1;
   

    temp1=s3p;

    s3p=temp;



}

void down(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    up(s1, s1p, s2, s2p, s3, s3p);
    up(s1, s1p, s2, s2p, s3, s3p);
    up(s1, s1p, s2, s2p, s3, s3p);
}

void upright(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    vector<char>temp={' ',' '};
     vector<char>temp1={' ',' '};

    //move upright
    
    temp={s1[0][1],s1[1][1]};

    s1[0][1]=s3p[0][1];
    s1[1][1]=s3p[1][1];

    temp1= {s3[0][1],s3[1][1]};

    
    s3[0][1]=temp[0];
    s3[1][1]=temp[1];
    
    temp={s1p[0][1],s1p[1][1]};

    s1p[0][1]=temp1[0];
    s1p[1][1]=temp1[1];

    temp1= {s3p[0][1],s3p[1][1]};

    s3p[0][1]=temp[0];
    s3p[1][1]=temp[1];


}

void upleft(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    vector<char>temp={' ',' '};
     vector<char>temp1={' ',' '};

    //move upright
    
    temp={s1[0][0],s1[1][0]};

    s1[0][0]=s3p[0][0];
    s1[1][0]=s3p[1][0];

    temp1= {s3[0][0],s3[1][0]};

    
    s3[0][0]=temp[0];
    s3[1][0]=temp[1];
    
    temp={s1p[0][0],s1p[1][0]};

    s1p[0][0]=temp1[0];
    s1p[1][0]=temp1[1];

    temp1= {s3p[0][0],s3p[1][0]};

    s3p[0][0]=temp[0];
    s3p[1][0]=temp[1];


}

void downright(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    upright(s1, s1p, s2, s2p, s3, s3p);
    upright(s1, s1p, s2, s2p, s3, s3p);
    upright(s1, s1p, s2, s2p, s3, s3p);

}

void downleft(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    upleft(s1, s1p, s2, s2p, s3, s3p);
    upleft(s1, s1p, s2, s2p, s3, s3p);
    upleft(s1, s1p, s2, s2p, s3, s3p);

}


void leftup(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    vector<char>temp={' ',' '};
     vector<char>temp1={' ',' '};

    //move upright
    
    temp={s1[0][0],s1[0][1]};

    s1[0][0]=s2p[0][0];
    s1[0][1]=s2p[0][1];

    temp1= {s2[0][0],s2[0][1]};

    
    s2[0][0]=temp[0];
    s2[0][1]=temp[1];
    
    temp={s1p[0][0],s1p[0][1]};

    s1p[0][0]=temp1[0];
    s1p[0][1]=temp1[1];

    temp1= {s2p[0][0],s2p[0][1]};

    s2p[0][0]=temp[0];
    s2p[0][1]=temp[1];


}

void leftdown(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    vector<char>temp={' ',' '};
     vector<char>temp1={' ',' '};

    //move upright
    
    temp={s1[1][0],s1[1][1]};

    s1[1][0]=s2p[1][0];
    s1[1][1]=s2p[1][1];

    temp1= {s2[1][0],s2[1][1]};

    
    s2[1][0]=temp[0];
    s2[1][1]=temp[1];
    
    temp={s1p[1][0],s1p[1][1]};

    s1p[1][0]=temp1[0];
    s1p[1][1]=temp1[1];

    temp1= {s2p[1][0],s2p[1][1]};

    s2p[1][0]=temp[0];
    s2p[1][1]=temp[1];


}

void rightup(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    leftup(s1, s1p, s2, s2p, s3, s3p);
    leftup(s1, s1p, s2, s2p, s3, s3p);
    leftup(s1, s1p, s2, s2p, s3, s3p);

}


void rightdown(vector<vector<char>>&s1,vector<vector<char>>&s1p,
vector<vector<char>>&s2,
vector<vector<char>>&s2p,
vector<vector<char>>&s3,
vector<vector<char>>&s3p)
{
    leftdown(s1, s1p, s2, s2p, s3, s3p);
    leftdown(s1, s1p, s2, s2p, s3, s3p);
    leftdown(s1, s1p, s2, s2p, s3, s3p);

}

void solve()
{
    vector<vector<char>>s1={{'W','W'},{'W','W'}};
    vector<vector<char>>s1p={{'G','G'},{'G','G'}};
    vector<vector<char>>s2={{'R','R'},{'R','R'}};
    vector<vector<char>>s2p={{'B','B'},{'B','B'}};
    vector<vector<char>>s3={{'O','O'},{'O','O'}};
    vector<vector<char>>s3p={{'Y','Y'},{'Y','Y'}};


    upright(s1, s1p, s2, s2p, s3, s3p);
   
    leftdown(s1, s1p, s2, s2p, s3, s3p);
    leftdown(s1, s1p, s2, s2p, s3, s3p);
print(s1, s1p, s2, s2p, s3, s3p);

up(s1, s1p, s2, s2p, s3, s3p);
left(s1, s1p, s2, s2p, s3, s3p);


 print(s1, s1p, s2, s2p, s3, s3p);


 


}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    
}
