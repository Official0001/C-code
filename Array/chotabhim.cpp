#include <stdio.h>

int main() {
    int laddus = 21;
    int user_pick, chota_bheem_pick;

    printf("Welcome to the Laddu Game between User and Chota Bheem!\n");

    while (1) {
      
        printf("Number of Laddus in the plate: %d\n", laddus);
        printf("Your turn - Pick 1 to 4 Laddus: ");
        scanf("%d", &user_pick);

       
        if (user_pick < 1 || user_pick > 4 || user_pick > laddus) {
            printf("Invalid input. Please pick 1 to 4 Laddus.\n");
            continue;
        }

        laddus -= user_pick;

       
        if (laddus == 0) {
            printf("Chota Bheem wins! You picked the last Laddu.\n");
            break;
        }

       
        chota_bheem_pick = 5 - user_pick; 
        printf("Chota Bheem picks %d Laddus.\n", chota_bheem_pick);
        laddus -= chota_bheem_pick;

      
        if (laddus == 0) {
            printf("You win! Chota Bheem picked the last Laddu.\n");
            break;
        }
    }

    return 0;
}

