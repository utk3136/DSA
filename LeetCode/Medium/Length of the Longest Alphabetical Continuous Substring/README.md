# Length of the Longest Alphabetical Continuous Substring

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | September 18, 2026 |
| **Tags** | String |
| **Link** | [View Problem](https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/) |
| **Runtime** | 7 ms |
| **Memory** | 18.1 MB |

## Problem Description

<p>An <strong>alphabetical continuous string</strong> is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string <code>"abcdefghijklmnopqrstuvwxyz"</code>.</p>

<ul>
	<li>For example, <code>"abc"</code> is an alphabetical continuous string, while <code>"acb"</code> and <code>"za"</code> are not.</li>
</ul>

<p>Given a string <code>s</code> consisting of lowercase letters only, return the <em>length of the <strong>longest</strong> alphabetical continuous substring.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "abacaba"
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 4 distinct continuous substrings: "a", "b", "c" and "ab".
"ab" is the longest continuous substring.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "abcde"
<strong>Output:</strong> 5
<strong>Explanation:</strong> "abcde" is the longest continuous substring.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of only English lowercase letters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: ✅C++ | ✅Easy and Efficient approach
**Author**: [@Yash2arma](https://leetcode.com/Yash2arma/)
**Upvotes**: 11 👍
**Link**: [View Original Post](https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/solutions/2590098/)

---

```
//Please upvote if it helps :)
class Solution 
{
public:
    int longestContinuousSubstring(string s) 
    {
        int cnt=1, maxi=1, n=s.size(); 
        
        for(int i=0; i<n-1; i++)
        {
            if(s[i]+1 == s[i+1]) cnt++;
            else cnt=1;
            maxi = max(maxi, cnt);   
        }
        return maxi;
    }
};
```

</details>
