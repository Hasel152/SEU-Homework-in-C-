class CPoly
{
private:
	int degree;  //��������
	double coef[10];  //����ϵ��
public:
	CPoly();
	CPoly(double, double); //����һ�ζ���ʽ
	CPoly(double, double, double); //������ζ���ʽ
	CPoly(CPoly&);  //���ƹ��캯��
	CPoly Add(CPoly&);  //����ʽ��
	CPoly Sub(CPoly&);  //����ʽ��
	CPoly Mul(CPoly&);  //����ʽ��
	void Print(void); //��ӡ����ʽ
};
