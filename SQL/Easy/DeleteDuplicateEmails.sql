# Write a SQL query to delete all duplicate email entries in a table named Person, keeping only unique emails based on its smallest Id.
#+----+------------------+
#| Id | Email            |
#+----+------------------+
#| 1  | john@example.com |
#| 2  | bob@example.com  |
#| 3  | john@example.com |
#+----+------------------+
#
# Solution:
# Select the data you want to get results for (email)
# Select the table from which you want to retrieve the data
# Group similar emails
# return all emails with a count greate than 1
#
# Statistics
# Runtime: 1134ms
# Memory Usage: 0B

# Write your MySQL query statement below
DELETE p1 FROM Person p1, Person p2
WHERE p1.Email = p2.Email AND p1.id > p2.id
