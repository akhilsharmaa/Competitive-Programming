import java.util.ArrayList;
import java.util.List;

class Result {

    public static int simpleArraySum(List<Integer> ar) {

        int sum = 0;
        for (Integer integer : ar) {
            sum += integer;
        }
        
        return sum;
    }

}

public class Solution {
  
    public static void main(String[] args) {
        Result result = new Result();
        List<Integer> ar = new ArrayList<Integer>();
        ar.add(1);
        ar.add(2);
        ar.add(3);
        ar.add(4);
        ar.add(10);
        ar.add(11);
        System.out.println(result.simpleArraySum(ar)); 
    }
}
