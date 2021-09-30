import java.util.*;

public class Main {
    public static void main(String[] args) {
        int n, k, l, c, d, p, nl, np;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        k = s.nextInt();
        l = s.nextInt();
        c = s.nextInt();
        d = s.nextInt();
        p = s.nextInt();
        nl = s.nextInt();
        np = s.nextInt();
        int total_Q_drink = k * l;
        int total_s_lime = c * d;
        int T_drink_toast = total_Q_drink / n;
        int Q_salt = p / np;
        int min_of_2= Math.min(T_drink_toast, total_s_lime);
        int toast_possible = min(T_drink_toast, total_s_lime, Q_salt) / n;

        System.out.println(toast_possible);

    }

}
