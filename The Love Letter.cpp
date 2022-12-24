//https://dmoj.ca/problem/ac19p2
//2021
import java.io.*;

public class Main {

	public static void main(String[] args) {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	int N = 0, L= 0; //N is length, L is the shift
		String S = ""; // coded
		String U = ""; // uncoded

		try{
			N = Integer.parseInt(br.readLine());
			L = Integer.parseInt(br.readLine());
			S = br.readLine();
			br.close();
		} catch(IOException err){
			System.out.println(err);
		}
		L = L % 26;
	
		for (int i = 0; i < N; i++){
			if (S.charAt(i) == ' '){
				U += " ";
			}
			else {
				if ((int)S.charAt(i) + L > 122){
					U += (char)((int)S.charAt(i) + L - 26);
				} else{
					U += (char)((int)S.charAt(i) + L);
				}
			}
		}
		System.out.println(U);
	}
}
