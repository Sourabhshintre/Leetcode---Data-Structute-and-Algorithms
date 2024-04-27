class Solution {
    public boolean rotateString(String s, String goal) {
        
        
        String ans;
        ans = s.concat(s);
        if(s.length() == goal.length())
        {
            if(ans.contains(goal))
                return true;
            return false;
        }
        else
        {
            return false;
        }
    }
}