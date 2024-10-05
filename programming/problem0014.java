package programming;
import java.math.BigInteger;
import java.util.Scanner;

public class problem0014 {
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            System.out.print(a.gcd(b));
        }
    }
}
