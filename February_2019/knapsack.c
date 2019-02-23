#include <stdio.h>

int main()
{
    int i,k = 0,no_of_objects;
    float capacity;
    float final_profit = 0.0;

    printf("enter the no of objects:\n");
    scanf("%d", &no_of_objects);

    printf("enter the capacity of knapsack:\n");
    scanf("%f", &capacity);

    float profit[no_of_objects], weight[no_of_objects], profit_per_weight[no_of_objects], solution[no_of_objects];

    printf("enter the weight of each object\n");
    for(i=0;i<no_of_objects;i++)
    {
        scanf("%f", &weight[i]);
    }

    printf("enter the profit for each object\n");
    for(i=0;i<no_of_objects;i++)
    {
        scanf("%f", &profit[i]);
    }

    for(i=0;i<no_of_objects;i++)
    {
        profit_per_weight[i] = (float)profit[i] / (float)weight[i];
    }

    printf("prpfit per weight is as follows");
    for(i=0;i<no_of_objects;i++)
    {
        printf(" %f ", profit_per_weight[i]);
    }

    for(i=0;i<no_of_objects;i++)
    {
            if(weight[i]>capacity)
            {
                    capacity = 0;
                    solution[i] = (float)capacity/(float)weight[i];
                    printf("parial solution is :%f",solution[i]);
                    k++;
                    final_profit += solution[i]*profit_per_weight[i];
                    break;
            }
            else
            {
                    capacity -= weight[i];
                    solution[i] = 1.0;
                    k++;
                    final_profit += profit[i];  
            }
    }

    printf("final profit is %f", final_profit);
    printf("the solution vector is as follows");
    for(i=0;i<k;i++)
    {
            printf("%f ", solution[i]);
    }
    printf("capacity is %f", capacity);
    return 0;
}