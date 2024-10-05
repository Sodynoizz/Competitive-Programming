package programming;
import java.util.Scanner;

public class problem0012 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            for (int i = 0; i < 5; i++) {
                if (i == 0 || i == 4) {
                    System.out.printf("..");
                    for (int j = 1; j <= s.length(); j++) {
                        if (j % 3 == 0) System.out.printf("*");
                        else System.out.printf("#");
                        if (j < s.length()) System.out.printf("...");
                    }
                    System.out.printf("..");
                } else if (i == 1 || i == 3) {
                    System.out.printf(".");
                    for (int j = 1; j <= s.length(); j++) {
                        if (j % 3 == 0) System.out.printf("*.*");
                        else System.out.printf("#.#");
                        System.out.printf(".");
                    }
                } else {
                    for (int j = 1; j <= s.length(); j++) {
                        if (j % 3 == 0) System.out.printf("*." + s.charAt(j - 1) + ".");
                        else if ((j - 1) % 3 == 0 && j != 1) System.out.printf("." + s.charAt(j - 1) + ".");
                        else System.out.printf("#." + s.charAt(j - 1) + ".");

                        if (j <= s.length()) {
                            if (j % 3 == 0) System.out.printf("*");
                            else if (j == s.length()) System.out.printf("#");
                        }
                    }
                }
                System.out.println();
            }
        }
    }   
}
