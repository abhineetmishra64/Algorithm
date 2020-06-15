#include<stdio.h>

int m, n, c=0, count=0, adjMatrix[10][10], x[10];

void nextValue(int k);
void GraphColoring(int k);

int main(){

int i, j, temp;

printf("\nEnter the number of nodes: " );
scanf("%d", &n);

printf("\nEnter Adjacency Matrix:\n");
for(i=1; i<=n; i++) {
for(j=1; j<=n; j++) {
scanf("%d", &adjMatrix[i][j]);
}
}

printf("\nPossible Solutions are\n");
for(m=1; m<=n; m++) {
if(c==1) {
break;
}
GraphColoring(1);
}

/* m gets incremented when the condition becomes false so it is decremented by 1 */
printf("\nThe chromatic number is %d", m-1);

printf("\nThe total number of solutions is %d\n", count);
return 0;
}

void GraphColoring(int k){
int i;

while(1) {
nextValue(k);
if(x[k]==0) {
return;
}

if(k==n) {
c=1;
for(i=1;i<=n;i++) {
printf("%4d", x[i]);
}
count++;
printf("\n");
}
else
GraphColoring(k+1);
}
}

/*function checks the colored graph is possible or not*/
void nextValue(int k) {
int j;
while(1) {
x[k]=(x[k]+1) % (m+1);
if(x[k]==0)
return;

for(j=1;j<=n;j++){
if(adjMatrix[k][j]==1 && x[k]==x[j])
break;
}

if(j==(n+1))
return;
}
}
