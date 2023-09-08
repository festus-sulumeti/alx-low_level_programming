Hash Tables in C
This project implements a hash table data structure in C. A hash table is a data structure that maps keys to values. The keys are hashed into a table of buckets, and the values are stored in the corresponding buckets.

Features
The hash table supports the following operations:
Insert a key-value pair
Delete a key-value pair
Look up a value by key
Iterate over all key-value pairs
The hash table is implemented using a chaining collision resolution strategy.
The hash table is dynamically resized as needed to accommodate new key-value pairs.
Usage
To use the hash table, you must first create an instance of the HashTable struct. You can then use the following functions to manage the hash table:

1. hash_table_init(): Initialize the hash table.
2. hash_table_insert(): Insert a key-value pair into the hash table.
3. hash_table_delete(): Delete a key-value pair from the hash table.
4. hash_table_lookup(): Look up a value by key.
5. hash_table_iterate(): Iterate over all key-value pairs in the hash table.
