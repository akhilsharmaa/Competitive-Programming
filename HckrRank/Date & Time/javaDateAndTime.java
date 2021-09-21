import java.time.LocalDate;

class JavaDateAndTime{

    public String findDay(int month, int day, int year) {
        int d = Integer.valueOf(day);
        int m = Integer.valueOf(month);
        int y = Integer.valueOf(year);
        LocalDate date = LocalDate.of(y, m, d);
        return date.getDayOfWeek().toString();
    }
}

class Solution {
    public static void main(String[] args){
        JavaDateAndTime javaDateAndTime = new JavaDateAndTime();
        System.out.println(javaDateAndTime.findDay(8, 2, 2009)); 
    }
}
