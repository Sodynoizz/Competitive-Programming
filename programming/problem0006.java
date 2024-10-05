package programming;
import java.util.Scanner;

public class problem0006 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            double r = sc.nextDouble();
            System.out.printf("%.6f\n", Math.PI * r * r);
            System.out.printf("%.6f\n", 2.0 * r * r);
        }
    }
}
