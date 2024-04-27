#include<iostream>
using namespace std;

template<typename T, int size>class seqlist{
public:
	T data_[size];
	int Maxsize;
	int last;
public:
	seqlist(){last = -1; Maxsize = size;}

	T sum() const{
		T total = 0;
		for (int i = 0; i <= last; ++i){
			total +=data_[i];			
		}
		return total;
	}

	bool insert(const T& value, int pos){
		if( pos > last + 1|| pos < 0 ||last + 1 == Maxsize ){
			return false;
		}else{
			
			for(int i = last+1; i > pos; i-- ){
				data_[i] = data_[i-1];
			}
			last++;
		}
		data_[pos] = value;
		return true;
	}
	void printlist(){
		for(int i = 0; i <= last; i++){
			cout<<data_[i]<<' ';
		}
		cout<<endl;
	}
	bool insertlist( const seqlist &other, int pos){
		if(pos < 0 || pos > last + 1|| (last + 1)+(other.last + 1) > Maxsize){
			return false;
		}
		else{	
			for(int i = 0; i <= other.last; i++){
				insert(other.data_[i], pos++);
			}
			return true;
		}
	}
	bool removelist(int pos, int num){	
		if(pos < 0 || pos >= last){
			return false;
		}else{
			for(int i = pos + num; i <= last; i++){
				data_[i - num] = data_[i];
			}
			if(last-pos>num){
				last -=num;
			}else{
				last = pos - 1;
			}
			return true;
		 }
		
	}
};



int main()
{
	seqlist<int, 15> seq1, seq2;
	int a1[10]={1,2,3,4,5,6,7,8,9,10};
	int a2[5]={10,20,30,40,50};
	int i;
	int result;

	for (i=0; i<10; i++)
	{
		seq1.insert(a1[i], i);
	}
	cout<<"list1: ";
	seq1.printlist();
	cout<<"sum of list1: ";
	cout<<seq1.sum()<<endl;

	for (i=0; i<5; i++)
	{
		seq2.insert(a2[i], i);
	}
	cout<<"list2: ";
	seq2.printlist();
	cout<<"sum of list2: ";
	cout<<seq2.sum()<<endl;

	for (i=0; i<2; i++)
	{
		cout<<endl<<"insert list2 into list1 after the 5th node"<<endl;
		result=seq1.insertlist(seq2, 5);
		if (!result)
		{
			cout<<"--operation failed!"<<endl;
		}
		cout<<"list1: ";
		seq1.printlist();
		cout<<"sum of list1: ";
		cout<<seq1.sum()<<endl;
		cout<<"list2: ";
		seq2.printlist();
		cout<<"sum of list2: ";
		cout<<seq2.sum()<<endl;
	}

	for (i=0; i<3; i++)
	{
		cout<<endl<<"remove 3 elements from the list1 after the 10th node"<<endl;
		result=seq1.removelist(10, 3);
		if (!result)
		{
			cout<<"--operation failed!"<<endl;
		}
		cout<<"list1: ";
		seq1.printlist();
		cout<<"sum of list1: ";
		cout<<seq1.sum()<<endl;
	}

		return 0;
}
