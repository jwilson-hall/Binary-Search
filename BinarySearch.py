def Binary_Search(sortedList, target):
    sortedList.sort()
    if len(sortedList) == 0:
        return -1
    left = 0
    right = len(sortedList) - 1
    while left <= right:
        midpoint = left + (right - left) / 2
        midpoint = int(midpoint)
        if sortedList[midpoint] == target:
            return midpoint
        elif sortedList[midpoint] > target:
            right = midpoint - 1
        else:
            left = midpoint + 1
    return -1
