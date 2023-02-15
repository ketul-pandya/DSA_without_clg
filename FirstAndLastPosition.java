import java.util.*;

class FirstAndLastPosition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        int[] result = searchRange(arr, target);
        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
        sc.close();

    }

    public static int[] searchRange(int[] nums, int target) {

        int[] ans = { -1, -1 };
        // check for first occurrence if target first
        int start = search(nums, target, true);

        int end = search(nums, target, false);
        ans[0] = start;
        ans[1] = end;
        return ans;
    }

    // this function just returns the index value of target
    public static int search(int[] nums, int target, boolean findStartIndex) {
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;
        while (start <= end) {
            // find the middle element
            // int mid = (start + end) / 2; // might be possible that (start + end) exceeds
            // the range of int in java
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                // potential ans found
                ans = mid;
                if (findStartIndex) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return ans;
    }
}