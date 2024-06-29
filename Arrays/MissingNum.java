package Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class MissingNum {
    int arr[];int size;
    public MissingNum(int size){
        Scanner sc=new Scanner(System.in);
        this.size=size;
        this.arr=new int[size];
        System.out.println("Enter the array elements:");
        for(int i=0;i<size;i++)
        {
            this.arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        sc.close();
    }   
    public int missingNum()
    {
        int i;
        int num=1;
        for(i=0;i<size;i++)
        {
            if(arr[i]!=num)
                break;
            else
                num++;
        }
        return num;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sc.nextInt();
        MissingNum obj1=new MissingNum(size);
        int miss=obj1.missingNum();
        System.out.println("Number missing="+miss);
        sc.close();
    }
}
