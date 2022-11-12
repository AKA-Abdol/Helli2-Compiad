def find_max(arr, start):
    idx = start
    for i in range(start + 1, len(arr)):
        if arr[i] > arr[idx]:
            idx = i
    return idx


def selection_sort(arr):
    for i in range(len(arr)):
        idx = find_max(arr, i)
        arr[i], arr[idx] = arr[idx], arr[i]
    

MAX_LIMIT = 1000
def insertion_sort(arr):
    lookup = [0] * MAX_LIMIT
    for x in arr:
        lookup[x] += 1
    
    ans = []
    for i in range(MAX_LIMIT):
        if lookup[i]:
            ans += [i] * lookup[i]
    return ans