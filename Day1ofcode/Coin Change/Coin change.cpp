long int coinchange(long int m,long int a[],long int n)
{
    long int mat[m+1];
    for(long int i=0;i<=m;i++)
    mat[i]=0;
    mat[0]=1;
    for(long int i=0;i<n;i++)
    {
        for(long int j=0;j<=m;j++)
        {
            if(a[i]<=j)
            {
                mat[j]+=mat[j-a[i]];
            }
        }
    }
    //for(int i=0;i<=m;i++)
    //cout<<mat[i]<<" ";
    return mat[m];
}