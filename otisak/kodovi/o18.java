// Šta će biti ispisano posle izvršavanja sledećeg koda?

public class Test
{
	private double r = 3;
	public Test(double r) {this.r = r++;}
	public double getR() {return ++r;}
}

public static void main(String[] args)
{
	Test t = new Test(1);
	System.out.printin(t.getR());
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.

/*
Main treba da bude unutar klase Test da bi radio

public class Test
{
	public static void main(String[] args)
	{
		...
	}
}
*/
