X = cbind(x1,x2,x3,x4,x5)
n = row(X)
S = 1/(n-1) * t(X)%*%(diag(n)-1/n*matrix(1,n,n))%*%X

