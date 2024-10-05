package programming;
import java.util.Scanner;

public class problem0002 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;

            for (int i = 0; i < n; i++) {
                int m = sc.nextInt();
                if (min > m) min = m;
                if (max < m) max = m;
            }

            System.out.println(min);
            System.out.println(max);
        }
    }   
}
