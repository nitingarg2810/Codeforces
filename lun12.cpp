#include<stdio.h>
int max(int a,int b)
{
        return a>b?a:b;
}
int Knapsack(int items,int weight[],int value[],int maxWeight)
{
        int dp[items+1][maxWeight+1];
        
        int iter,w;
        for(iter=0;iter<=maxWeight;iter++)
        {
                dp[0][iter]=0;
        }
        
        for(iter=0;iter<=items;iter++)
        {
                dp[iter][0]=0;
        }
        for(iter=1;iter<=items;iter++)
        {
                for(w=0;w<=maxWeight;w++)
                {
                        dp[iter][w] = dp[iter-1][w]; /* If I do not take this item */
                        if(w-weight[iter] >=0)
                        {
                                /* suppose if I take this item */
                                dp[iter][w] = max(dp[iter][w] , dp[iter-1][w-weight[iter]]+value[iter]);
                        }
                }

        }
        return dp[items][maxWeight];
}
int main()
{
        int t, items, maxWeight;
        scanf("%d",&t);
        while(t--)
		{
			scanf("%d",&items);
        scanf("%d",&maxWeight);
		int weight[items+1],value[items+1];
        int iter;
        for(iter=1;iter<=items;iter++)
        {
                scanf("%d%d",&weight[iter],&value[iter]);
		}
        
        printf("%d\n",Knapsack(items,weight,value,maxWeight));
		}
		return 0;
}

