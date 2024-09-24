/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Logica;

import ConexionDB.ConexionDB;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author LENOVO
 */
public class ModeloAvionDB {

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    public List<String> getModelosAvion() {
        List<String> modelosAvion = new ArrayList<>();
        String query = "SELECT NombreModelo FROM ModeloAvion";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                modelosAvion.add(rs.getString("NombreModelo"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return modelosAvion;
    }

    public static int getModeloAvionID(String modelo) {
        String query = "SELECT ID FROM ModeloAvion WHERE NombreModelo = ?";
        try (Connection conn = ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y.."); PreparedStatement pstmt = conn.prepareStatement(query)) {

            pstmt.setString(1, modelo);
            try (ResultSet rs = pstmt.executeQuery()) {
                if (rs.next()) {
                    return rs.getInt("ID"); // Retorna el ID del modelo de avión
                } else {
                    throw new SQLException("Modelo de avión no encontrado.");
                }
            }
        } catch (SQLException e) {
            e.printStackTrace();
            return -1; // Retorna -1 o algún valor que indique error
        }
    }
}
