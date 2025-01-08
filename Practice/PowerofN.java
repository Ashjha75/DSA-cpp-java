public class PowerOfN {
static boolean isPower(int num, int base) {
        if (num == 0 || num == 1)
            return true;
        if (num % base == 0)
            return isPower(num / base, base);
        else
            return false;
    }
     public static void main(String[] args) {
        if (isPower(729, 9))
            System.out.println(true);
        else
            System.out.println(false);

    }
}

