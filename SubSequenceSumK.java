// FindOut the 1st subarray which matche with given sum value------

import java.util.ArrayList;

public class checkSumsub {

    public static boolean printFirstSubarray(int i, int[] arr, int sum, ArrayList<Integer> ds, int ans) {
        if (i == arr.length) {
            if (sum == ans) {
                System.out.print(ds);
                return true;
            }
            return false;
        } else {

            ds.add(arr[i]);
            ans += arr[i];
            if (printFirstSubarray(i + 1, arr, sum, ds, ans) == true) {
                return true;
            }
            ans -= arr[i];
            ds.remove(ds.size() - 1);
            if (printFirstSubarray(i + 1, arr, sum, ds, ans) == true) {
                return true;
            }

            return false;
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3 };
        int sum = 3;
        ArrayList<Integer> ds = new ArrayList<>();
        printFirstSubarray(0, arr, sum, ds, 0);
    }

}
