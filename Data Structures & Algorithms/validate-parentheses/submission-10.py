class Solution:
    def isValid(self, s: str) -> bool:
        bi = ["(", "{", "["]
        bf = [")", "}", "]"]
        st = []
        if s[0] in bf:
            return False
        for i in s:
            print(st, 1)
            if i in bi:
                print(i, 2)
                st.append(i)
            else:
                print(i, 3)
                if len(st) == 0:
                    return False
                if bi[bf.index(i)] == st[-1]:
                    print(st, i, 4)
                    st.pop()
                else:
                    print(st, i, 5)
                    return False
        if len(st) == 0:
            return True
        else:
            return False