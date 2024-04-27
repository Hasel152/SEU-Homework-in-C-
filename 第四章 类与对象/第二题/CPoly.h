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
	CPoly operator+(CPoly&);  //����ʽ��
	CPoly operator-(CPoly&);  //����ʽ��
	CPoly operator*(CPoly&);  //����ʽ��
	CPoly operator+=(CPoly&);
	void Print(void); //��ӡ����ʽ
};
