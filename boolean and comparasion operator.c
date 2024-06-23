// boolean and comparasion operator ataupun operator perbandingan
// dan logical operator

#include <stdio.h>
#include <stdbool.h>  // header file untuk boolean dalam c

int main (){
	
	bool value1 = true;
	bool value2 = false;
	
	printf("%d\n", value1);  // boolean takde specifik specifier, untuk tunjuk nilai
	                         // kena pakai specifier integer iaitu %d
	printf("%d\n", value2);
	
	/* Comparasion and Logical Operator
	
	Comparasion operator terdiri daripada :
	sama juga dengan / is equal to (==).
    tak sama jugak dengan / is not equal to (!=)
    lebih daripada / greater than (>)
    kurang daripada / less than (<)
    lebih dan sama dengan / greater than or equal to (>=)
    kurang dan sama dengan / less than or equal to (<=) 
    
    dan Logical Operator terdiri daripada :
    Logical AND ( && ) dua dua syarat kena betul
    Logical OR ( || ) salah satu syarat kena betul
    Logical NOT ( ! ) uno reverse card ataupun terbalikkan syarat
	*/
	
	// bawah adalah contoh comparasion operator untuk memyemak true/false sebuah value
	
	value1 = (4 < 2);
	printf("%d\n", value1);
	
	value1 = (4 > 2);
	printf("%d\n", value1);
	
	value1 = (4 >= 4);
	printf("%d\n", value1);
	
	value1 = (3 <= 4);
	printf("%d\n", value1);
	
	value1 = (4 != 4);
	printf("%d\n", value1);
	
	value1 = (4*2 == 8);
	printf("%d\n", value1);
	
	// kau jugak boleh gunakan comparasion operator untuk membezakan nilai variables
	// contoh seperti dibawah :
	
	int num1 = 6;
	int num2 = 7;
	
	bool value = (num1 > num2);
	printf("%d\n", value);
	
	// dan kau boleh gabungkan kedua-dua value dan variable dalam comparasion operator
	
	value = (num1 > 3);
	printf("%d\n", value);
	
	// logical operator
	
	int age = 18;
	int rabun = false;
	
	bool lesen = (age >= 18 && rabun == 1); // && wajib dua dua syarat lepas
	printf("%d\n", lesen);
	
	lesen = (age >= 18 || rabun == 0); // || salah satu syarat lepas dah cukup
	printf("%d\n", lesen);
	
	lesen = !(age >= 18 || rabun == 0); // ! akan terbalikkan nilai dalam kurungan
	                                    // kalau nilainya true akan berubah jadi false
	printf("%d\n", lesen);
	
	return 0;
}
