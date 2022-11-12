import java.util.ArrayList;

public class subarray {
    public static void printSubsequences(int[] arr, ArrayList<Integer> ds, int i) {
        if (i == arr.length) {
            System.out.print(ds);
            System.out.println();
            return;
        } else {
            printSubsequences(arr, ds, i + 1);
            ds.add(arr[i]);
            printSubsequences(arr, ds, i + 1);
            ds.remove(ds.size() - 1);
        }
    }

    public static void main(String[] args) {

        int[] arr = { 1, 2, 3 };

        ArrayList<Integer> ds = new ArrayList<Integer>();
        printSubsequences(arr, ds, 0);
    }

}
