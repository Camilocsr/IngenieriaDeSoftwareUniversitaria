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
public class EscalaTecnicaDB {

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    public List<String> getModelosAvion() {
        List<String> modelosAvion = new ArrayList<>();
        String query = "SELECT ID FROM EscalaTecnica";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                modelosAvion.add(rs.getString("ID"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return modelosAvion;
    }
}