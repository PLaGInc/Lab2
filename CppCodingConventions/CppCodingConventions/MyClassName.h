#pragma once


// ���������� ������. ������ ���������� � ��������� ����� C � ���������� ����������������
class CMyClassName
{	// ����������� ������ �� ����� ������ �� ����� ������ �� ������ class
public: // ������� ������������� ������ public, ���������� ��������� ������ ������
	CMyClassName();
	~CMyClassName();

	// ��� ������ ���������� ����������������, ���������� � ��������� �����
	// ����� ���������� ������� ���������� � ��������� ����� � ���������� ����������������
	void DoSomething(int parameterName, int someAnotherMethodName);

		// ����� ������������� ������ protected, ���������� ���������� ������ ������
protected:
	// ������, �� ���������� ��������� ������ (��� ������) ����������� ��� �����������
	int SomeProtectedMethod(int someParameter)const;

	// � ����� ����� ������������� ������ private, ���������� �������� (���������) ������ � ������ ������
private:
	// ����������-����� ������ ���������� ���������������� � ������� m_, 
	// ����� �� ������ � ����������� ����������� � ����������� ������
	int m_memberVariable;
};

