import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int count = 1;

        while(sc.hasNext())
        {
            String s1 = sc.nextLine();
            System.out.println(count + " " + s1);
            count++;
        }
        sc.close();
    }
}