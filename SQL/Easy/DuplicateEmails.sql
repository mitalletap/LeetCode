# Write a SQL query to find all duplicate emails in a table named Person.
#+----+---------+
#| Id | Email   |
#+----+---------+
#| 1  | a@b.com |
#| 2  | c@d.com |
#| 3  | a@b.com |
#+----+---------+
#
# Solution:
# Select the data you want to get results for (email)
# Select the table from which you want to retrieve the data
# Group similar emails
# return all emails with a count greate than 1
#
# Statistics
# Runtime: 462ms
# Memory Usage: 0B

# Write your MySQL query statement below
SELECT email 
FROM Person
GROUP BY email
HAVING count(email) > 1;