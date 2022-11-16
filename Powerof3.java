public class PowerOf2 {
static boolean isPower(int num) {
    if (num == 1 || num == 0)
    return true;
    if (num % 3 == 0) {
    return isPower(num / 3);
    }
    return false;

    } 

public static void main(String[] args) {
        if (isPower(81))
            System.out.println(true);
        else
            System.out.println(false);

    }
}
