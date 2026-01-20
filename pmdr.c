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

void stopctd()
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

void pomodoro_timer(int total_seconds)
{
    int focus_time = total_seconds / 1.2;
    int rest_time = total_seconds / 10;
    while (focus_time > -1)
    {
        stopctd();
        // display a countdown
        int minutes = focus_time / 60;
        int seconds = focus_time % 60;
        printf("\rFocus Time: %d:%02d (Press 'q' to stop countdown)", minutes, seconds);
        fflush(stdout);
        Sleep(1000);
        focus_time--;
    }
        
    playsound();
        
    while (rest_time > -1)
    {
        stopctd();
        int minutes = rest_time / 60;
        int seconds = rest_time % 60;
        printf("\rRest Time: %d:%02d ", minutes, seconds);
        fflush(stdout);
        Sleep(1000);
        rest_time--;
    }
    system("cls");
    printf("Thanks for using PomoHub v0.1!\n");
    playsound ();
    system("pause");   
}

int main ()
{
    while (1)
    {
        int mode;
        system("cls");
        printf("PomoHub v0.1 - This version has no audio yet.\n");
        Sleep(1500);
        printf("1. 25 min - 5 min rest\n2. 50 min - 10 min rest\n");
        printf("Choice: ");
        scanf("%d", &mode);
    
        if (mode == 1)
        {
            int total_seconds = 1800;
            pomodoro_timer(total_seconds);
        }
        else if (mode == 2)
        {
            int total_seconds = 3600;
            pomodoro_timer(total_seconds);
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
}
