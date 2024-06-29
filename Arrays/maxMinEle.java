package Arrays;

import java.util.*;
public class maxMinEle {
    public static void find_max_min(int arr[], int size)
    {
        int max=0,min=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]>max)
                max=arr[i];
            else if(arr[i]<min)
                min=arr[i];
        }
        System.out.println("Maximun number="+max);
        System.out.println("Minimum number="+min);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sc.nextInt();
        System.out.println("Enter the array elements:");
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        find_max_min(arr,size);
        sc.close();
    }
}
