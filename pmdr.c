#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Playing a sound is too hard, I don't understand any of this
void playsound()
{
    printf("\a");
    Sleep(3500);
    printf("\a");
    Sleep(3500);
    printf("\a");
}
int stopctd()
{
    if (kbhit())
    {
        char key = getch();
        if (key == 'q' || key == 'Q')
        {
            system("cls");
            printf("Stopped\nClosing in 3 seconds...");
            Sleep(3800);
            exit (0);
        }
    }
}

int main ()
{
    int mode;
    
    printf("PomoHub v0.1 - This version has no audio yet.\n");
    Sleep(1500);
    printf("1. 25 min - 5 min rest\n2. 50 min - 10 min rest\n");
    printf("Choice: ");
    scanf("%d", &mode);
    
    if (mode == 1)
    {
        // count for 25 min
        int total_seconds = 1500;
        while (total_seconds > -1)
        {
            stopctd();
            // display a countdown
            int minutes = total_seconds / 60;
            int seconds = total_seconds % 60;
            printf("\rFocus Time: %d:%02d (Press 'q' to stop countdown)", minutes, seconds);
            fflush(stdout);
            Sleep(1000);
            total_seconds--;
        }
        
        playsound();
        
        total_seconds = 300;
        while (total_seconds > -1)
        {
            stopctd();
            int minutes = total_seconds / 60;
            int seconds = total_seconds % 60;
            printf("\rRest Time: %d:%02d ", minutes, seconds);
            fflush(stdout);
            Sleep(1000);
            total_seconds--;
        }
        system("cls");
        printf("\nThanks for using PomoHub v0.1!\n");
        playsound ();
        system("pause");
    }
    else if (mode == 2)
    {
        // count for 50 min
        int total_seconds = 3000;
        while (total_seconds > -1)
        {
            stopctd();
            // display a countdown
            int minutes = total_seconds / 60;
            int seconds = total_seconds % 60;
            printf("\rFocus Time: %d:%02d (Press 'q' to stop Countdown)", minutes, seconds);
            fflush(stdout);
            Sleep(1000);
            total_seconds--;
        }
        
        playsound();
        
        total_seconds = 600;
        while (total_seconds > -1)
        {
            stopctd();
            int minutes = total_seconds / 60;
            int seconds = total_seconds % 60;
            printf("\rRest Time: %d:%02d ", minutes, seconds);
            fflush(stdout);
            Sleep(1000);
            total_seconds--;
        }
        system("cls");
        Sleep(200);
        printf("\nThanks for using PomoHub v0.1!\n");
        playsound ();
        system("pause");
    }
    else if (mode == 67)
    {
        system("cls");
        Sleep(2000);
        printf("          ..#@@@#==+%%@@=.                                    \n"); printf("\a"); Sleep(200);
        printf("       .@@..%%@@@@@@@@@@-.@#.                                 \n"); printf("\a"); Sleep(200);
        printf("    ..@:.@@@@@@@@@@@@@@@@@.@%%.. .... ....                    \n"); printf("\a"); Sleep(200);
        printf("   .*%%.@@@@@@@@@@@@@@@@@@@@.@@. #=.:=#@@@@@@@%%*-:.... ..     \n"); printf("\a"); Sleep(200);
        printf("   #*=@@@@@@@-:@@@-:@@@@.:@@@@@.@.@@@@@@@@@@@@%%*-.......:@@. \n"); printf("\a"); Sleep(200);
        printf(" ..@.@@@@@@@.@@@*..@.+@@@@@%%.  .@.@@@@@@@@@@@@@@@@@@@@@@=*@@.\n"); printf("\a"); Sleep(200);
        printf(" .@.@@@@@@@*@@@.  ...@@+.      .@*@@@@@@@@@@@@@@@@@@@@@@.@@@ \n"); printf("\a"); Sleep(200);
        printf("  @.@@@@@@@.@@@@@%%-...-@@#..   =*.:+%%@@@@@@@@@@@@@@@@@@@.@@* \n"); printf("\a"); Sleep(200);
        printf(" .@=@@@@@@@ @..@@@@@@@@@@-.@*  .=@@@@@@@@@@@@@.=@@@@@@@@.@@. \n"); printf("\a"); Sleep(200);
        printf(" :%%+@@@@@@@@@@@@@@@@@@@@@@@+-@+.    .....-#@@@.@@@@@@@@.@@@. \n"); printf("\a"); Sleep(200);
        printf(" .@-@@@@@@@@@@#....#@@@@@@@@%%:@@.         .+@:@@@@@@@#.@@@.  \n"); printf("\a"); Sleep(200);
        printf(" .@.@@@@@@@@@.@@@@@@.@@@@@@@@.@@-.       .@#=@@@@@@@*-@@@.   \n"); printf("\a"); Sleep(200);
        printf(" .@.@@@@@@@@.@@@   .@.@@@@@@@@+@@.      .@:%%@@@@@@@+-@@@     \n"); printf("\a"); Sleep(200);
        printf("  @:@@@@@@@@.@@:   .@.@@@@@@@@=@@      .@.@@@@@@@@+=@@@.     \n"); printf("\a"); Sleep(200);
        printf(" ..@.@@@@@@@@=@*   .@.@@@@@@@%%%%@@.    .@.@@@@@@@@*:@@@.      \n"); printf("\a"); Sleep(200);
        printf("  .@.@@@@@@@@#.@-..@.@@@@@@@@.@@@.    @.@@@@@@@@@.@@@.       \n"); printf("\a"); Sleep(200);
        printf("   .@.@@@@@@@@@@:.-@@@@@@@@@.@@@..  .@.@@@@@@@@@.@@@.        \n"); printf("\a"); Sleep(200);
        printf("    .@--@@@@@@@@@@@@@@@@@@@.@@@-   .@-%%@@@@@@@@.@@@..        \n"); printf("\a"); Sleep(200);
        printf("    ...@:.@@@@@@@@@@@@@@ =@@@@..   -%%-@@@@@@@@.@@@.          \n"); printf("\a"); Sleep(200);
        printf("         #@@+.......%%@@@@@@@.     .@.@@@@@@@@==@@-           \n"); printf("\a"); Sleep(200);
        printf("            .-@@@@@@@@#...        @.@@@@@@@@@.@@@.           \n"); printf("\a"); Sleep(200);
        printf("                                  @@@@%%*=....@@@..           \n"); printf("\a"); Sleep(200);
        printf("       ..@%%....@@@*..             ..@@@@@@@@@@@* .           \n"); printf("\a"); Sleep(200);
        printf("   ...@:        ... .@.                        .             \n"); printf("\a"); Sleep(200);
        printf(" .%%@-.   =      .#.   .%%.                 ....%%@@@@%%..       \n"); printf("\a"); Sleep(200);
        printf("@..  .=. *      .=.   .:.              .@%%... .    ..:@.     \n"); printf("\a"); Sleep(200);
        printf("@....@@@.......@.   .. .@ .....     ..%%.   ..      -. ..-@#..\n"); printf("\a"); Sleep(200);
        printf("      .@  ...+@@@@@*..+@@.@-@@@.     #.    .-      :....  ..@\n"); printf("\a"); Sleep(200);
        printf("      .@. .-....@.-.@@#..@#.@@.%% ....%%      .@.    .+@@@....@\n"); printf("\a"); Sleep(200);
        printf("      .-......*@.=.:@..:#...=.+.-@%%-#.-@:@.%%@*.@+...:.......\n"); printf("\a"); Sleep(200);
        printf("       .#..=... ...@.:..=.*@  * .@%%.#.*@..%%@..@-.....#..     \n"); printf("\a"); Sleep(200);
        printf("         .@.   .:--.  .+..@:%%-. .@..@. .....**. .+  .@.      \n"); printf("\a"); Sleep(200);
        printf("          .-@..#@:...@@*@*..    ....-.#.@.-.:..+....@.       \n"); printf("\a"); Sleep(200);
        printf("                                  =*.@...%%.. =.. ..@.        \n"); printf("\a"); Sleep(200);
        printf("                                      -@@%%@..++*@%%.          \n"); printf("\a"); Sleep(200);
        system("start https://www.youtube.com/shorts/pLsPNxr0HZM");
        Sleep(3000);
        exit(0);
    }
    else
    {
        system("cls");
        printf("Wrong Input!\n Deleting System32");
        Sleep(3000);
        exit(0);
    }
}
