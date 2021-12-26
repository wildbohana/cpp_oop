package skolskiPriborJava;

public class Test {	
	public static void main(String[] args) {
		Bojica b1 = new Bojica("123abc", 23.9, "drvena", "zelena");
		Bojica b2 = new Bojica("456mnk", 57.4, "vostana", "plava");
		Bojica b3 = new Bojica("789edf", 45.6, "drvena", "zuta");
		Bojica b4 = new Bojica("035sdv", 68.3, "vostana", "bela");
		Bojica b = new Bojica(b1);
		
		System.out.println(b);
		b.akcijskaCena(7);
		System.out.println(b);
		
		Pernica p = new Pernica();
		
		p.dodaj(b1);
		p.dodaj(b2);
		p.dodaj(b3);
		p.dodaj(b4);
		System.out.println(p.toString());
	
		System.out.println("broj bojica sa cenom vecom od zadate: " + p.prebroj(50.5));
	}
}
