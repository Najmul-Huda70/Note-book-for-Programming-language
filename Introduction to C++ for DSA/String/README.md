# String

## string built in function : https://docs.google.com/document/d/1MoFcjywdG9vqa6MNfvnave15W4DE0wYpX5uzNsXno6w/edit?usp=sharing


# String Problem : 
1. https://leetcode.com/problems/zigzag-conversion/description/?envType=problem-list-v2&envId=string
   ## Zigzag Pattern :
   
Zigzag Pattern হলো এমন একটি প্যাটার্ন যেখানে অক্ষর বা সংখ্যা গুলোকে এমনভাবে সাজানো হয় যেন তা "Z" আকৃতির হয়। এটি সাধারণত একটি সংখ্যা বা স্ট্রিংকে বিভিন্ন সারিতে সাজিয়ে পড়ে বের করা হয়।

উদাহরণ:
ধরা যাক, আমাদের ইনপুট স্ট্রিং:
"PAYPALISHIRING"
এটি যদি 3 Rows এ Zigzag আকারে সাজানো হয়, তাহলে তা দেখাবে:

P   A   H   N
A P L S I I G
Y   I   R
এখন, প্রতিটি row থেকে অক্ষর গুলো পড়লে পাওয়া যাবে:
"PAHNAPLSIIGYIR"

Zigzag কিভাবে কাজ করে?
1. প্রথম অক্ষর থেকে শুরু করে নিচে নামতে থাকবো যতক্ষণ না শেষ Row তে পৌঁছি।
2. শেষ Row তে গেলে আবার উপরে উঠতে থাকবো যতক্ষণ না প্রথম Row তে আসি।
3. এইভাবে দিক পরিবর্তন করতে থাকবো যতক্ষণ না সম্পূর্ণ স্ট্রিং শেষ হয়।
4. সব Row এর অক্ষর গুলো একসাথে জুড়ে দিলে চূড়ান্ত Zigzag স্ট্রিং পাওয়া যাবে।

   
