CREATE DATABASE hoteldb;

USE hoteldb;

CREATE TABLE Clientes (
    cliente_id INT PRIMARY KEY,
    nombre VARCHAR(255),
    apellido VARCHAR(255),
    correo VARCHAR(255) UNIQUE,
    telefono VARCHAR(255),
    fecha_registro TIMESTAMP
);

CREATE TABLE Tipo_Empleado (
    tipo_empleado_id INT PRIMARY KEY,
    nombre VARCHAR(255) UNIQUE,
    descripcion TEXT
);

CREATE TABLE Empleados (
    empleado_id INT PRIMARY KEY,
    nombre VARCHAR(255),
    apellido VARCHAR(255),
    puesto VARCHAR(255),
    telefono VARCHAR(255),
    correo VARCHAR(255) UNIQUE,
    tipo_empleado_id INT,
    FOREIGN KEY (tipo_empleado_id) REFERENCES Tipo_Empleado(tipo_empleado_id)
);

CREATE TABLE Habitaciones (
    habitacion_id INT PRIMARY KEY,
    numero VARCHAR(255) UNIQUE,
    tipo VARCHAR(255),
    estado ENUM('Ocupada', 'Libre', 'Mantenimiento'),
    precio_noche DECIMAL(10, 2)
);

CREATE TABLE Reservas (
    reserva_id INT PRIMARY KEY,
    cliente_id INT,
    habitacion_id INT,
    fecha_check_in TIMESTAMP,
    fecha_check_out TIMESTAMP,
    estado ENUM('Confirmada', 'Cancelada'),
    FOREIGN KEY (cliente_id) REFERENCES Clientes(cliente_id),
    FOREIGN KEY (habitacion_id) REFERENCES Habitaciones(habitacion_id)
);

CREATE TABLE Pagos (
    pago_id INT PRIMARY KEY,
    reserva_id INT UNIQUE,
    monto DECIMAL(10, 2),
    fecha_pago TIMESTAMP,
    metodo_pago ENUM('Tarjeta', 'Efectivo', 'Transferencia'),
    FOREIGN KEY (reserva_id) REFERENCES Reservas(reserva_id)
);

CREATE TABLE Facturas (
    factura_id INT PRIMARY KEY,
    pago_id INT UNIQUE,
    numero_factura VARCHAR(255) UNIQUE,
    fecha_emision TIMESTAMP,
    subtotal DECIMAL(10, 2),
    iva DECIMAL(10, 2),
    total DECIMAL(10, 2),
    FOREIGN KEY (pago_id) REFERENCES Pagos(pago_id)
);

CREATE TABLE Comentarios (
    comentario_id INT PRIMARY KEY,
    cliente_id INT,
    reserva_id INT,
    fecha_comentario TIMESTAMP,
    contenido TEXT,
    calificacion INT CHECK (calificacion BETWEEN 1 AND 5),
    FOREIGN KEY (cliente_id) REFERENCES Clientes(cliente_id),
    FOREIGN KEY (reserva_id) REFERENCES Reservas(reserva_id)
);

CREATE TABLE Servicios (
    servicio_id INT PRIMARY KEY,
    nombre VARCHAR(255) UNIQUE,
    precio DECIMAL(10, 2),
    descripcion TEXT
);

CREATE TABLE Reserva_Servicios (
    reserva_servicio_id INT PRIMARY KEY,
    reserva_id INT,
    servicio_id INT,
    FOREIGN KEY (reserva_id) REFERENCES Reservas(reserva_id),
    FOREIGN KEY (servicio_id) REFERENCES Servicios(servicio_id)
);

CREATE TABLE Mantenimiento (
    mantenimiento_id INT PRIMARY KEY,
    habitacion_id INT,
    fecha_mantenimiento TIMESTAMP,
    descripcion TEXT,
    realizado_por INT,
    FOREIGN KEY (habitacion_id) REFERENCES Habitaciones(habitacion_id),
    FOREIGN KEY (realizado_por) REFERENCES Empleados(empleado_id)
);

CREATE TABLE Consumo (
    consumo_id INT PRIMARY KEY,
    reserva_id INT,
    servicio_id INT,
    cantidad INT,
    fecha_consumo TIMESTAMP,
    FOREIGN KEY (reserva_id) REFERENCES Reservas(reserva_id),
    FOREIGN KEY (servicio_id) REFERENCES Servicios(servicio_id)
);