package programming;
import java.util.Scanner;

public class problem0005 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            double a = sc.nextDouble();
            double b = sc.nextDouble();
            System.out.printf("%.6f", Math.sqrt(a * a + b * b)); 
        }
    }
}
