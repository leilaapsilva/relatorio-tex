create  database  exercSQL;

-- João Vitor Azevedo Marciano, RA 743554
-- João Vitor Azevedo Marciano, RA 743554

drop table DEPT;
drop table EMPR;


create table EMPR(

MATR		CHAR(6)	PRIMARY KEY,             --	Matricula única do empregado
NOME		VARCHAR(12)	not null,	        --Primeiro nome
SOBRENOME	VARCHAR(15)	not null,	        --Sobrenome
DEPT		CHAR(3),	                        --	Código de departamento do empregado
FONE		CHAR(14),      	--	Numero de telefone
DINADIM		DATE,				            --Data de admissão
CARGO		CHAR(10),	--	Cargo do empregado
NIVELED		INTEGER,		--	Educação formal em anos
SEXO		CHAR,	--	M = masc   F=fem.
DATANAS		DATE,				--Data --de nascimento
SALARIO		numeric(9,2),	--	Salário Anual
BONUS		numeric	(9,2),	--	Bônus Anual
COMIS		numeric	(9,2)	--	Comissão Anual


);

create table DEPT(

DCODIGO		CHAR(3)	PRIMARY KEY,   --	Código único do departamento
DNOME		VARCHAR(36)	not null,   --	Nome do departamento
GERENTE		CHAR(6),	    --	Matrícula do Gerente
DSUPER		CHAR(3)	    --	Depto a qual está subordinado


);

drop table PROJETO;
create table PROJETO(

PCODIGO		CHAR(6)	PRIMARY KEY,       --	Código único do Projeto
PNOME		VARCHAR(24)	not null,   --	Nome do projeto
DCODIGO		CHAR(3) not null,   --		Código do Departamento
RESP 		char(6) not null,       --	Matrícula do Responsável
EQUIPE		INTEGER,		----      Número de Empregados no Projeto
DATAINI		DATE,			--	Data de início 
DATAFIM		DATE,			--	Data do final
PSUPER		CHAR(6)		--Projeto Principal (se subprojeto)




);

INSERT INTO EMPR values('743554','Joao Vitor','Azevedo','D21','14997776543',to_date('2/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('06/08/1996','dd/mm/yyyy'),9999.90,868.68,100.00);
INSERT INTO EMPR values('743954','Vitor Zrigui','Malvechio','CLX','14957776543',to_date('15/06/2019','dd/mm/yyyy'),'ANALISTA',3,'M',to_date('05/08/1996','dd/mm/yyyy'),36669.90,868.68,100.00);
INSERT INTO EMPR values('743854','Adamson','KWAN','D22','14997276543',to_date('21/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('04/08/1996','dd/mm/yyyy'),38250.90,868.68,100.00);
INSERT INTO EMPR values('743544','Josee Vitor','Azevedo','C01','14917776543',to_date('22/06/2019','dd/mm/yyyy'),'REPVENDA',3,'M',to_date('03/08/1996','dd/mm/yyyy'),10000.90,3000.00,1000.00);
INSERT INTO EMPR values('723554','Joaao ','HAAS','B01','14997776563',to_date('23/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('06/08/1996','dd/mm/yyyy'),52750.00,818.68,104.00);
INSERT INTO EMPR values('705554','Xena','THOMPSON','D12','1499376543',to_date('24/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('06/08/1996','dd/mm/yyyy'),41250.00,868.68,100.00);
INSERT INTO EMPR values('999764','ssssss','aaaaaa','D22','1499376543',to_date('21/06/2019','dd/mm/yyyy'),'ATENDTE',3,'M',to_date('06/08/1944','dd/mm/yyyy'),450.00,868.68,100.00);



INSERT INTO EMPR values('3','Josee Vitor','AAAA','D22','14917776543',to_date('22/06/2019','dd/mm/yyyy'),'REPVENDA',3,'M',to_date('03/08/1996','dd/mm/yyyy'),10000.90,3000.00,1000.00);
INSERT INTO EMPR values('2','Josasasao ','HAAS','D22','14997776563',to_date('23/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('06/08/1996','dd/mm/yyyy'),52750.00,818.68,104.00);
INSERT INTO EMPR values('1','Xenaddddd','THOMPSON','D22','1499376543',to_date('24/06/2019','dd/mm/yyyy'),'gerente',3,'M',to_date('06/08/1996','dd/mm/yyyy'),41250.00,868.68,100.00);
INSERT INTO EMPR values('12','sss12222sss','aaaaaa','D22','1499376543',to_date('21/06/2019','dd/mm/yyyy'),'ATENDTE',3,'M',to_date('06/08/1944','dd/mm/yyyy'),450.00,868.68,100.00);


INSERT INTO EMPR values('7554','temE ','Xisto','ERR','14997776563',to_date('23/06/2019','dd/mm/yyyy'),'REPVENDA',3,'M',to_date('06/08/1996','dd/mm/yyyy'),929.90,818.68,104.00);
INSERT INTO EMPR values('0','Lais','Vilioni','D22','1499376543',to_date('24/06/2019','dd/mm/yyyy'),'Gosto',3,'F',to_date('01/01/1993','dd/mm/yyyy'),9999999.90,868.68,100.00);


  


select * from Empr;

INSERT INTO DEPT VALUES('mkl','JSERVIÇOQuality','notnu','mkt');
INSERT INTO DEPT(DCODIGO,DNOME,DSUPER) VALUES('mkx','nomedodep2','A00');

INSERT INTO DEPT VALUES('E01','SERVIÇOS DE SUPORTE','743554','A00');
INSERT INTO DEPT VALUES('E11','OPERAÇÃO','743554','E01');
INSERT INTO DEPT VALUES('E21','SUPORTE SOFTWARE','743554','E01');
INSERT INTO DEPT VALUES('CLX','PLAN e PLAN','743554','D01');
INSERT INTO DEPT VALUES('D22','PLAN e PLAN2','743514','E01');



select * from DEPT;

-- 1
select e.sobrenome, e.nome,e.dept,e.datanas,e.dinadim,e.salario 
from empr e 
where
e.salario > 30000.00;
--

--2
select d.dcodigo,d.dnome,d.gerente,d.dsuper
FROM DEPT d
where d.gerente is null;
--

--3
--3.--	Mostre o sobrenome, primeiro nome, departamento, data de nascimento, data de admissão e salário de todos os empregados 
--que ganhem menos de $20.000 por ano. Classifique o resultado pelo sobrenome e primeiro nome. --- salario anual

select e.sobrenome,e.nome,e.dept,e.datanas,e.dinadim,e.salario 
FROM EMPR e
where e.salario < 20000.00
order by e.sobrenome,e.nome;

---------
---4: 4.	Liste tudo sobre os departamentos subordinados ao departamento A00.

select d.dcodigo,d.dnome,d.gerente,d.dsuper
from DEPT d
where d.dsuper = 'A00';

--5: 5.	Liste o código e o nome dos departamento que apresentam “SERVIÇO” compondo seu nome.

select d.dcodigo,d.dnome
from dept d
where d.dnome like '%SERVIÇO%';

---6: Mostre a matricula, sobrenome, departamento e telefone dos empregados cujo código de departamento estejam compreendidos entre D11 e D21 (inclusive).

select e.matr,e.sobrenome,e.dept,e.fone 
from empr e
where e.dept >= 'D11' AND e.dept <='D21';


--7:Produza uma lista dos empregados nos departamentos B0l, C0l e D01,
--mostrando o sobrenome, departamento e rendimento (salário + comissão) Liste a saída em ordem descendente de rendimento dentro de cada departamento.
select e.sobrenome,e.dept,e.salario + e.comis AS rendimento
from empr e
where e.dept = 'B01' OR e.dept = 'C01' OR e.dept = 'D01'
order by  e.salario + e.comis desc;


--8: Mostre o sobrenome, salário anual e departamento dos empregados com salário mensal maior que
--$3000. Classifique a lista pelo sobrenome.
select e.sobrenome, e.salario,e.dept
from empr e
where (e.salario / 12) > 3000
order by e.sobrenome;                           --classificar é order ou group?


--9: Produza uma lista de todos os empregados cujo departamento --possua--  “E”. Mostre a matricula, primeiro nome e sobrenome. Classifique pelo sobrenome.
select e.matr,e.nome,e.sobrenome
from empr e
where e.dept like '%E%'
order by (e.sobrenome);                           --classificar é order ou group?²


--10: 	Produza uma lista dos homens cujo salário mensal seja menor do que $1600. 
--Mostre a matricula, sobrenome e salário mensal. Classifique cm ordem descendente de salário.

select e.matr,e.sobrenome,(e.salario / 12) 
FROM empr e
where (e.salario / 12) < 1600.00 AND e.sexo = 'M'
order by e.salario;


--11: Para cada representante de vendas (REPVENDA), apresente a comissão em 
--porcentagem do total de rendimento (salário, bônus e comissão). Liste nome e porcentagem.
select e.sobrenome, (e.comis * 100)/(e.salario+e.comis+e.bonus)
FROM empr e
where e.cargo = 'REPVENDA';


--12:	Mostre todas as informações referentes aos departamentos “E01” e departamentos subordinados ao departamento “E01”.
select d.dcodigo,d.dnome,d.gerente,d.dsuper
FROM dept d
where d.dcodigo = 'E01' OR d.dsuper = 'E01';

--13.	Liste o sobrenome, salário, função e nível de educação de qualquer empregado que se enquadre numa das seguintes condições:
    --•	Salário maior que $40.000;
    --•	Função gerente com nível menor que 16.
select e.sobrenome, e.salario as Salario_Anual,e.cargo,e.niveled                 -- escolhi o salario anual que é o padrao, ja que nada foi especificado sobre ser o mensal
from empr e               --"NUMA" das
where e.salario > 40000.00   OR (e.cargo = 'gerente' AND e.niveled < 16);       -- OR porque pediu NUMA, e nao AMBAS

-- 
--LAB SQL SELECT AVANÇADO
--

-- 1. 		Mostre a soma dos salários de toda a companhia, salário médio, salário mínimo e o salário máximo.
select sum(e.salario),avg(e.salario),min(e.salario),max(e.salario)
from empr e;

--2     2.		Qual é o primeiro sobrenome em ordem alfabética?
select min(e.sobrenome) from empr e;


--3.		 Quantos departamentos tem empregados?
SELECT count(DISTINCT e.dept)
  FROM empr e;
  
--4.		Mostre o salário médio para cada função.                    --ANUAL 
select e.cargo, avg(e.salario) 
from empr e
group by(e.cargo);

--5.  		Liste a média salarial das funções onde o salário médio seja maior que $35.000.
select e.cargo, avg(e.salario) as meias                                 --anual
from empr e
having avg(e.salario) > 35000
group by(e.cargo);


--6.		Mostre o sobrenome e função dos empregados dos departamentos cujo nome inclua “PLAN”.
select e.sobrenome, e.cargo
from empr e JOIN dept d ON( e.dept = d.dcodigo AND d.dnome like '%PLAN%');


--7.        Mostre o sobrenome e primeiro nome de todos os empregados que trabalham no mesmo departamento do Adamson.
select e.sobrenome,e.nome
from empr e join dept d on (e.dept = d.dcodigo)
where e.nome = 'Adamson' AND d.dcodigo = e.dept;                -- aqui acho que eram dois aninhados, mas são 23:49, não vai dar tempo kk 
--where e.nome = 'Adamson';

--8: Produza uma lista mostrando departamento média salarial e quantidade de empregados para cada departamento excluindo a função “ATENDTE”.
--Exclua departamentos com menos de quatro empregados
--Classifique a lista em ordem descendente de quantidade de empregados.

select e.dept, avg(e.salario), count(e.matr)
from empr e
--where e.cargo != 'ATENDTE' 
where e.cargo != 'ATENDTE'
having count(e.matr) > 4           
group by(e.dept)
order by count(e.matr) desc;


--9:	Liste o departamento e sobrenome dos gerentes dos departamentos subordinados ao departamento D01.
select d.dcodigo, e.sobrenome 
from empr e JOIN dept d ON(e.matr = d.gerente)
where d.dsuper = 'D01';


--10: 	Mostre a média salarial dos homens e a média salarial das mulheres de cada departamento. Identifique os departamentos pelo código e pelo nome. 
--Classifique o resultado em ordem descendente de salário dentro de cada departamento.
select d.dcodigo, d.dnome, avg(e.salario),e.sexo
from dept d, empr e
group by(d.dcodigo, d.dnome,e.sexo,e.salario)
order by (avg(e.salario)) desc;






