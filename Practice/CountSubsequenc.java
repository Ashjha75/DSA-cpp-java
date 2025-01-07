
// program to count the nuberof subsequences
import java.util.ArrayList;

public class CountSubArray {

    public static int printCount(int i, int[] arr, int sum, ArrayList<Integer> ds, int ans) {
        if (i == arr.length) {
            if (ans == sum) {
                return 1;
            }
            return 0;
        } else {
            ans += arr[i];
            int l = printCount(i + 1, arr, sum, ds, ans);
            ans -= arr[i];
            int r = printCount(i + 1, arr, sum, ds, ans);
            return l + r;
        }

    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 1, 1, 0 };
        int sum = 3;
        int result = printCount(0, arr, sum, new ArrayList<>(), 0);
        System.out.println(result);

    }

}
