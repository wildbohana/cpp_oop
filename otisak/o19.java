// Šta će biti ispisano posle izvršavanja sledećeg koda?

public class Test
{
	public static void main(String[] args)
	{
		String s="Pera;;Ana;;Jovan";
		String parts[] = s.split(";");
		System.out.println(parts.length);
	}
}

// ISPIS: 5

// split(";") deli stringove na svakom mestu gde naiđe na ;
// "pera", "", "ana", "", "jovan"
// dobijemo niz parts čija je dužina broj razdeljenih stringova
