
import java.util.Scanner;

public class kth_MaxAndMin_usingInsertionSort {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the array size:");
        int size=sc.nextInt();
        System.out.println("Enter the array elements:");
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        //Insertion Sort:
        int i,j,key;
        for(i=1;i<size;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        System.out.println("Enter the kth element:");
        int k=sc.nextInt();
        System.out.println("kth smallest element:"+arr[k-1]);
        System.out.println("kth largest element:"+arr[size-k]);
        sc.close();
    }
}
