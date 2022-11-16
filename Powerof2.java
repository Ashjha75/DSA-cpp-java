public class PowerOf2 {

    static boolean twoPower(int num) {
    if (num == 1 || num == 0) {
    return true;
    }
    if (num % 2 == 0) {
    return twoPower(num / 2);
    }
    return false;
    }
	public static void main(String[] args) {
        if (twoPower(4))
            System.out.println(true);
        else
            System.out.println(false);

    }
