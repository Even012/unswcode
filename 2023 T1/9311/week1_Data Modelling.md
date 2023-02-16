# Lec01

### Assessment

| **Item**    | **Topics**                          | **Due**     | **Marks** |
| ----------- | ----------------------------------- | ----------- | --------- |
| Assignment1 | Data Modelling + Relational Algebra | Week 4      | 25        |
| Assignment2 | DB design Theory + Transaction      | Week 7      | 25        |
| Project     | SQL and PLpgSQL programming         | Week 9      | 50        |
| Final Exam  | All topics                          | Exam period | 100       |

### Course Schedule

| **Week** | **Lectures**                                                 | **Labs**                                         | **Assignments**        | **Notes** |
| -------- | ------------------------------------------------------------ | ------------------------------------------------ | ---------------------- | --------- |
| 1        | Course introduction, Data Modelling                          | Lab01 – setting up a database server             | -                      | -         |
| 2        | Relational Data Model and Relational Algebra                 | Lab02 – schema definition and data constraints   | Ass1 release           | -         |
| 3        | SQL                                                          | -                                                | -                      | -         |
| 4        | SQL and PLpgSQL programming (I)                              | Lab03 – SQL queries with view definitions        | Ass1 due, Proj release | -         |
| 5        | SQL and PLpgSQL programming (II), Functional Dependencies    | Lab04 - PLpgSQL functions                        | -                      | -         |
| 6        | QUIET WEEK                                                   | QUIET WEEK                                       | -                      | -         |
| 7        | Functional Dependencies and Normal Forms                     | Lab05 - database tiggers                         | Proj due, Ass2 release | -         |
| 8        | Relational DB Designand Database Architecture and Indexes, Query Processing | -                                                | -                      | -         |
| 9        | Transactions, Concurrency and NoSQL                          | Lab06 - a practice on SQLite (an alternative DB) | Ass2 due               | -         |
| 10       | Future DB technologies, course revision                      | -                                                | -                      | -         |



- DDL: Data Definition Language ( used to define schema
- DML: Data Manipulation Language ( used to retrieve and manipulate data
- Top DBMS: Oracle, MySQL, Microsoft SQL Server, PostgreSQL, MongoDB, Redis



# Lec02

ER = Entity Relationship diagram

## **Attribute**

- simple/ atomic attribute

- multivalued attribute

- composite attribute 
- derived attribute

<img src="/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/9311_00.png" alt="Attribute notations" style="zoom:100%;" />

## **Entity** 

### Entity type

- Entity type

- Entity type name

- entity set



Schema and instances correspond to entity type and entity set members (entities).

![Entity type example](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/9311_02.png)

### Entity key

Entities of an entity type, say EMPLOYEE needs a key to distinguish each other in a set.

**Key(super key)—— distinct set of attribute(s)**

Natural key(name, age, salary)

Artificial key(e.g. employee number) compare with natural key



Composite key —— keys contains multiple attributes

Candidate key —— minimal superkey

Primary key



Weak entity depends on the strong entity ( e.g. *strong* employee and *weak* family member)



![pic](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/9311_01.png)



## **Relationship**



**Occurence diagram**

![occurence diagram](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/9311_03.png)



### Degree of relationship (>=2)



### Cardinality 

the number of relationship instances an entity can participate in



### Participation

( **total participation, Partial participation**) 

Total Participation: each entity instance must patriciate in at least one relationship instance.

Partial Participation: not necessarily total.

Example: Not every person has publication





Attributes of relationship (think abt it 