

# Lec 03 Relational Data Model

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

name

attribute

key 

Foreign key

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

M:N   create a new relation R; two keys

![step5](/Users/chenyuanjian/Documents/unsw/2023 T1/9311/img/w2_06.png)

### Step6: Mapping Multivalued Attributes

Multivalued Attributes    create a new relation

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



# Lec04 Relational Algebra



#### select 

The SELECT operation/predicate is used to select a subset of the tuples of a relation R, satisfying some condition C.
$$
\sigma_C(R)
$$
Example:
$$
\sigma_{name='Even'}(STUDENT)\\
\sigma_{(hons='cs') or (hons='ca') and (tutor='goble')}(STUDENT)
$$


#### Project

The PROJECT operation is used to project a subset of the attributes (column) of a relation, where R is a relation and A1,...,Ak are attributes of R.
$$
\pi_{A_1,...,A_k}(R)
$$
Example:
$$
\pi_{tutor}(STUDENT)\\
\pi_{tutor}(\sigma_{name='Even'}(STUDENT))
$$


#### union, intersection, difference

$$
\pi_{name}(STUDENT \cup RESERCHER)\\
\pi_{name}(STUDENT \cap RESERCHER)\\
\pi_{name}(STUDENT - RESERCHER)
$$



#### cartesian product  

$$
R \times S
$$





#### join

$$
A \bowtie B
$$



##### theta join ***

##### equal join: only equal condition in Theta join

##### natural join: join on common attributes

#### 

#### Divide - *all*

Divide  (one relation contains all the res of the other relation)

The relation returned by division operator will have attributes = (All attributes of R – All Attributes of S)
$$
R \div S
$$
always do projection as B.


$$
\pi_{name}(\sigma_{(gender='female' \text{ and } job='designer')}Student \bowtie Enrolment \bowtie JobRequirement)\\
\\
A \leftarrow \pi_{(name)}(Student \bowtie Enrolment \div \pi_{(courseID)}(\sigma_{(job='designer')}(JobRequirement))\\
B \leftarrow...\\
R = A-B\\
\\
$$


#### Aggregate operations

$$
\gamma_{a,SUM(b)}(R)
$$













