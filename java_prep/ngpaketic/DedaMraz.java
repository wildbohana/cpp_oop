package novogodisnjiPaketicJava;

import java.util.ArrayList;

public class DedaMraz {

	private ArrayList<NovogodisnjiPaketic> novogodisnjiPaketici;

	public DedaMraz() {
		super();
		this.novogodisnjiPaketici = new ArrayList<NovogodisnjiPaketic>();
	}
	
	public boolean pripremiZaIsporuku(NovogodisnjiPaketic np, String o) {
		if(np.spakuj()) {		
			np.setOpis(o);
			np.setSpremanZaIsporuku(true);
			System.out.println("Novogodisnji paketic je spreman za isporuku.");
			return true;
		}
		
		return false;
	}
	
	public boolean dodaj(NovogodisnjiPaketic novogodisnjiPaketic) {
		if(!novogodisnjiPaketic.isSpremanZaIsporuku()) 
			return false;
		
		for(NovogodisnjiPaketic np : novogodisnjiPaketici)
			if(np.equals(novogodisnjiPaketic)) 
				return false;
		
		return novogodisnjiPaketici.add(novogodisnjiPaketic);
	}
	
	public boolean izbaci(String namenjen) {
		for(int i = 0; i < novogodisnjiPaketici.size(); i++)
			if(novogodisnjiPaketici.get(i).getNamenjen().equals(namenjen))
				return novogodisnjiPaketici.remove(novogodisnjiPaketici.get(i));
					
		return false;
	}
	
	@Override
	public String toString() {
		String str = "";
		
		str += "---------------------------- DEDA MRAZ ----------------------------\n";
		
		if(novogodisnjiPaketici.isEmpty())
			str += "Vreca Deda Mraza je trenutno prazna!\n";
		else {
			for(int i = 0; i < novogodisnjiPaketici.size(); i++)
				str += novogodisnjiPaketici.get(i) + "\n";
		}
		
		str += "-------------------------------------------------------------------";
		
		return str;
	}	
}
