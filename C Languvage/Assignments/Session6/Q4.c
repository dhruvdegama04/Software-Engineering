/*Q4.Explain with your own example the difference between entry-controlled 
and exit-controlled loops by writing a short code snippet for each 
(for/while vs do-while) and describing what happens if the loop condition
 is false at the start.*/

// 1. Entry-Controlled Loops (while / for)
// In an entry-controlled loop, the condition is evaluated before executing the loop body. If the condition is false right at the beginning, the body is completely skipped.

#include <stdio.h>

int main() {
    // Setting available tickets to 0 so the condition is FALSE from the start
    int ticketsForWhile = 0; 
    int ticketsForDoWhile = 0;

    // --- 1. ENTRY-CONTROLLED LOOP (while) ---
    // The condition is checked BEFORE entering the loop body.
    printf("--- 1. Testing Entry-Controlled Loop (while) ---\n");
    
    while (ticketsForWhile > 0) {
        printf("Passenger boards the bus...\n");
        ticketsForWhile--;
    }
    printf("Status: Inside the 'while' loop was completely skipped.\n\n");


    // --- 2. EXIT-CONTROLLED LOOP (do-while) ---
    // The body executes FIRST, and the condition is checked at the END.
    printf("--- 2. Testing Exit-Controlled Loop (do-while) ---\n");
    
    do {
        printf("Passenger boards the bus and looks for a ticket...\n");
        ticketsForDoWhile--; 
    } while (ticketsForDoWhile > 0); 
    
    printf("Status: Inside the 'do-while' loop executed exactly ONCE.\n");

    return 0;
}
