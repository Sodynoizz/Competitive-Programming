package programming;
import java.util.Scanner;

public class problem0008 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(2 * b - a);
        }
    }
}
