CREATE TABLE Personnel(
   Id_Personnel INT IDENTITY,
   Nom_Personnel VARCHAR(250),
   Prenom_Personnel VARCHAR(250),
   Superieur INT,
   Adresse_Personnel VARCHAR(250),
   CP_Personnel INT,
   Ville_Personnel VARCHAR(250),
   Date_Embauche DATE,
   Id_Personnel_1 INT,
   PRIMARY KEY(Id_Personnel),
   FOREIGN KEY(Id_Personnel_1) REFERENCES Personnel(Id_Personnel)
);

CREATE TABLE Client(
   Id_Client INT IDENTITY,
   Nom_Client VARCHAR(250),
   Prenom_Client VARCHAR(250),
   Date_Naissance DATE,
   Date_firstachat DATE,
   PRIMARY KEY(Id_Client)
);

CREATE TABLE Adresse(
   Id_Adresse INT IDENTITY,
   Adresse VARCHAR(250),
   CP INT,
   ViIle VARCHAR(250),
   Id_Client INT NOT NULL,
   PRIMARY KEY(Id_Adresse),
   FOREIGN KEY(Id_Client) REFERENCES Client(Id_Client)
);

CREATE TABLE Commande(
   Id_Commande INT IDENTITY,
   Reference VARCHAR(250),
   Date_Livraison DATE,
   Date_Paiement DATE,
   Moyen_Paiement VARCHAR(250),
   Solde_du_règlement FLOAT,
   Id_Adresse_Facturation INT,
   Id_Adresse_Livraison INT,
   Date_emission DATE,
   Remise INT,
   Id_Client INT NOT NULL,
   PRIMARY KEY(Id_Commande),
   FOREIGN KEY(Id_Client) REFERENCES Client(Id_Client)
);

CREATE TABLE Catalogue(
   Id_Catalogue INT IDENTITY,
   Nom_Article VARCHAR(250),
   HT FLOAT,
   Stock INT,
   TVA FLOAT,
   Test INT NOT NULL,
   PRIMARY KEY(Id_Catalogue)
);

CREATE TABLE Ville_France(
   Id_Ville_France INT IDENTITY,
   Ville_de_France_Majuscule VARCHAR(250),
   Ville_de_France_Minuscule VARCHAR(250),
   Code_Postal INT,
   PRIMARY KEY(Id_Ville_France)
);

CREATE TABLE Article(
   Id_Article INT IDENTITY,
   Quantite INT,
   Id_Catalogue INT NOT NULL,
   Id_Commande INT NOT NULL,
   PRIMARY KEY(Id_Article),
   FOREIGN KEY(Id_Catalogue) REFERENCES Catalogue(Id_Catalogue),
   FOREIGN KEY(Id_Commande) REFERENCES Commande(Id_Commande)
);


