package programming;
import java.util.Scanner;

public class problem0013 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] a = new int[9];
            int sum = 0;
            for (int i = 0; i < 9; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            } 
            sum -= 100;
            for (int i = 0; i < 9; i++) {
                for (int j = i + 1; j < 9; j++) 
                    if (a[i] + a[j] == sum) { a[i] = 0; a[j] = 0; }
            }
            for (int i = 0; i < 9; i++) if (a[i] != 0) System.out.println(a[i]);
        }
    }    
}
