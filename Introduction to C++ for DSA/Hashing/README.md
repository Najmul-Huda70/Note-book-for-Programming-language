# Hashing in Data Structure
## Resource : https://www.geeksforgeeks.org/hashing-data-structure/

1. হ্যাশিং হল ডেটা স্ট্রাকচারে ব্যবহৃত একটি কৌশল যা দক্ষতার সাথে ডেটা সঞ্চয় করে এবং পুনরুদ্ধার করে যাতে দ্রুত অ্যাক্সেস করা যায়।
  
2. হ্যাশিং একটি হ্যাশ ফাংশন ব্যবহার করে একটি হ্যাশ টেবিলের (আইটেমগুলির একটি অ্যারে) একটি নির্দিষ্ট সূচকে ডেটা ম্যাপিং জড়িত যা এর কী এর উপর ভিত্তি করে তথ্য দ্রুত পুনরুদ্ধার করতে সক্ষম করে।

3. হ্যাশিং সম্পর্কে দুর্দান্ত জিনিস হল, আমরা গড়ে O(1) সময়ে তিনটি অপারেশন (সার্চ, ইনসার্ট এবং ডিলিট) অর্জন করতে পারি।
  
4. হ্যাশিং প্রধানত স্বতন্ত্র আইটেম এবং অভিধান (কী মান জোড়া) একটি সেট বাস্তবায়ন করতে ব্যবহৃত হয়।

1) Hashing is a technique used in data structures that efficiently stores and retrieves data in a way that allows for quick access.

2) Hashing involves mapping data to a specific index in a hash table (an array of items) using a hash function that enables fast retrieval of information based on its key.
3) The great thing about hashing is, we can achieve all three operations (search, insert and delete) in O(1) time on average.
4) Hashing is mainly used to implement a set of distinct items and dictionaries (key value pairs).


## Components of Hashing
There are majorly three components of hashing:

1. Key: A Key can be anything string or integer which is fed as input in the hash function the technique that determines an index or location for storage of an item in a data structure.
2. Hash Function: Receives the input key and returns the index of an element in an array called a hash table. The index is known as the hash index .
3. Hash Table: Hash table is typically an array of lists. It stores values corresponding to the keys. Hash stores the data in an associative manner in an array where each data value has its own unique index.

# Problem- 01: 
## Codeforces Ratings 1100 || Vitaliy and Pie

link : https://codeforces.com/problemset/problem/525/A
