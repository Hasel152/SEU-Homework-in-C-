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
	friend CPoly operator+(CPoly&, CPoly&);  //����ʽ��
	friend CPoly operator-(CPoly&, CPoly&);  //����ʽ��
	friend CPoly operator*(CPoly&, CPoly&);  //����ʽ��
	friend CPoly operator+=(CPoly&, CPoly&);
	void Print(void); //��ӡ����ʽ
};
