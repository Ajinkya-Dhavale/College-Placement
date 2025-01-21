import java.util.Scanner;

class MC {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Initial setup
        int lM = 3; // Left side Missionaries number
        int lC = 3; // Left side Cannibals number
        int rM = 0; // Right side Missionaries number
        int rC = 0; // Right side Cannibals number
        int k = 0; // Attempt counter

        System.out.println("\n\tGame Start");
        System.out.println("Now the task is to move all of them to the right side of the river");
        System.out.println("Rules:");
        System.out.println("1. The boat can carry at most two people");
        System.out.println("2. If cannibals number greater than missionaries, the cannibals would eat the missionaries");
        System.out.println("3. The boat cannot cross the river by itself with no people on board");
        System.out.println("\nM M M C C C | --- | \n");

        try {
            while (true) {
                while (true) {
                    System.out.println("Left side -> right side river travel");

                    System.out.print("Enter number of Missionaries to travel => ");
                    int uM = scanner.nextInt();
                    System.out.print("Enter number of Cannibals to travel => ");
                    int uC = scanner.nextInt();

                    if (uM == 0 && uC == 0) {
                        System.out.println("Empty travel not possible");
                        System.out.println("Re-enter : ");
                    } else if ((uM + uC <= 2) && (lM - uM >= 0) && (lC - uC >= 0)) {
                        lM -= uM;
                        lC -= uC;
                        rM += uM;
                        rC += uC;
                        break;
                    } else {
                        System.out.println("Wrong input re-enter : ");
                    }
                }

                printState(lM, lC, rM, rC);

                k++;

                if (isInvalidState(lM, lC) || isInvalidState(rM, rC)) {
                    System.out.println("Cannibals eat missionaries:\nYou lost the game");
                    break;
                }

                if ((rM + rC) == 6) {
                    System.out.println("You won the game : \n\tCongrats");
                    System.out.println("Total attempts: " + k);
                    break;
                }

                while (true) {
                    System.out.println("Right side -> Left side river travel");

                    System.out.print("Enter number of Missionaries to travel => ");
                    int userM = scanner.nextInt();
                    System.out.print("Enter number of Cannibals to travel => ");
                    int userC = scanner.nextInt();

                    if (userM == 0 && userC == 0) {
                        System.out.println("Empty travel not possible");
                        System.out.println("Re-enter : ");
                    } else if ((userM + userC <= 2) && (rM - userM >= 0) && (rC - userC >= 0)) {
                        lM += userM;
                        lC += userC;
                        rM -= userM;
                        rC -= userC;
                        break; 
                    } else {
                        System.out.println("Wrong input re-enter : ");
                    }
                }

                printState(lM, lC, rM, rC);

                if (isInvalidState(lM, lC) || isInvalidState(rM, rC)) {
                    System.out.println("Cannibals eat missionaries:\nYou lost the game");
                    break;
                }
            }
        } catch (Exception e) {
            System.out.println("\nInvalid input. Please retry!");
        }
    }

    private static void printState(int lM, int lC, int rM, int rC) {
        System.out.println("\n==========================");
        for (int i = 0; i < lM; i++) {
            System.out.print("M ");
        }
        for (int i = 0; i < lC; i++) {
            System.out.print("C ");
        }
        System.out.print("  | --> |  ");
        for (int i = 0; i < rM; i++) {
            System.out.print("M ");
        }
        for (int i = 0; i < rC; i++) {
            System.out.print("C ");
        }
        System.out.println("\n==========================\n");
    }

    private static boolean isInvalidState(int m, int c) {
        return (c > m && m > 0); 
    }
}


