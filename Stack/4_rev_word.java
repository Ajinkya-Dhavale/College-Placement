class Solution {
    public String reverseWords(String s) {
        String[] arr = s.trim().split("\\s+");
        
        List<String> wordList = new ArrayList<>();
        Collections.addAll(wordList, arr);
        
        Collections.reverse(wordList);

        String reversed = String.join(" ", wordList);
        
        return reversed;
    }
}