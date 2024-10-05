package programming;
import java.util.Scanner;

public class problem0011 {
    
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] mpp = new int[42]; 
            int cnt = 0;
            for (int i = 0; i < 10; i++) {
                int x = sc.nextInt();
                if (mpp[x % 42]++ == 0) cnt++;
            }
            System.out.printf("%d", cnt);
        }


    }   
}
