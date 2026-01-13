#include <stdio.h>

int main() {
	int a[10][10],b[10][10],i,j,n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			{scanf("%d", &a[i][j]);
		}
		}
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			{b[j][i]=a[i][j];
		}
		}
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			{printf("%d ",b[i][j]);
			}
		printf("\n");
		}
	return 0;
}
