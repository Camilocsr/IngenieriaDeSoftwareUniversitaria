-- Crear base de datos
CREATE DATABASE IF NOT EXISTS Aeropuerto;
USE Aeropuerto;

-- Crear tabla Aeropuerto
CREATE TABLE IF NOT EXISTS Aeropuerto (
    Codigo VARCHAR(10) PRIMARY KEY,
    Nombre VARCHAR(100) NOT NULL,
    Ciudad VARCHAR(100) NOT NULL,
    Pais VARCHAR(100) NOT NULL
);

-- Crear tabla ModeloAvion
CREATE TABLE IF NOT EXISTS ModeloAvion (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    NombreModelo VARCHAR(100) NOT NULL,
    Capacidad INT NOT NULL
);

-- Crear tabla ProgramaVuelo
CREATE TABLE IF NOT EXISTS ProgramaVuelo (
    NumeroVuelo VARCHAR(10) PRIMARY KEY,
    LineaAerea VARCHAR(100) NOT NULL,
    DiasSemana VARCHAR(50) NOT NULL,
    AeropuertoDespegueID VARCHAR(10),
    AeropuertoAterrizajeID VARCHAR(10),
    FOREIGN KEY (AeropuertoDespegueID) REFERENCES Aeropuerto(Codigo),
    FOREIGN KEY (AeropuertoAterrizajeID) REFERENCES Aeropuerto(Codigo)
);

-- Crear tabla Vuelo
CREATE TABLE IF NOT EXISTS Vuelo (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    Fecha DATE NOT NULL,
    PlazasVacias INT NOT NULL,
    ModeloAvionID INT,
    ProgramaVueloID VARCHAR(10),
    AeropuertoDespegueID VARCHAR(10),
    AeropuertoAterrizajeID VARCHAR(10),
    FOREIGN KEY (ModeloAvionID) REFERENCES ModeloAvion(ID),
    FOREIGN KEY (ProgramaVueloID) REFERENCES ProgramaVuelo(NumeroVuelo),
    FOREIGN KEY (AeropuertoDespegueID) REFERENCES Aeropuerto(Codigo),
    FOREIGN KEY (AeropuertoAterrizajeID) REFERENCES Aeropuerto(Codigo)
);

-- Crear tabla EscalaTecnica
CREATE TABLE IF NOT EXISTS EscalaTecnica (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    NumeroOrden INT NOT NULL,
    VueloID INT,
    AeropuertoID VARCHAR(10),
    FOREIGN KEY (VueloID) REFERENCES Vuelo(ID),
    FOREIGN KEY (AeropuertoID) REFERENCES Aeropuerto(Codigo)
);

-- Crear tabla OperacionEscala
CREATE TABLE IF NOT EXISTS OperacionEscala (
    ID INT AUTO_INCREMENT PRIMARY KEY,
    EscalaTecnicaID INT,
    TipoOperacion ENUM('Embarque', 'Desembarque') NOT NULL,
    NumeroPasajeros INT NOT NULL,
    FOREIGN KEY (EscalaTecnicaID) REFERENCES EscalaTecnica(ID)
);