#include <cstdlib>
// Integer class 

class Integer{
	public:
		Integer(int);
		int get();
		void set(int);
		int fib();
	private:
		int val;
		int privfib(int);
	};

Integer::Integer(int n){
	val = n;
	}
 
int Integer::get(){
	return val;
	}
 
void Integer::set(int n){
	val = n;
	}

int Integer::fib(){
	return privfib(val);
}

int Integer::privfib(int n){
	if (n <= 1){
		return n;
	}
	else{
		return privfib(n-1)+privfib(n-2);
	}
}

extern "C"{
	Integer* Integer_new(int n) {return new Integer(n);}
	int Integer_get(Integer* integer) {return integer->get();}
	void Integer_set(Integer* integer, int n) {integer->set(n);}
	void Integer_delete(Integer* integer){
		if (integer){
			delete integer;
			integer = nullptr;
			}
		}
	int Integer_fib(Integer* integer) {return integer->fib();}
	}
