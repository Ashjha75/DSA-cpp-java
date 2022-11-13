import java.util.ArrayList;

public class SubarraySum {

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 1, 1, 3 };
        int sum = 3;
        ArrayList<Integer> ds = new ArrayList<>();
        printSubSum(0, arr, sum, ds, 0);
    }

    public static void printSubSum(int i, int[] arr, int sum, ArrayList<Integer> ds, int ans) {
        if (i == arr.length) {
            if (sum == ans) {

                System.out.print(ds);
                System.out.println();

                return;
            }
            return;
        } else {
            ds.add(arr[i]);
            ans += arr[i];
            printSubSum(i + 1, arr, sum, ds, ans);
            ans -= arr[i];
            ds.remove(ds.size() - 1);
            printSubSum(i + 1, arr, sum, ds, ans);
            return;
        }

    }

}
// 47
