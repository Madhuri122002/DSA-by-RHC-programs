
import java.util.*;
public class ReverseArray {
    int size;
    int arr[];
    public ReverseArray(int size)
    {
        Scanner sc=new Scanner(System.in);
        this.size=size;
        this.arr=new int[size];
        System.out.println("Enter the array elements:");
        for(int i=0;i<size;i++)
        {
            this.arr[i]=sc.nextInt();
        }
        sc.close();
    }
    public int[] revArr()
    {
        for(int i=0, j=size-1; i<size && j>=i; i++,j--)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        return arr;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sc.nextInt();
        ReverseArray obj1=new ReverseArray(size);
        int arr_result[]=obj1.revArr();
        System.out.println("Reversed array:"+Arrays.toString(arr_result));
        sc.close();
    }
}
