// Šta će biti ispisano posle izvršavanja sledećeg koda?

public class Test
{
	private double r = 3;
	public Test(double r) {this.r = r++;}
	public double getR() {return ++r;}
}

// Main nije unutar klase Test, zato neće da radi program
public static void main(String[] args)
{
	Test t = new Test(1);
	System.out.printin(t.getR());
}

// Program se neće izvršiti jer ćemo dobiti upozorenje o grešci.
