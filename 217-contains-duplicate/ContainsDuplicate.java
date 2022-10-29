package Hacktoberfest;
import java.util.Arrays;
import java.util.Scanner;
public class ContainsDuplicate {
	
	public static boolean containsDuplicate(int arr[]) {
		 Arrays.sort(arr);
		 int i=0;
		 int j=i+1;
		 while(j<arr.length) {
			 if(arr[i]==arr[j]) {
				 return true;
			 }
			 i++;
			 j++;
		 }
		 return false;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in); 
		int n= sc.nextInt(); 
		int[] arr = new int[n];  
		for(int i=0; i<n; i++)  
		{   
		arr[i]=sc.nextInt();  
		}  
       System.out.println(containsDuplicate(arr)); 
        
	}

}
