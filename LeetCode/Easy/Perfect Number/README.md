# Perfect Number

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 3, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/perfect-number/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

<p>A <a href="https://en.wikipedia.org/wiki/Perfect_number" target="_blank"><strong>perfect number</strong></a> is a <strong>positive integer</strong> that is equal to the sum of its <strong>positive divisors</strong>, excluding the number itself. A <strong>divisor</strong> of an integer <code>x</code> is an integer that can divide <code>x</code> evenly.</p>

<p>Given an integer <code>n</code>, return <code>true</code><em> if </em><code>n</code><em> is a perfect number, otherwise return </em><code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> num = 28
<strong>Output:</strong> true
<strong>Explanation:</strong> 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> num = 7
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= num &lt;= 10<sup>8</sup></code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: C++ 6 lines 'normal' solution ( 3 lines actually...)
**Author**: [@zefengsong](https://leetcode.com/zefengsong/)
**Upvotes**: 20 👍
**Link**: [View Original Post](https://leetcode.com/problems/perfect-number/solutions/98600/)

---

```
    bool checkPerfectNumber(int num) {
        vector<int>res(1,1);
        int upper=num;
        for(int i=2;i<upper;i++) if(num%i==0) res.push_back(i), res.push_back(num/i), upper=num/i;
        int sum=0;
        for(auto i:res) sum+=i;
        return sum==num && num!=1;
    }
```
***
**Update(8/6/2017):** I just found I don't need to keep updating `upper` if I know where it will land (when i == num/i, it doesn't matter if i< or <= sqrt(num) as explained in comment), and it reduces run time from 1055ms to 3ms, well...
```
    bool checkPerfectNumber(int num) {
        vector<int>res(1,1);
        for(int i=2;i<sqrt(num);i++) if(num%i==0) res.push_back(i), res.push_back(num/i);
        int sum=0;
        for(auto i:res) sum+=i;
        return sum==num && num!=1;
    }
```
***
**Update:** Why would  I need a vector?
```
    bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<sqrt(num);i++) if(num%i==0) sum += i + num/i;
        return sum==num && num!=1;
    }
```
***
Thanks @MAPLELEAF2012 for advice. 
The comprehensive version if we take the perfect square into account, in which case sum(49) is 1+7=8, not 1+7+7=15 or 1.
```
    bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<=sqrt(num);i++) if(num%i==0) sum += i + (i==num/i ? 0 : num/i);
        return sum==num && num!=1;
    }
```

</details>
