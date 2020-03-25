#include <iostream>
using namespace std;
void PrintFail( int a[30] , int Total)
{
	int Num = 0 ; 
	int NoF = 0 ; //不及格人数 
	for( Num = 0 ; Num < Total ; Num++)
	{
		if( a[Num] < 60)
		{
			NoF++ ;
		} 
	}
	
	cout << "不及格人数为" << NoF << endl ;
	cout <<"学号和成绩为：" << endl ; 
	
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
	int  total , i , j ;//Aver为均分，total为总分
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
			j++ ; //低于均分人数 
		} 
	}
	cout << "平均分为" << Aver << "  " ;
	cout << "高于均分人数为" << j << endl ;
	cout <<"学号和成绩为：" << endl ; 
	
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
	e = 0 ;//以下 
	
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
	
	cout << "100分的人有" << A << "个，占比" << 100.0*A/Total << "%" << endl ;  
	cout << "90~100分的人有" << a << "个，占比" << 100.0*a/Total << "%" << endl ;  
	cout << "80~90分的人有" << b << "个，占比" << 100.0*b/Total << "%" << endl ;  
	cout << "70~80分的人有" << c << "个，占比" << 100.0*c/Total << "%" << endl ;  
	cout << "60~70分的人有" << d << "个，占比" << 100.0*d/Total << "%" << endl ;  
	cout << "60分以下的人有" << e << "个，占比" << 100.0*e/Total << "%" << endl ;  
} 


int main()
{
	int a[30] ;
	int i , Total ;
	cout << "请输入成绩,每输入一次按下回车" << endl ; 
	
	for( i = 0 ; i < 30 ; i++)
	{
		cin >> a[i];
		if( a[i] < 0)
		{
			break;
			
		}
	}
	
	Total = i ;
	cout << "共输入" << i << "人" << endl ; 
	PrintFail( a , Total );
	PrintAver( a , Total );
	PrintPer( a , Total);
 } 
 	
 	
		
