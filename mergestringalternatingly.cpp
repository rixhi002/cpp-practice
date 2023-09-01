// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     string alternate(string word1,string word2)
//     {   
//         string merged;
//         size_t len1=word1.length();
//         size_t len2=word2.length();
//         size_t maxlen=len1+len2;
//         for(size_t i=0;i<maxlen;i++)
//         {
//             if(i<len1)
//             {
//                 merged+word1[i];
//             }
//             if(i<len2)
//             {
//                 merged+=word2[i];
//             }
//         }
//         return merged;
//     }
// };
// int main()
// {
//     string word1,word2;
//     getline(cin,word1);
//     getline(cin,word2);
//     Solution obj;
//     string ans=obj.alternate(word1,word2);
//     cout<<ans;
//     return 0;
// }
#include <iostream>
#include <string>

std::string mergeStringsAlternating(std::string word1, std::string word2) {
    std::string merged = "";
    size_t len1 = word1.length();
    size_t len2 = word2.length();
    size_t maxLen = std::max(len1, len2);

    for (size_t i = 0; i < maxLen; ++i) {
        if (i < len1) {
            merged += word1[i];
        }
        if (i < len2) {
            merged += word2[i];
        }
    }

    return merged;
}

int main() {
    std::string word1 = "abc";
    std::string word2 = "defgh";
    std::string result = mergeStringsAlternating(word1, word2);
    std::cout << result << std::endl;  // Output: "adbecfgh"

    return 0;
}
