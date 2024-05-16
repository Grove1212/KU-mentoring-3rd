package w6;

import java.util.*;

public class boj_16194_카드구매하기2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int arr[] = new int[1001];
		
		
		arr[1] = scanner.nextInt();
		for (int i = 2; i <= n; i++) {
			arr[i] = scanner.nextInt();
			for (int j = 1; j <= i / 2; j++) {
				if(arr[i] == 0)
					continue;
				arr[i] = Math.min(arr[i], arr[j] + arr[i - j]);
			}
		}
		System.out.println(arr[n]);
		scanner.close();
	}

}
