
import java.util.*;

public class power {

    public static void main(String[] args) {
        System.out.println("Plaease enter the base here:: ");
        Scanner inp = new Scanner(System.in);
        int base = inp.nextInt();
        System.out.println("Plaease enter the Power here:: ");
        int pow = inp.nextInt();
        int result = powerfun(base, pow);
        System.out.println("Power of nuber is : " + result);
    }

    public static int powerfun(int base, int exp) {
        if (exp == 0) {
            return 1;
        } else {
            return (base * powerfun(base, exp - 1));
        }
    }

}
