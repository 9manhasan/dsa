from typing import List

def canPlaceFlowers(flowerbed: List[int], n: int) -> bool:
    if n == 0:
        return True
    count = 0
    length = len(flowerbed)
    for i in range(length):
        # Check if we can plant a flower at position i
        if flowerbed[i] == 0:
            # Check if the left and right positions are empty or out of bounds
            if (i == 0 or flowerbed[i - 1] == 0) and (i == length - 1 or flowerbed[i + 1] == 0):
                flowerbed[i] = 1  # Plant a flower
                count += 1  # Increment the count of planted flowers
                if count >= n:  # Check if we have planted enough flowers
                    return True
    return False  # Return false if not enough flowers can be planted

if __name__ == "__main__":
    flowerbed = [1, 0, 0, 0, 1]
    n = 1
    res = canPlaceFlowers(flowerbed, n)
    print(res)  # Output: True
