class Solution {
    public int lengthOfLongestSubstring(String s) {//abcabcbb
        int count = 0;
        StringBuilder s1 = new StringBuilder();//"","a","ab","abc","bc","bca","ca","cab",
                                                // "abc","c","cb","","b"
        for (int i = 0; i < s.length(); i++) {
            String c = String.valueOf(s.charAt(i));//a,b,c,a,b,c,b,b
            
            if (s1.toString().contains(c)) {//false,false,false,true
                int index = s1.indexOf(c);
                s1.delete(0, index + 1); 
                s1.append(c);
            } else {
                s1.append(c);
                count = Math.max(count, s1.length());//0,1=1,1,2=2, 3
            }
        }
        
        return count;
    }
}

/*
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int count = 0; // To store the maximum length of the substring
        String currentSubstring = ""; // To store the current substring without duplicates

        for (int i = 0; i < s.length(); i++) {
            String c = String.valueOf(s.charAt(i)); // Current character

            if (!currentSubstring.contains(c)) {
                currentSubstring += c; // Append character to current substring
                count = Math.max(count, currentSubstring.length()); // Update maximum length
            } else {
                int duplicateIndex = currentSubstring.indexOf(c); // Find index of duplicate
                currentSubstring = currentSubstring.substring(duplicateIndex + 1) + c; // Remove duplicate and append current character
            }
        }

        return count;
    }
}
*/
