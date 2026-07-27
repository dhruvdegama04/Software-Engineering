/*1.small Pizza price 150 quantity 4 offer (cock 500ml free)
  2.mediam Pizza price 250 quantity 3 offer(1 Liter Cock Free)
  3.Large Pizza Price 500 quantity 2 offer(1 liter Cock + Ice-Creem)
  4.Monster Pizza Price 800 quantity 2 offer(1 Liter Cock + Ice-Cream + Brownie)*/
  
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    int total_Bill, pizza_Quantity = 0,i;
    int small_pizza = 150, mediam_piza = 250, large_pizza = 500, monster_pizza = 800;
    int choice = 0,offer; 

    char *pizza_name[] = {"Small Pizza", "Medium Pizza", "Large Pizza", "Monster Pizza"};
    char *pizza_number[] = {"1", "2", "3", "4"};
    
    char user_order[40];
    
    printf("========== Welcome To Pizza Cafe ==========\n\n");
    printf("1. Small Pizza    || Price =>  150 || 4 Pizza Buy To Offer : Free (Coke 500ML)\n");
    printf("2. Medium Pizza   || Price =>  250 || 3 Pizza Buy To Offer : Free (1 Liter Coke)\n");
    printf("3. Large Pizza    || Price =>  500 || 2 Pizza Buy To Offer : Free (1 Liter Coke + Ice-Cream)\n");
    printf("4. Monster Pizza  || Price =>  800 || 2 Pizza Buy To Offer : Free (1 Liter Coke + Ice-Cream + Brownie)\n\n");
    
    printf("Enter Your Pizza Choice => ");
    
    fgets(user_order, sizeof(user_order), stdin);
    
    user_order[strcspn(user_order, "\n")] = 0;
    
    for ( i = 0; i < 4; i++) {
        if (strcmp(user_order, pizza_number[i]) == 0 || 
            strcasecmp(user_order, pizza_name[i]) == 0) {
            choice = i + 1;
            break;
        }
    }
    
    printf("\n");
    
    if(choice >= 1 && choice <= 4)
    {
        printf("Enter Quantity => ");
        scanf("%d", &pizza_Quantity);
        printf("\n**** Thank You For Order ****\n\n");
    }
    else
    {
        printf("!!!!! Wrong Choice Plz Enter Correct Choice 1 To 4 or Full Pizza Name !!!!!\n\n");
    }
    
    switch(choice)
    {
        case 1: 
            printf("You Selected Pizza => Small Pizza\n\n");
            offer=pizza_Quantity / 4;
            if(pizza_Quantity >= 4) 
            {
                printf("Offer : Free (Coke 500ML) %d Times \n\n",offer);
            }
            else {
                printf("No Offer Available for this quantity.\n\n");
            }
            
            total_Bill = small_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 2: 
            printf("You Selected Pizza => Medium Pizza\n\n");
            offer=pizza_Quantity / 3;
            if(pizza_Quantity >= 3)
            {
                printf("Offer : Free (1 Liter Coke) %d Times \n\n",offer);
            }
            else {
                printf("No Offer Available for this quantity.\n\n");
            }
            total_Bill = mediam_piza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 3: 
            printf("You Selected Pizza => Large Pizza\n\n");
            offer=pizza_Quantity / 2;
            if(pizza_Quantity >= 2)
            {
                printf("Offer : Free (1 Liter Coke + Ice-Cream) %d Times \n\n",offer);
            }
            else {
                printf("No Offer Available for this quantity.\n\n");
            }
            total_Bill = large_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 4: 
            printf("You Selected Pizza => Monster Pizza\n\n");
            offer=pizza_Quantity / 2;
            if(pizza_Quantity >= 2)
            {
                printf("Offer : Free (1 Liter Coke + Ice-Cream + Brownie) %d Times \n\n",offer);
            }
            else {
                printf("No Offer Available for this quantity.\n\n");
            }
            total_Bill = monster_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        default:
            break;
    }

    return 0;
}
