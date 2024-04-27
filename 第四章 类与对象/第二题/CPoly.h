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
	CPoly operator+(CPoly&);  //多项式加
	CPoly operator-(CPoly&);  //多项式减
	CPoly operator*(CPoly&);  //多项式乘
	CPoly operator+=(CPoly&);
	void Print(void); //打印多项式
};
