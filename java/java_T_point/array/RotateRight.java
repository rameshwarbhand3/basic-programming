package array;

public class RotateRight {
     public static void main(String[] args) {  
        int [] arr = new int [] {1, 2, 3, 4, 5};  
        int n = 3;  
        System.out.println("Original array: ");  
        for (int i = 0; i < arr.length; i++) {  
            System.out.print(arr[i] + " ");  
        }  
        for(int i = 0; i < n; i++){  
            int j,last=arr[arr.length-1];
            for( j = arr.length-1;j>=0; j--){  
                
                arr[j] = arr[j-1];  
            }  
            arr[j] = last;  
        }  
        System.out.println();  
        System.out.println("Array after left rotation: ");  
        for(int i = 0; i< arr.length; i++){  
            System.out.print(arr[i] + " ");  
        }  
    }  
}  
