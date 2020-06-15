#include<stdio.h>

int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},min,mincost=0,cost[10][10];

/* Function for Minimum Cost Spanning Tree using Prim’s Algorithm */
void primMST(){
visited[1]=1;
printf("\nThe edges of Minimum Cost Spanning Tree are\n");
while(ne<n) {
for(i=1,min=999;i<=n;i++) {
for(j=1;j<=n;j++) {
if(cost[i][j]<min){
if(visited[i]!=0) {
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
}

if(visited[u]==0 || visited[v]==0) {
printf("\nEdge %d:(%d %d) cost:%d",ne++,a,b,min);
mincost+=min;
visited[b]=1;
}
cost[a][b]=cost[b][a]=999;
}

printf("\n\nMinimum cost = %d\n",mincost);
}

int main() {
printf("\nEnter the number of vertices: ");
scanf("%d",&n);

printf("\nEnter the cost adjacency matrix [0 for INFINITE]:\n");

for(i=1;i<=n;i++) {
for(j=1;j<=n;j++) {
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999; //assigning 999 as infinite value
}
}

primMST(); // function call

return 0;
}

