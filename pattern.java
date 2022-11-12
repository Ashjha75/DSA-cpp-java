import java.util.Scanner;

public class pattern1 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Please enter the number of rows :: ");
        int rows = inp.nextInt();
        printPattern(rows, 1, 1);
    }

    public static void printPattern(int rows, int i, int k) {
        if (rows == 0) {
            return;
        }
        k = printNumber(i, k);
        System.out.println();
        printPattern(rows - 1, i + 1, k);
    }

    public static int printNumber(int i, int k) {
        if (i == 0) {
            return k;
        } else {
            System.out.print(" " + k);
            return printNumber(i - 1, k + 1);

        }
    }
}																																															
