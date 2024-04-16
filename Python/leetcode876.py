'''
LEETCODE 876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Example 1:

1 -> 2 -> 3 -> 4 -> 5

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:

1 -> 2 -> 3 -> 4 -> 5 -> 6 ->

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:
The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100
'''

class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

def middleNode(head):
    middle = end = head

    while end and end.next:
        middle = middle.next
        end = end.next.next

    return middle

def createLL(lst):
    if not lst:
        return None
    
    head = ListNode(lst[0])
    current = head

    for val in lst[1:]:
        current.next = ListNode(val)
        current = current.next

    return head

def main():
    head = createLL([1, 2, 3, 4, 5])

    print(middleNode(head).val)

if __name__ == '__main__':
    main()