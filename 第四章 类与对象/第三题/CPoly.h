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
	friend CPoly operator+(CPoly&, CPoly&);  //多项式加
	friend CPoly operator-(CPoly&, CPoly&);  //多项式减
	friend CPoly operator*(CPoly&, CPoly&);  //多项式乘
	friend CPoly operator+=(CPoly&, CPoly&);
	void Print(void); //打印多项式
};
