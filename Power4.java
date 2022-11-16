public class PowerOf4 {

static boolean isPower(int num) {
    if (num == 1 || num == 0)
    return true;
    if (num % 4 == 0) {
    return isPower(num / 4);
    }
    return false;

    }
	 public static void main(String[] args) {
        if (isPower(64))
            System.out.println(true);
        else
            System.out.println(false);

    }
}
