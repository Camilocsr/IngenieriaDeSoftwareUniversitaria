package Logica;

import ConexionDB.ConexionDB;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class AeropuertoDB {

    public class Aeropuerto {

        private int id;
        private String nombre;

        // Constructor
        public Aeropuerto(int id, String nombre) {
            this.id = id;
            this.nombre = nombre;
        }

        public int getId() {
            return id;
        }

        public void setId(int id) {
            this.id = id;
        }

        public String getNombre() {
            return nombre;
        }

        public void setNombre(String nombre) {
            this.nombre = nombre;
        }

        @Override
        public String toString() {
            return nombre; // Esto hará que solo el nombre se muestre en el JComboBox
        }
    }

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    public List<Aeropuerto> getAeropuertoDespegue() {
        List<Aeropuerto> aeropuertos = new ArrayList<>();
        String query = "SELECT Codigo, Nombre FROM Aeropuerto";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                String codigoString = rs.getString("Codigo");
                String nombre = rs.getString("Nombre");
                int codigo = Integer.parseInt(codigoString); // Convertir String a int
                aeropuertos.add(new Aeropuerto(codigo, nombre));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return aeropuertos;
    }

    public static int getAeropuertoID(String nombreAeropuerto) {
        String query = "SELECT Codigo FROM Aeropuerto WHERE Nombre = ?";
        try (Connection conn = ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y.."); PreparedStatement pstmt = conn.prepareStatement(query)) {

            pstmt.setString(1, nombreAeropuerto);
            try (ResultSet rs = pstmt.executeQuery()) {
                if (rs.next()) {
                    return rs.getInt("Codigo"); // Retorna el ID del aeropuerto
                } else {
                    throw new SQLException("Aeropuerto no encontrado.");
                }
            }
        } catch (SQLException e) {
            e.printStackTrace();
            return -1; // Retorna -1 o algún valor que indique error
        }
    }
}
