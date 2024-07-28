
import java.util.*;
public class sort013 {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size  of the array:");
        int size=sc.nextInt();
        int arr[]=new int[size];
        System.out.println("Enter the array elements:");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        int count0=0,count1=0,count2=0;
        for(int i=0;i<size;i++)
        {
            switch(arr[i])
            {
                case 0:count0++;
                break;
                case 1:count1++;
                break;
                case 2:count2++;
                break;
            }
        }int index=0;
        while(count0>0)
        {
            arr[index]=0;
            count0--;
            index++;
        }
        while(count1>0)
        {
            arr[index]=1;
            count1--;
            index++;
        }
        while(count2>0)
        {
            arr[index]=2;
            count2--;
            index++;
        }
        System.out.println("Sorted array:"+Arrays.toString(arr));
    }
}
