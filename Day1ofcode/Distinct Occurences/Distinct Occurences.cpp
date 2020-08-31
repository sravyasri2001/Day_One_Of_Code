int subsequenceCount(string S, string T)
{
    long int m=S.length();
    int n=T.length();
  int dp[n+1][m+1];
  for(int i=0;i<=m;i++)
  dp[0][i]=1;
  for(int i=1;i<=n;i++)
  dp[i][0]=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          if(T[i-1]==S[j-1])
          dp[i][j]=(dp[i-1][j-1]+dp[i][j-1])%1000000007;
          else
          dp[i][j]=(dp[i][j-1])%(1000000007);
      }
  }
  return (dp[n][m])%1000000007;
}
 