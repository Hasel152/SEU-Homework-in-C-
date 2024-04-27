class CPoly
{
private:
	int degree;  //最高项次数
	double coef[10];  //各项系数
public:
	CPoly();
	CPoly(double, double); //构造一次多项式
	CPoly(double, double, double); //构造二次多项式
	CPoly(CPoly&);  //复制构造函数
	CPoly Add(CPoly&);  //多项式加
	CPoly Sub(CPoly&);  //多项式减
	CPoly Mul(CPoly&);  //多项式乘
	void Print(void); //打印多项式
};
