//https://dmoj.ca/problem/dwite12c2p2
//2022
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        for(int test = 0; test < 5; test++){
            String w1 = scn.next();
            String w2 = scn.next();
            String ans = "";

            int longest = w1.length();
            if(w2.length() > longest){
                longest = w2.length();
            }

            int spacesFromEnd = 0;
            int carry = 0;
            while(spacesFromEnd < longest){
                int sum = carry;
                if(spacesFromEnd < w1.length()){
                    sum += (int)w1.charAt(w1.length()-1-spacesFromEnd)-65;
                }
                if(spacesFromEnd < w2.length()){
                    sum += (int)w2.charAt(w2.length()-1-spacesFromEnd)-65;
                }
                if(sum >= 26){
                    carry = 1;
                    sum -= 26;
                } else{
                    carry = 0;
                }
                //System.out.println("sum is " + sum + ", adding " + (char)(sum+65));
                ans = (char)(sum + 65) + ans;
                spacesFromEnd++;
            }

            while(ans.charAt(0) == 'A'){
                ans = ans.substring(1);
            }

            System.out.println(ans);
        }
        scn.close();       
    }
}
