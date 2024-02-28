#include <stdio.h>
#include <math.h>

int main()
{
    // Future Work: Add weighting to each half of the split
    float investment_amount;
    int shares_co_1, shares_co_2;
    float purchase_sum, execute_sum;
    float company_a_share_price; //65.4
    float company_b_share_price; //45.66
    
    printf("Enter the amount of money to invest: ");
    scanf("%f", &investment_amount);
    printf("Enter the share price for Company A: ");
    scanf("%f", &company_a_share_price);
	// Check for zero or negative input
	// TODO - control for non-numeric input
	while(company_a_share_price<0.01){
		printf("Please enter a share price greater than $0.01 for Company A: ");
		scanf("%f", &company_a_share_price);
	}
    printf("Enter the share price for Company B: ");
    scanf("%f", &company_b_share_price);
	// Check for zero or negative input
	// TODO - control for non-numeric input
	while(company_b_share_price<0.01){
		printf("Please enter a share price greater than $0.01 for Company B: ");
		scanf("%f", &company_a_share_price);
	}
    int company_a_remainder = floor(investment_amount / company_a_share_price);
    int co_2_remainder = floor(investment_amount / company_b_share_price);
    float minimum = investment_amount;
    printf("Max number of shares from Company A is : %d\n", company_a_remainder);
    printf("Max number of shares from Company B is : %d\n", co_2_remainder);
    //printf("Current minimum is %0.2f\n", minimum);
    for(int i = 1; i < company_a_remainder+1; i++)
    {
        //printf("----%d\n", i);
        for(int j = 1; j < co_2_remainder+1; j++)
        {
            //printf("+++%d\n", j);
            purchase_sum = i*company_a_share_price + j*company_b_share_price;
            if (purchase_sum > investment_amount)
            {
                break;
            }
            else
            {
                //printf("Purchase %d shares at $%0.2f/share and %d shares at $%0.2f/share for a combined total of $%0.2f\n", i, co_1, j, co_2, purchase_sum);
                if((investment_amount - purchase_sum)< minimum)
                {
                    minimum = investment_amount - purchase_sum;
                    shares_co_1 = i;
                    shares_co_2 = j;
                    execute_sum = purchase_sum;
                }
            }
        }
    }
	// TODO - Adjustable padding for text alignment
    printf("\n------------------------------------Results------------------------------------\n");
    printf("\nPurchase %d shares of Company A at $%0.2f/share \n     and %d shares of Company B at $%0.2f/share \n \n for a combined total of ---> $%0.2f\n", shares_co_1, company_a_share_price, shares_co_2, company_b_share_price, execute_sum);
    printf("\n The remaining balance is -----> $%0.2f\n", minimum);
	printf("\n");
    return 0;
}