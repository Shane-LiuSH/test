#include <iostream>
using namespace std;
void PrintFail( int a[30] , int Total)
{
	int Num = 0 ; 
	int NoF = 0 ; //���������� 
	for( Num = 0 ; Num < Total ; Num++)
	{
		if( a[Num] < 60)
		{
			NoF++ ;
		} 
	}
	
	cout << "����������Ϊ" << NoF << endl ;
	cout <<"ѧ�źͳɼ�Ϊ��" << endl ; 
	
	for( Num = 0 ; Num < Total ; Num++)
	{
		if( a[Num] < 60)
		{
			cout << Num + 1 << "  " << a[Num] << endl ;
		} 
	}
}

void PrintAver( int a[30] , int Total)
{
	int  total , i , j ;//AverΪ���֣�totalΪ�ܷ�
	float Aver;
	total = 0; 
	
	for( i = 0 ; i < Total ; i++ ) 
	{
		total += a[i]; 	
	}
	
	Aver = total / Total ;
	
	for( i = 0 , j = 0 ; i < Total ; i++)
	{
		if( a[i] >= Aver)
		{
			j++ ; //���ھ������� 
		} 
	}
	cout << "ƽ����Ϊ" << Aver << "  " ;
	cout << "���ھ�������Ϊ" << j << endl ;
	cout <<"ѧ�źͳɼ�Ϊ��" << endl ; 
	
	for( i = 0 ; i < Total ; i++)
	{
		if( a[i] >= Aver)
		{
			cout << i + 1<< "  " << a[i] << endl ; 
		} 
	}
	
}

void PrintPer( int x[30] , int Total)
{
	int  a , b , c , d , e , A , i ;
	A = 0 ;//100
	a = 0 ;//90
	b = 0 ;//80
	c = 0 ;//70
	d = 0 ;//60
	e = 0 ;//���� 
	
	for( i = 0 ; i < Total ; i++)
	{
		
		if( x[i] == 100)
		{
			++A ; 
		} 
		
		if( 90 <= x[i] && x[i] <100 )
		{
			++a ; 
		} 
		
		if( 80 <= x[i]  && x[i] < 90)
		{
			++b ; 
		}
		
		if( 70 <= x[i]  && x[i] < 80)
		{
			++c ; 
		}
		
		if( 60 <= x[i]  && x[i] < 70)
		{
			++d ; 
		}
		
		if( x[i] < 60)
		{
			++e ; 
		}
	}
	
	cout << "100�ֵ�����" << A << "����ռ��" << 100.0*A/Total << "%" << endl ;  
	cout << "90~100�ֵ�����" << a << "����ռ��" << 100.0*a/Total << "%" << endl ;  
	cout << "80~90�ֵ�����" << b << "����ռ��" << 100.0*b/Total << "%" << endl ;  
	cout << "70~80�ֵ�����" << c << "����ռ��" << 100.0*c/Total << "%" << endl ;  
	cout << "60~70�ֵ�����" << d << "����ռ��" << 100.0*d/Total << "%" << endl ;  
	cout << "60�����µ�����" << e << "����ռ��" << 100.0*e/Total << "%" << endl ;  
} 


int main()
{
	int a[30] ;
	int i , Total ;
	cout << "������ɼ�,ÿ����һ�ΰ��»س�" << endl ; 
	
	for( i = 0 ; i < 30 ; i++)
	{
		cin >> a[i];
		if( a[i] < 0)
		{
			break;
			
		}
	}
	
	Total = i ;
	cout << "������" << i << "��" << endl ; 
	PrintFail( a , Total );
	PrintAver( a , Total );
	PrintPer( a , Total);
 } 
 	
 	
		
