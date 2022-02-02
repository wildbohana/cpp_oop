// Šta će biti ispisano posle izvršavanja sledećeg koda?

// file: A.java
public class A
{
	public int a;		// izgleda da ovakvo a dobije vrednost 0 ??
}

// file: Test.java
public class Test
{
	private static void ispisiListu(ArrayList<A> lista)
	{
		for(A item : lista)
		{
			System.out.print(item.a);
		}
	}
	
	public static void main(String[] args)
	{
		A a1 = new A();			// 0
		A a2 = new A();			// 0
		A a3 = new A();			// 0
		A a4 = new A();			// 0

		ArrayList<A> lista = new ArrayList<A>();

		lista.add(a1);			// 0

		a2.a = a1.a+1;			// a2 = 0+1 = 1
		lista.add(a2);			// 1

		a3 = a2;				// a3 = 1 - NE DODAJE SE U LISTU ALI UTIČE NA A2
		
		lista.add(a4);			// a4 = 0

		ispisiListu(lista);		// 010

		a1.a = 1;				// a1 = 1
		a2.a = 2;				// a2 = 2
		a3.a = 3;				// a3 = 3 - nije u listi pa se ne ispisuje, ali kako su a3=a2, onda i a2 postaje 3
		a4.a = 4;				// a4 = 4

		ispisiListu(lista);		// 134
	}
}

// ISPIS: 010134