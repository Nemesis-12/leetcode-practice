'''
LEETCODE 383. Ransom Note
Given two stings ransomNote and magazine, return true if ransomNote can be
constructed from magazine and false otherwise. Each letter in magazine can only
be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true
'''

from collections import Counter

def canConstruct(ransomNote, magazine):
    return not Counter(ransomNote) - Counter(magazine)

'''
ANOTHER SOLUTION

def canConstruct(ransomNote, magazine):
    for i in set(ransomNote):
        if ransomNote.count(i) > magazine.count(i):
            return False
    return True
'''

def main():
    ransomNote = "aa"
    magazine = "baa"
    rs = canConstruct(ransomNote, magazine)

    print(rs)

if __name__ == "__main__":
    main()