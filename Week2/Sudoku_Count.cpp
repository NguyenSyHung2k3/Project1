#include <bits/stdc++.h>
#define TASK "new"
#define LL long long
#define fo(i,a,b) for(int i = a;i <= b;i++)
using   namespace   std;
const int mod = 1e6 + 3;
int a[15][15],row[15][15],col[15][15],square[15][15];
int ans = 0;
void solve(int i,int j)
{
    if(a[i][j] == 0)
    {
        fo(t,1,9)
        {
            if(!row[i][t] && !col[j][t] && !square[i/3*3+j/3][t])
            {
                a[i][j] = t;
                row[i][t] = col[j][t] = square[i/3*3+j/3][t] = 1;
                if(i == 8 && j == 8)
                    ans++;
                else
                    solve(i + (j == 8), (j + 1) % 9);
                a[i][j] = 0;
                row[i][t] = col[j][t] = square[i/3*3+j/3][t] = 0;
            }
        }
    }
    else
    {
        if(i == 8 && j == 8)
            ans++;
        else
            solve(i + (j == 8), (j + 1) % 9);
    }
}
int main(){
    fo(i,0,8)
    {
        fo(j,0,8)
        {
            cin>>a[i][j];
            row[i][a[i][j]] = 1;
            col[j][a[i][j]] = 1;
            square[i/3*3+j/3][a[i][j]] = 1;
        }
    }
    solve(0,0);
    cout<<ans;
}
