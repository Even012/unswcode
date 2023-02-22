# Relational Data Model

## Formal definition

- relation schema R               R(A1, A2, A3 ..., An)
- Attributes in R                      e.g., STUDENT(Name, Sid, Age, GPA)

## Characteristics of Relations

- Ordering of Tuples in a Relation: no order (each coloum)
- Ordering of Values within a tuple : ordered (each row)
- Values and NULLs in the Tuples: each value in a tuple is an **atomic** value

## Integrity Constraints 

- Domain Constaints: not all numbers make sense
- Superkeys and keys can't be the same
- NULL value contraint: key can't be NULL

## Referential Integrity

related to Foreign Key (FK)



# ER to Relational Data Model Mapping

## Guiding Example

![Guiding Example](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_01.png)

## 7 steps

### Step1: Mapping strong entity...

![step1](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_02.png)

### Step2: Mapping weak entity

![step2](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_03.png)

### Step3: Mapping 1:1 Relationshiop Types

1:1     partial as primary(be pointed) ; total as chosen

![step3](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_04.png)

### Step4: Mapping 1:N

1:N    1 as primary(be pointed) ; N as chosen

![step4](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_05.png)

### Step5: Mapping M:N

![step5](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_06.png)

### Step6: Mapping Multivalued Attributes

![step6](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_07.png)

### Step7:Mapping N-ary Relationship



## Summary

1. create new? Yes (only m-n relation)
2. NO?(1-1 or 1-n relation) --> which one as a base (total)



## Confuses

What if not set entity with no total participation as base? 

E.g.

Employee : SSN		Fname		Lname		Bday	**MDname**	Mdate

Department: Name	Location

