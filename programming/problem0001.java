package programming;
import java.util.Scanner;

public class problem0001 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int sum = a + b + c;

            if (sum >= 80 && sum <= 100) System.out.println("A");
            else if (sum >= 75 && sum <= 79) System.out.println("B+");
            else if (sum >= 70 && sum <= 74) System.out.println("B");
            else if (sum >= 65 && sum <= 69) System.out.println("C+");
            else if (sum >= 60 && sum <= 64) System.out.println("C");
            else if (sum >= 55 && sum <= 59) System.out.println("D+");
            else if (sum >= 50 && sum <= 54) System.out.println("D");
            else System.out.println("F");
        }
    }
}
