//https://dmoj.ca/problem/dwite12c1p4
//2021
#include <bits/stdc++.h>

using namespace std;

int main(){
	for (int T = 0; T < 5; T++){
		int open_brackets = 0, path = 0, candies = 0, depth = 0, max_depth = 0;

	    string line;
        getline(cin, line);
		
		int length = line.length();

		for (int i = 0; i < length; i++){
			int current = (int)line.at(i);
			if (current == 40){
				open_brackets++;
				depth++;
				if (depth > max_depth){
					max_depth = depth;
				}
			} else {
				if (current == 41){
					depth--;
				} else{ 
					if (current == 32){
						//nothing
					} else {// number
						int next = (int)line.at(i+1);

						if (next == 40 || next == 41 || next == 32){
							candies += current - 48;
						} else{
							candies += (current - 48)*10 + next-48;
							i++;
						}
					}
				}
			}
		}
		path = open_brackets*4 - max_depth;
		cout << path <<" " << candies << endl;
	}
	return 0;
}

Java: 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		for (int T = 0; T < 5; T++){
			int open_brackets = 0, path = 0, candies = 0, depth = 0, max_depth = 0;

			Scanner s = new Scanner(System.in);
			String line = s.nextLine();

			int length = line.length();

			for (int i = 0; i < length; i++){
				int current = (int)line.charAt(i);
				if (current == 40){
					open_brackets++;
					depth++;
					if (depth > max_depth){
						max_depth = depth;
					}
				} else {
					if (current == 41){
						depth--;
					} else{ 
						if (current == 32){
							//nothing
						} else {// number
							int next = (int)line.charAt(i+1);

							if (next == 40 || next == 32 || next == 41){
								candies += current - 48;
							} else{
								candies += (current - 48)*10 + next-48;
								i++;
							}
						}
					}
				}
			}
			path = open_brackets*4 - max_depth;
			System.out.println(path + " " + candies);
		}
	}
}
