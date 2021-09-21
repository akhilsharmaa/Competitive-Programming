import java.io.*;
import java.util.*;


public class JavaIntToString {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your            class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        

        try {
            int num = sc.nextInt();
            String numInString = Integer.toString(num);
            if (num > -100 && num < 100) {
                System.out.println("Good job");
            }else{
                System.out.println("Wrong answer");
            }
        } catch (Exception e) {
            
        }
        
    }
}
