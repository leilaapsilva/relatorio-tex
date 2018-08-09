LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_unsigned.all;

ENTITY asd123 IS 
	PORT
	(
		KEY		:	IN		STD_LOGIC_VECTOR (0 DOWNTO 0);	-- botao (acionado para subir/descer)
		SW			:	IN		STD_LOGIC_VECTOR(0 DOWNTO 0);		-- sensor (detecta se o elevador esta parado)
		clock_50	:	in		bit;										-- clk
		LEDR		:	OUT	STD_LOGIC_VECTOR(1 DOWNTO 0);		-- luz (subindo/descendo)
		LEDG		:	OUT	STD_LOGIC_VECTOR(1 DOWNTO 0)		-- status (parado ou nao)
	);
end asd123; 
	
	
	
	
	
	
ARCHITECTURE behavior OF asd123 IS

	BEGIN
		
		PROCESS(KEY, SW) -- variaveis sendo processadas
			
			TYPE estados IS (A,B,C,D);
			VARIABLE estado_atual : estados:=A;
			VARIABLE estado_futuro : estados;
			
			BEGIN
			
				IF((clock_50 = '1') AND (clock_50'EVENT)) THEN
					
					CASE estado_atual IS
						
						
						
						WHEN A => IF(KEY = "0") THEN -- parado (andar 1) -> subindo
							estado_futuro := B;
						ELSE
							estado_futuro := A;
						END IF;
					

						WHEN B => IF (SW = "1") THEN -- subindo -> parado (andar 2)
							estado_futuro := C;
						ELSE
							estado_futuro := B;
						END IF;
					

						WHEN C => IF (KEY = "0") THEN -- parado (andar 2) -> descendo
							estado_futuro := D;
						ELSE 
							estado_futuro := C;
						END IF;
					

						WHEN D => IF (SW = "0") THEN -- descendo -> parado (andar 1)
							estado_futuro := A;
						ELSE
							estado_futuro := D;
						END IF;
					
					END CASE;
				
				
				estado_atual := estado_futuro;
				
				
					CASE estado_futuro IS
					
						WHEN A => LEDG <="00";
						WHEN B => LEDG <="01"; -- subindo
						WHEN C => LEDG <="00";
						WHEN D => LEDG <="10"; -- descendo
					
					END CASE;
					
					CASE estado_futuro IS
					
						WHEN A => LEDR <="01"; -- parado (andar 1)
						WHEN B => LEDR <="00";
						WHEN C => LEDR <="10"; -- parado (andar 2)
						WHEN D => LEDR <="00";
					
					END CASE;
					
				END IF;
				
		END PROCESS;
		
END behavior;