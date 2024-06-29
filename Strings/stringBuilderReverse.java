package Strings;


public class stringBuilderReverse {
    private String original;
    private String reversed;
    public stringBuilderReverse(String original) {
        this.original = original;
        this.reversed = reverseString();
    }
    public String reverseString()
    {
        StringBuilder rev=new StringBuilder(original);
        return rev.reverse().toString();
    }
    public String getReversed()
    {
        return reversed;
    }

    public static void main(String[] args) {
        stringBuilderReverse reversedString = new stringBuilderReverse("hellow");
        System.out.println("Original: " + reversedString.original);
        System.out.println("Reversed: " + reversedString.getReversed());
    }
}
