package array;

public class DuplicateElement {
    public static void main(String args[]) {
        int arr[] = new int[] { 1, 3, 4, 5, 2, 2, 3, 5, 6 };
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] == arr[j])
                    System.out.println(arr[i]);
            }
        }
    }
}
