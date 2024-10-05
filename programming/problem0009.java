package programming;
import java.util.Arrays;
import java.util.Scanner;

public class problem0009 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] a = new int[3];
            for (int i = 0; i < 3; i++) a[i] = sc.nextInt(); sc.nextLine();
            String s = sc.nextLine(); Arrays.sort(a);
            for (int i = 0;i < 3; i++) {
                if (s.charAt(i) == 'A') System.out.printf("%d ", a[0]);
                else if (s.charAt(i) == 'B') System.out.printf("%d ", a[1]);
                else System.out.printf("%d ", a[2]);
            }
        }
    }
}
