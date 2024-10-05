package programming;
import java.util.Scanner;

public class problem0010 {

    static void swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            String s = sc.nextLine();
            int[] a = {1, 0, 0};
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == 'A') swap(a, 0, 1);
                else if (s.charAt(i) == 'B') swap(a, 1, 2);
                else swap(a, 0, 2);
            }
            for (int i = 0; i < a.length; i++) if (a[i] > 0) System.out.println(i + 1);
        }
    }    
}
