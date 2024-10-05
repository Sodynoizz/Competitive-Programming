package programming;
import java.util.Scanner;

public class problem0004 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            String str = sc.nextLine();
            String[] s = str.split("");

            int a = 0, b = 0;
            for (int i = 0; i < str.length(); i++) {
                if (s[i].equals(s[i].toUpperCase())) a++;
                else b++;
            }
            if (a > 0 && b > 0) System.out.println("Mix");
            else if (a > 0) System.out.println("All Capital Letter");
            else System.out.println("All Small Letter");
        }
    }
}
