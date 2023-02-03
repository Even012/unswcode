## TUT预习

## Constructing matrices in R 



### identity matrix: 恒等矩阵/单位矩阵

### Diagonal matrix: 对角矩阵		

​	diag(n): 标量对角矩阵 'n' is scalar integar.

​	diag(x): 向量对角矩阵 x is a vector of length 'n'

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213439647.png" alt="image-20220913213439647" style="zoom:50%;" />



### matrix方法

matrix(1,n,n)

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213501655.png" alt="image-20220913213501655" style="zoom: 50%;" />

matrix(1,n,p)

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213530681.png" alt="image-20220913213530681" style="zoom: 50%;" />

matrix(x,n,p)

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213657445.png" alt="image-20220913213657445" style="zoom:50%;" />

matrix(1,n)	----默认row

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213742572.png" alt="image-20220913213742572" style="zoom:50%;" />

matrix(1,ncol=n)

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913213843916.png" alt="image-20220913213843916" style="zoom:50%;" />



### bind方法

cbind(2,3,4)	----列绑定

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913214519135.png" alt="image-20220913214519135" style="zoom:50%;" />

rbind(2,3,4)	----行绑定

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913214340884.png" alt="image-20220913214340884" style="zoom:50%;" />



## Matrix arithmetic(四则运算) and operations 

```
* Arithmetic operations `+`, `-`, `*`, `/`, etc. perform operations elementwise, as do many functions such as `exp()` and `sin()`.
* Matrix product is `%*%`: not `*`!
```



## Matrix functions 

- Dim(X), nrow(X), ncol(X)	obtain matrix dimensions
- t(X)    transpose of 'X'    ---- 转置
- c(X) convert a matrix into a dimensionless vector

<img src="/Users/chenyuanjian/Library/Application Support/typora-user-images/image-20220913220603572.png" alt="image-20220913220603572" style="zoom:50%;" />

- solve(X)         ---- inverse of 'X'    逆矩阵
- crossprod     ---- cross product 向量叉积
- chol(X)           ---- cholesky decomposition cholesky分解
- eigen(X)         ---- Eigendecomposition 特征分解



## Rowwise and columnwise computation 

apply(X, MARGIN, FUN)

sweep(X, MARGIN, STATS, FUN)

`colMeans`, `rowMeans`, `colSums`, `rowSums`: exactly as it sounds.

scale(X)





covariance 协方差

？covariance matrix 协方差矩阵？