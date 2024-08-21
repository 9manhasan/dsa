from typing import List

def removeElement(nums: List[int], val: int) -> int:
    # Initialize a pointer for the current position
    i = 0
    # Iterate over the list
    while i < len(nums):
        if nums[i] == val:
            # Remove the element if it matches the value
            nums.pop(i)
        else:
            # Move to the next element if no removal
            i += 1
    return len(nums)

# Example usage
if __name__ == "__main__":
    nums = [3, 2, 2, 2, 2, 2, 2, 2, 3]
    val = 3
    length = removeElement(nums, val)
    print(nums[:length])  # Output: [2, 2]

