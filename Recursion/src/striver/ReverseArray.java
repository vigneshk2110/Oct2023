package striver;

import java.util.Arrays;

public class ReverseArray {

	public static void main(String[] args) {
		int [] arr= {1,2,3,4,5};
		
//		reverse1(arr, 0);
//		
//		System.out.println(Arrays.toString(arr));
		
		reverse2(arr,0,arr.length-1);
		
		System.out.println(Arrays.toString(arr));

	}

	private static void reverse2(int[] arr, int left, int right) {
		
		if(left>=right) return;
		
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		
		reverse2(arr, left+1, right-1);
		
		
	}

	private static void reverse1(int[] arr, int index) {
		
		if(index == arr.length/2) return;
		
		swap(arr, index);
		
		reverse1(arr, index+1);
		
		
	}

	private static void swap(int[] arr, int index) {
		int start = index;
		int end = arr.length-start-1;
		
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
	}

}
