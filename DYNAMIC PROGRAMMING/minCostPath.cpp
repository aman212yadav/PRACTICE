// problem link https://www.geeksforgeeks.org/min-cost-path-dp-6/


#include<bits/stdc++.h>
using namespace std;
int getShortestPathCost(int grid[][100],int n,int m)
{
    int costMatrix[n+1][m+1],i,j;
    memset(costMatrix,-1,sizeof(costMatrix));
    costMatrix[1][1]=grid[1][1];
    for(i=2; i<=m; i++)
        costMatrix[1][i]=costMatrix[1][i-1]+grid[1][i];
    for(i=2; i<=m; i++)
        costMatrix[i][1]=costMatrix[i-1][1]+grid[i][1];
    for(i=2; i<=n; i++)
        for(j=2; j<=m; j++)
            costMatrix[i][j]=grid[i][j]+min(costMatrix[i-1][j],min(costMatrix[i][j-1],costMatrix[i-1][j-1]));
           
    return costMatrix[n][m];


}
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int grid[n+1][100];
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>grid[i][j];
    cout<<getShortestPathCost(grid,n,m);

}
