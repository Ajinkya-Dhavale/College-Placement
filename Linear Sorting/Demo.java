class Demo{
        public boolean isCircularSentence(String sentence) {
          String[] s=sentence.split(" ");
        //   System.out.println(s);
        boolean b=false;
        for(int i=0;i<s.length;i++)
        {
            if(i==0 && s[0].charAt(0)==s[s.length-1].charAt(s[s.length-1].length()-1))
            {
                b=true;
            }
            if(s[i].charAt(0) == s[i].charAt(s[i].length()-1))
            {
                b=true;
            }
            else{
                b=false;
            }
        }
          return b;  
        }
        public static void main(String[] args) {
            System.err.println(new Demo().isCircularSentence("leetcode exercises sound delightful"));
        }
}