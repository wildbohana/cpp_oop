package skolskiPriborJava;

import java.util.HashMap;

public class Pernica {

	private HashMap<String, Bojica> bojice;
	private int raspolozivoMesta = 5;
	
	public Pernica() {
		super();
		bojice = new HashMap<String, Bojica>();
	}
	
	public boolean dodaj(Bojica b) {
		if(bojice.containsKey(b.getSerijskiBroj()))
			return false;
		
		if(bojice.size() < raspolozivoMesta) {
			bojice.put(b.getSerijskiBroj(), b);
			return true;
		}
		
		return false;
	}
	
	public int prebroj(double cena) {
		int brojac = 0;
		
		for(Bojica b : bojice.values()) 
			if(b.getCena() > cena)
				brojac++;
		
		return brojac;
	}

	@Override
	public String toString() {
		if(bojice.size() == 0)
			return "\nPernica je prazna!";
		
		String s = "\nU pernici se nalaze sledece bojice:\n";
		for(Bojica b : bojice.values())
			s += b + "\n";
		
		return s;
	}
	
}
