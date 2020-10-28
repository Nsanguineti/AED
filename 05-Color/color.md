# Color
---
## Tipo de dato Color

* Color = {c = (r,g,b)/r,g,b ∈ ℕ ∧ r,g,b ∈ [0,255]}
---
## Conjunto de Operaciones

* *F. Mezclar*

  mezclar: color x color -> color
  
    Sean c1 = (r1,g1,b1) ∧ c2 = (r2,g2,b2)
    
    mezclar (c1,c2) = c3 = (r3,g3,b3) = ((r1+r2)/2,(g1+g2)/2,(b1+b2)/2)

* *F. Mezclar desigual*

  mezclar_desigual: color x ℕ x color ℕ -> color
  
    sean c1 = (r1,g1,b1) ∧ c2 = (r2,g2,b2) ∧ a ∧ b, (a,b) ∈ ℕ
    
    mezclar_desigual (c1,c2) = c3 = (r3,g3,b3) = ((r1+r2)/(a+b),(g1+g2)/(a+b),(b1+b2)/(a+b))
    
* *F. Sumar*
  
  sumar: color x color -> color
  
* *F. Restar*

  restar: color x color -> color
  
* *F. GetComplementario*

  GetComplementario: color -> color
  
* *F. GetHtmlHex*

  GetHtmlHex: color -> string
  
* *F. GetHtmlRgb*

  GetHtmlRgb: color -> string
  
* *F. IsIgual*

  IsIgual: color x color -> 𝔹
  
  sean sean c1 = (r1,g1,b1) ∧ c2 = (r2,g2,b2)
  
  IsIgual (c1,c2) = True si (r1=r2, g1=g2, b1=b2) ∧ False si (cualquier otro caso)
  
    
