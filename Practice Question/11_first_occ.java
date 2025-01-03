class Solution {
    public int strStr(String haystack, String needle) {

        // return haystack.indexOf(needle);

        // if (needle.isEmpty()) return 0; 
        // if (haystack.length() < needle.length()) return -1;

        // for (int i = 0; i <= haystack.length() - needle.length(); i++) {
        //     int j = 0;
        //     for (; j < needle.length(); j++) {
        //         if (haystack.charAt(i + j) != needle.charAt(j)) 
        //         {
        //             break; 
        //         }
        //     }
        //     if (j == needle.length()) {
        //         return i; 
        //     }
        // }
        // return -1;

        int index=-1;

        for (int i = 0; i <= haystack.length() - needle.length(); i++) 
        { 
            if (haystack.charAt(i) == needle.charAt(0)) 
            { 
                index = i; 
                for (int j = 1; j < needle.length(); j++) 
                {
                    if (haystack.charAt(i + j) != needle.charAt(j)) 
                    {
                        index = -1; 
                        break; 
                    }
                }
                if (index != -1) { 
                    return index;
                }
            }
        }

        return -1;
        
    }
}
