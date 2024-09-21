-- 1. Consulta de Clientes
-- descriptcion: Esta consulta se utiliza para obtener una lista completa de todos los clientes registrados en el sistema. Es esencial para la gestión y análisis de la información de los clientes.
SELECT cliente_id, nombre, apellido, correo, telefono, fecha_registro
FROM Clientes;


-- 2. Consulta de Disponibilidad de Habitaciones
-- descriptcion: Se utiliza para verificar qué habitaciones están libres en un rango de fechas específico. Esto es crucial para facilitar la gestión de reservas y asegurar que se ofrezcan opciones a los clientes.

SELECT habitacion_id, tipo, precio_noche
FROM Habitaciones
WHERE habitacion_id NOT IN (
    SELECT habitacion_id
    FROM Reservas
    WHERE (fecha_check_in <= '2024-12-10' AND fecha_check_out >= '2024-12-01')
);

-- 3. Creación de una Nueva Reserva
-- descriptcio: Esta consulta permite registrar una nueva reserva en el sistema, asociando a un cliente con una habitación en fechas específicas. Es fundamental para gestionar la ocupación del hotel.

INSERT INTO Reservas (cliente_id, habitacion_id, fecha_check_in, fecha_check_out, estado)
VALUES (1, 2, '2024-12-01', '2024-12-10', 'Confirmada');

-- 4. Consulta del Historial de Pagos de un Cliente
-- descriptcion: Se utiliza para obtener el historial de pagos de un cliente específico. Es útil para el control financiero y para atender consultas sobre transacciones pasadas.

SELECT p.pago_id, p.monto, p.fecha_pago, p.metodo_pago
FROM Pagos p
JOIN Reservas r ON p.reserva_id = r.reserva_id
WHERE r.cliente_id = 1;


-- 5. Consulta de Comentarios de Clientes
-- descriptcion: Permite ver todos los comentarios y calificaciones dejados por los clientes. Es importante para mejorar la calidad del servicio y conocer la satisfacción del cliente.

SELECT comentario_id, cliente_id, fecha_comentario, contenido, calificacion
FROM Comentarios;

-- 6. Registro de un Nuevo Servicio
-- decriptcion: Esta consulta se utiliza para añadir nuevos servicios que el hotel puede ofrecer a los clientes. Es esencial para diversificar la oferta y mejorar la experiencia del huésped.

INSERT INTO Servicios (nombre, precio, descripcion)
VALUES ('Transporte al aeropuerto', 15.00, 'Servicio de transporte al aeropuerto.');

-- 7. Consulta de Servicios Consumidos por un Cliente
-- descriptcion: Permite ver los servicios adicionales que un cliente ha consumido durante su estancia. Esto es útil para facturación y análisis de consumo.

SELECT s.nombre, c.cantidad, c.fecha_consumo
FROM Consumo c
JOIN Servicios s ON c.servicio_id = s.servicio_id
WHERE c.reserva_id = 1;

-- 8. Registro de Mantenimiento de una Habitación
-- descriptcion: Esta consulta registra los trabajos de mantenimiento realizados en una habitación. Es crucial para mantener la calidad del servicio y la satisfacción del cliente.

INSERT INTO mantenimiento (mantenimiento_id, habitacion_id, fecha_mantenimiento, descripcion, realizado_por)
VALUES (16, 7,'2024-10-26 21:00:00', 'Reviion y repaacion de los sitemas de ventilacion y de el jacuzzi', 3);

-- 9. Actualización de Información de Clientes
-- descrpcion: Se utiliza para actualizar los datos de contacto de un cliente existente. Es importante para mantener la información actualizada y mejorar la comunicación.

UPDATE Clientes
SET telefono = '573115268706'
WHERE cliente_id = 1;

-- 10. Consulta del Estado de Reservas
-- descripcio: Permite ver el estado actual de todas las reservas en el sistema. Es fundamental para la gestión operativa del hotel y para asegurar que todas las reservas se manejen adecuadamente.

SELECT r.reserva_id, c.nombre, c.apellido, r.fecha_check_in, r.fecha_check_out, r.estado
FROM Reservas r
JOIN Clientes c ON r.cliente_id = c.cliente_id;