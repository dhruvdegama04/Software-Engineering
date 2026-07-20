/*1.small Pizza price 150 quantity 4 offer (cock 500ml free)
  2.mediam Pizza price 250 quantity 3 offer(1 Liter Cock Free)
  3.Large Pizza Price 500 quantity 2 offer(1 liter Cock + Ice-Creem)
  4.Monster Pizza Price 800 quantity 2 offer(1 Liter Cock + Ice-Cream + Brownie)*/
  
  #include <stdio.h>

void main()
{
    int total_Bill, pizza_Quantity;
    int small_pizza = 150, mediam_piza = 250, large_pizza = 500, monster_pizza = 800;
    int choice; 
    
    printf("========== Welcome To Pizza Cafe ==========\n\n");
    printf("1. Small Pizza    || Price =>  150\n");
    printf("2. Medium Pizza   || Price =>  250\n");
    printf("3. Large Pizza    || Price =>  500\n");
    printf("4. Monster Pizza  || Price =>  800\n\n");
    
    printf("Enter Your Pizza Choice => ");
    scanf("%d", &choice);
    printf("\n");
    
    if(choice <= 4)
    {
    	printf("Enter Quantity => ");
    	scanf("%d", &pizza_Quantity);
    	printf("\n");
    	printf("\n**** Thank You For Order ****\n\n");
    
	}
	else
	{
		printf("!!!!! Wrong Choice Plz Enter Correct Choice 1 To 4 !!!!!");
	}
    
    
    switch(choice)
    {
        case 1: 
            printf("You Selected => Small Pizza\n\n");
            if(pizza_Quantity >= 4) 
            {
                printf("Offer : Free (Coke 500ML)\n\n");
            }
            else {
                printf("No Offer Available for this quantity.\n");
            }
            total_Bill = small_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 2: 
            printf("You Selected => Medium Pizza\n\n");
            if(pizza_Quantity >= 3)
            {
                printf("Offer : Free (1 Liter Coke)\n\n");
            }
            else {
                printf("No Offer Available for this quantity.\n");
            }
            total_Bill = mediam_piza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 3: 
            printf("You Selected => Large Pizza\n\n");
            if(pizza_Quantity >= 2)
            {
                printf("Offer : Free (1 Liter Coke + Ice-Cream)\n\n");
            }
            else {
                printf("No Offer Available for this quantity.\n");
            }
            total_Bill = large_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        case 4: 
            printf("You Selected => Monster Pizza\n\n");
            if(pizza_Quantity >= 2)
            {
                printf("Offer : Free (1 Liter Coke + Ice-Cream + Brownie)\n\n");
            }
            else {
                printf("No Offer Available for this quantity.\n");
            }
            total_Bill = monster_pizza * pizza_Quantity;
            printf("Your Bill: %d \n", total_Bill);
            break;
            
        default:
            
            break;
    }
}
