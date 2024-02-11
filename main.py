def maxLengthBetweenEqualCharacters(s):
    res = -1
    for i in range(len(s)):
        j = len(s) - 1

        while s[i] != s[j] and i < j:
            j -= 1

        if i >= j:
            continue
        else:
            res = max(res, j - i - 1)

    return res

s = "scayofdzca"

print(maxLengthBetweenEqualCharacters(s))