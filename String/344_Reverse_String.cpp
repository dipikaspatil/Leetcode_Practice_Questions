/* 344. Reverse String 
Write a function that takes a string as input and returns the string reversed.

Example 1:

Input: "hello"
Output: "olleh"
Example 2:

Input: "A man, a plan, a canal: Panama"
Output: "amanaP :lanac a ,nalp a ,nam A"
*/

class Solution {
public:
    string reverseString(string s) {
        int len = s.length()-1, size = s.length()/2;
        if ((len+1) == 1) {
            return s;
        }
        char c1;
        //cout << "size " << size << endl;
        for (int i = 0; i < size; ++i){
            //cout << s[i] << " " << s[len-i] << endl;
            c1 = s[i];
            s[i] = s[len-i];
            s[len-i] = c1;
        }
        
        return s;
    }
};