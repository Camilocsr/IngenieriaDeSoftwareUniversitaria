-- Tabla Clientes
INSERT INTO Clientes (cliente_id, nombre, apellido, correo, telefono, fecha_registro) VALUES
    (1, 'Juan', 'Pérez', 'juan.perez@example.com', '123456789', '2024-09-19 19:00:50'),
    (2, 'María', 'Gómez', 'maria.gomez@example.com', '987654321', '2024-09-19 19:00:50'),
    (3, 'Carlos', 'López', 'carlos.lopez@example.com', '456123789', '2024-09-19 19:00:50'),
    (4, 'Ana', 'Martínez', 'ana.martinez@example.com', '321654987', '2024-09-19 19:00:50'),
    (5, 'Laura', 'Sánchez', 'laura.sanchez@example.com', '654789123', '2024-09-19 19:00:50'),
    (6, 'Ricardo', 'Morales', 'ricardo.morales@example.com', '654321789', '2024-09-19 19:00:50'),
    (7, 'Lucía', 'Fernández', 'lucia.fernandez@example.com', '987321654', '2024-09-19 19:00:50'),
    (8, 'Santiago', 'Cabrera', 'santiago.cabrera@example.com', '321987654', '2024-09-19 19:00:50'),
    (9, 'Paula', 'Vargas', 'paula.vargas@example.com', '789654123', '2024-09-19 19:00:50'),
    (10, 'Jorge', 'Ramírez', 'jorge.ramirez@example.com', '123789654', '2024-09-19 19:00:50'),
    (11, 'Natalia', 'Mendoza', 'natalia.mendoza@example.com', '456987123', '2024-09-19 19:00:50'),
    (12, 'Adriana', 'Paredes', 'adriana.paredes@example.com', '789123456', '2024-09-19 19:00:50'),
    (13, 'Diego', 'Quintero', 'diego.quintero@example.com', '147258369', '2024-09-19 19:00:50'),
    (14, 'Valeria', 'Ruiz', 'valeria.ruiz@example.com', '852963741', '2024-09-19 19:00:50'),
    (15, 'Andrés', 'Castro', 'andres.castro@example.com', '963741852', '2024-09-19 19:00:50');

-- Tabla Tipo_Empleado
INSERT INTO Tipo_Empleado (tipo_empleado_id, nombre, descripcion) VALUES
    (1, 'Recepcionista', 'Encargado de la recepción y atención al cliente.'),
    (2, 'Limpieza', 'Responsable de la limpieza y mantenimiento de las habitaciones.'),
    (3, 'Mantenimiento', 'Encargado del mantenimiento general del hotel.'),
    (4, 'Gerente', 'Responsable de la gestión general del hotel.'),
    (5, 'Chef', 'Responsable de la cocina y el servicio de comidas.'),
    (6, 'Conserje', 'Encargado de proporcionar asistencia a los huéspedes.'),
    (7, 'Botones', 'Encargado de ayudar con el equipaje y servicios.'),
    (8, 'Seguridad', 'Encargado de la seguridad del hotel.'),
    (9, 'Administrador', 'Encargado de la gestión administrativa.'),
    (10, 'Recepcionista nocturno', 'Encargado de la recepción durante la noche.'),
    (11, 'Jardinero', 'Encargado del mantenimiento de jardines.'),
    (12, 'Lavandero', 'Encargado del lavado y planchado de ropa.'),
    (13, 'Personal de limpieza de áreas comunes', 'Encargado de la limpieza de áreas comunes.'),
    (14, 'Asistente de eventos', 'Encargado de ayudar en la organización de eventos.'),
    (15, 'Asistente de marketing', 'Encargado de las estrategias de marketing del hotel.');

-- Tabla Empleados
INSERT INTO Empleados (empleado_id, nombre, apellido, puesto, telefono, correo, tipo_empleado_id) VALUES
    (1, 'Pedro', 'Ramírez', 'Recepcionista', '111222333', 'pedro.ramirez@example.com', 1),
    (2, 'Sofía', 'Torres', 'Limpieza', '222333444', 'sofia.torres@example.com', 2),
    (3, 'Luis', 'Martín', 'Mantenimiento', '333444555', 'luis.martin@example.com', 3),
    (4, 'Elena', 'Reyes', 'Gerente', '444555666', 'elena.reyes@example.com', 4),
    (5, 'Marcos', 'Hernández', 'Chef', '555666777', 'marcos.hernandez@example.com', 5),
    (6, 'Natalia', 'Salinas', 'Conserje', '666777888', 'natalia.salinas@example.com', 6),
    (7, 'Diego', 'Pérez', 'Botones', '777888999', 'diego.perez@example.com', 7),
    (8, 'Carlos', 'Jaramillo', 'Seguridad', '888999000', 'carlos.jaramillo@example.com', 8),
    (9, 'Ana', 'Gutiérrez', 'Administrador', '999000111', 'ana.gutierrez@example.com', 9),
    (10, 'Sara', 'Pérez', 'Recepcionista nocturno', '000111222', 'sara.perez@example.com', 10),
    (11, 'Ricardo', 'Castro', 'Jardinero', '111222333', 'ricardo.castro@example.com', 11),
    (12, 'Laura', 'Fernández', 'Lavandero', '222333444', 'laura.fernandez@example.com', 12),
    (13, 'Pedro', 'Paredes', 'Personal de limpieza de áreas comunes', '333444555', 'pedro.paredes@example.com', 13),
    (14, 'Valentina', 'Torres', 'Asistente de eventos', '444555666', 'valentina.torres@example.com', 14),
    (15, 'Andrés', 'Mendoza', 'Asistente de marketing', '555666777', 'andres.mendoza@example.com', 15);

-- Tabla Habitaciones
INSERT INTO Habitaciones (habitacion_id, numero, tipo, estado, precio_noche) VALUES
    (1, '101', 'Sencilla', 'Libre', 50.00),
    (2, '102', 'Doble', 'Libre', 75.00),
    (3, '103', 'Suite', 'Libre', 150.00),
    (4, '104', 'Sencilla', 'Ocupada', 50.00),
    (5, '105', 'Doble', 'Mantenimiento', 75.00),
    (6, '106', 'Suite', 'Libre', 150.00),
    (7, '107', 'Sencilla', 'Libre', 50.00),
    (8, '108', 'Doble', 'Ocupada', 75.00),
    (9, '109', 'Suite', 'Mantenimiento', 150.00),
    (10, '110', 'Sencilla', 'Libre', 50.00),
    (11, '111', 'Doble', 'Ocupada', 75.00),
    (12, '112', 'Suite', 'Libre', 150.00),
    (13, '113', 'Sencilla', 'Libre', 50.00),
    (14, '114', 'Doble', 'Ocupada', 75.00),
    (15, '115', 'Suite', 'Libre', 150.00);

-- Tabla Reservas
INSERT INTO Reservas (reserva_id, cliente_id, habitacion_id, fecha_check_in, fecha_check_out, estado) VALUES
    (1, 1, 1, '2024-10-01 00:00:00', '2024-10-03 00:00:00', 'Confirmada'),
    (2, 2, 2, '2024-10-05 00:00:00', '2024-10-07 00:00:00', 'Confirmada'),
    (3, 3, 3, '2024-10-10 00:00:00', '2024-10-12 00:00:00', 'Cancelada'),
    (4, 4, 4, '2024-10-15 00:00:00', '2024-10-17 00:00:00', 'Confirmada'),
    (5, 5, 5, '2024-10-20 00:00:00', '2024-10-22 00:00:00', 'Confirmada'),
    (6, 6, 6, '2024-10-25 00:00:00', '2024-10-27 00:00:00', 'Confirmada'),
    (7, 7, 7, '2024-10-30 00:00:00', '2024-11-01 00:00:00', 'Cancelada'),
    (8, 8, 8, '2024-11-05 00:00:00', '2024-11-07 00:00:00', 'Confirmada'),
    (9, 9, 9, '2024-11-10 00:00:00', '2024-11-12 00:00:00', 'Confirmada'),
    (10, 10, 10, '2024-11-15 00:00:00', '2024-11-17 00:00:00', 'Confirmada'),
    (11, 11, 11, '2024-11-20 00:00:00', '2024-11-22 00:00:00', 'Confirmada'),
    (12, 12, 12, '2024-11-25 00:00:00', '2024-11-27 00:00:00', 'Cancelada'),
    (13, 13, 13, '2024-12-01 00:00:00', '2024-12-03 00:00:00', 'Confirmada'),
    (14, 14, 14, '2024-12-05 00:00:00', '2024-12-07 00:00:00', 'Confirmada'),
    (15, 15, 15, '2024-12-10 00:00:00', '2024-12-12 00:00:00', 'Confirmada');

-- Tabla Pagos
INSERT INTO Pagos (pago_id, reserva_id, monto, fecha_pago, metodo_pago) VALUES
    (1, 1, 150.00, '2024-09-20 10:00:00', 'Tarjeta'),
    (2, 2, 150.00, '2024-09-25 11:00:00', 'Efectivo'),
    (3, 3, 0.00, '2024-09-30 12:00:00', 'Transferencia'),
    (4, 4, 100.00, '2024-10-01 13:00:00', 'Tarjeta'),
    (5, 5, 150.00, '2024-10-02 14:00:00', 'Efectivo'),
    (6, 6, 300.00, '2024-10-03 15:00:00', 'Transferencia'),
    (7, 7, 0.00, '2024-10-04 16:00:00', 'Tarjeta'),
    (8, 8, 150.00, '2024-10-05 17:00:00', 'Efectivo'),
    (9, 9, 300.00, '2024-10-06 18:00:00', 'Transferencia'),
    (10, 10, 100.00, '2024-10-07 19:00:00', 'Tarjeta'),
    (11, 11, 150.00, '2024-10-08 20:00:00', 'Efectivo'),
    (12, 12, 0.00, '2024-10-09 21:00:00', 'Transferencia'),
    (13, 13, 100.00, '2024-10-10 22:00:00', 'Tarjeta'),
    (14, 14, 150.00, '2024-10-11 23:00:00', 'Efectivo'),
    (15, 15, 300.00, '2024-10-12 24:00:00', 'Transferencia');

-- Tabla Facturas
INSERT INTO Facturas (factura_id, pago_id, numero_factura, fecha_emision, subtotal, iva, total) VALUES
    (1, 1, 'F001', '2024-09-20 10:30:00', 150.00, 27.00, 177.00),
    (2, 2, 'F002', '2024-09-25 11:30:00', 150.00, 27.00, 177.00),
    (3, 3, 'F003', '2024-09-30 12:30:00', 0.00, 0.00, 0.00),
    (4, 4, 'F004', '2024-10-01 13:30:00', 100.00, 18.00, 118.00),
    (5, 5, 'F005', '2024-10-02 14:30:00', 150.00, 27.00, 177.00),
    (6, 6, 'F006', '2024-10-03 15:30:00', 300.00, 54.00, 354.00),
    (7, 7, 'F007', '2024-10-04 16:30:00', 0.00, 0.00, 0.00),
    (8, 8, 'F008', '2024-10-05 17:30:00', 150.00, 27.00, 177.00),
    (9, 9, 'F009', '2024-10-06 18:30:00', 300.00, 54.00, 354.00),
    (10, 10, 'F010', '2024-10-07 19:30:00', 100.00, 18.00, 118.00),
    (11, 11, 'F011', '2024-10-08 20:30:00', 150.00, 27.00, 177.00),
    (12, 12, 'F012', '2024-10-09 21:30:00', 0.00, 0.00, 0.00),
    (13, 13, 'F013', '2024-10-10 22:30:00', 100.00, 18.00, 118.00),
    (14, 14, 'F014', '2024-10-11 23:30:00', 150.00, 27.00, 177.00),
    (15, 15, 'F015', '2024-10-12 24:30:00', 300.00, 54.00, 354.00);

-- Tabla Comentarios
INSERT INTO Comentarios (comentario_id, cliente_id, reserva_id, fecha_comentario, contenido, calificacion) VALUES
    (1, 1, 1, '2024-10-03 10:00:00', 'Excelente servicio.', 5),
    (2, 2, 2, '2024-10-07 11:00:00', 'Muy satisfecho con la habitación.', 4),
    (3, 3, 3, '2024-10-12 12:00:00', 'Cancelé la reserva, no puedo comentar.', 1),
    (4, 4, 4, '2024-10-17 13:00:00', 'Ambiente agradable.', 4),
    (5, 5, 5, '2024-10-22 14:00:00', 'Muy buena atención.', 5),
    (6, 6, 6, '2024-10-27 15:00:00', 'Habitación limpia y cómoda.', 5),
    (7, 7, 7, '2024-11-01 16:00:00', 'No me gustó la comida.', 2),
    (8, 8, 8, '2024-11-07 17:00:00', 'Recomiendo el hotel.', 4),
    (9, 9, 9, '2024-11-12 18:00:00', 'Todo estuvo bien.', 4),
    (10, 10, 10, '2024-11-17 19:00:00', 'Falta de atención en la recepción.', 2),
    (11, 11, 11, '2024-11-22 20:00:00', 'Personal amable.', 5),
    (12, 12, 12, '2024-11-27 21:00:00', 'No volvería a este hotel.', 1),
    (13, 13, 13, '2024-12-03 22:00:00', 'Una experiencia inolvidable.', 5),
    (14, 14, 14, '2024-12-07 23:00:00', 'Todo estuvo perfecto.', 5),
    (15, 15, 15, '2024-12-12 24:00:00', 'No lo recomendaría.', 2);

-- Tabla Servicios
INSERT INTO Servicios (servicio_id, nombre, precio, descripcion) VALUES
    (1, 'Desayuno', 10.00, 'Desayuno buffet incluido.'),
    (2, 'Almuerzo', 20.00, 'Almuerzo a la carta.'),
    (3, 'Cena', 25.00, 'Cena a la carta.'),
    (4, 'Transporte', 15.00, 'Servicio de transporte al aeropuerto.'),
    (5, 'Masaje', 50.00, 'Masaje relajante de una hora.'),
    (6, 'Gimnasio', 5.00, 'Acceso al gimnasio.'),
    (7, 'Wi-Fi', 2.00, 'Acceso a Internet.'),
    (8, 'Estacionamiento', 10.00, 'Estacionamiento por día.'),
    (9, 'Spa', 30.00, 'Acceso al spa por día.'),
    (10, 'Excursión', 100.00, 'Excursión guiada de un día.'),
    (11, 'Lavandería', 15.00, 'Servicio de lavandería.'),
    (12, 'Café', 5.00, 'Café y snacks.'),
    (13, 'Bar', 10.00, 'Servicio de bar.'),
    (14, 'Películas', 5.00, 'Acceso a películas en la habitación.'),
    (15, 'Transferencia', 20.00, 'Servicio de transferencia al aeropuerto.');

-- Tabla Reserva_Servicios
INSERT INTO Reserva_Servicios (reserva_servicio_id, reserva_id, servicio_id) VALUES
    (1, 1, 1),
    (2, 2, 2),
    (3, 3, 3),
    (4, 4, 4),
    (5, 5, 5),
    (6, 6, 6),
    (7, 7, 7),
    (8, 8, 8),
    (9, 9, 9),
    (10, 10, 10),
    (11, 11, 11),
    (12, 12, 12),
    (13, 13, 13),
    (14, 14, 14),
    (15, 15, 15);

-- Tabla Mantenimiento
INSERT INTO Mantenimiento (mantenimiento_id, habitacion_id, fecha_mantenimiento, descripcion, realizado_por) VALUES
    (1, 1, '2024-10-15 10:00:00', 'Reparación de aire acondicionado.', 1),
    (2, 2, '2024-10-16 11:00:00', 'Revisión de plomería.', 2),
    (3, 3, '2024-10-17 12:00:00', 'Pintura de habitación.', 3),
    (4, 4, '2024-10-18 13:00:00',  'Cambio de bombillas.', 4),
    (5, 5, '2024-10-19 14:00:00', 'Limpieza de alfombras.', 5),
    (6, 6, '2024-10-20 15:00:00', 'Mantenimiento de calefacción.', 6),
    (7, 7, '2024-10-21 16:00:00', 'Revisión de cerraduras.', 7),
    (8, 8, '2024-10-22 17:00:00', 'Reparación de ventanas.', 8),
    (9, 9, '2024-10-23 18:00:00', 'Revisión de climatización.', 9),
    (10, 10, '2024-10-24 19:00:00', 'Limpieza de filtros.', 10),
    (11, 11, '2024-10-25 20:00:00', 'Cambio de sábanas.', 11),
    (12, 12, '2024-10-26 21:00:00', 'Revisión de muebles.', 12),
    (13, 13, '2024-10-27 22:00:00', 'Pintura exterior.', 13),
    (14, 14, '2024-10-28 23:00:00', 'Reparación de piscina.', 14),
    (15, 15, '2024-10-29 24:00:00', 'Revisión de sistemas eléctricos.', 15);

-- Tabla Consumo
INSERT INTO Consumo (consumo_id, reserva_id, servicio_id, cantidad, fecha_consumo) VALUES
    (1, 1, 1, 2, '2024-10-03 10:00:00'),
    (2, 2, 2, 1, '2024-10-07 11:00:00'),
    (3, 3, 3, 0, '2024-10-12 12:00:00'),
    (4, 4, 4, 1, '2024-10-17 13:00:00'),
    (5, 5, 5, 2, '2024-10-22 14:00:00'),
    (6, 6, 6, 1, '2024-10-27 15:00:00'),
    (7, 7, 7, 0, '2024-11-01 16:00:00'),
    (8, 8, 8, 2, '2024-11-07 17:00:00'),
    (9, 9, 9, 1, '2024-11-12 18:00:00'),
    (10, 10, 10, 0, '2024-11-17 19:00:00'),
    (11, 11, 11, 1, '2024-11-22 20:00:00'),
    (12, 12, 12, 0, '2024-11-27 21:00:00'),
    (13, 13, 13, 1, '2024-12-03 22:00:00'),
    (14, 14, 14, 2, '2024-12-07 23:00:00'),
    (15, 15, 15, 1, '2024-12-12 24:00:00');
