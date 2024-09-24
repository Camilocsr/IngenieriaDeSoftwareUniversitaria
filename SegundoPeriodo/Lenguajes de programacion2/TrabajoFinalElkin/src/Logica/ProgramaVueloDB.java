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
public class ProgramaVueloDB {

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    public List<String> getProgramasAvion() {
        List<String> programasVuelo = new ArrayList<>();
        String query = "SELECT NumeroVuelo FROM ProgramaVuelo";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                programasVuelo.add(rs.getString("NumeroVuelo"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return programasVuelo;
    }
    
    public List<String> getLineaAeria() {
        List<String> programasVuelo = new ArrayList<>();
        String query = "SELECT LineaAerea FROM ProgramaVuelo";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                programasVuelo.add(rs.getString("LineaAerea"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return programasVuelo;
    }
    
    public List<String> getDiasSemana() {
        List<String> programasVuelo = new ArrayList<>();
        String query = "SELECT DiasSemana FROM ProgramaVuelo";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query); ResultSet rs = stmt.executeQuery()) {
            while (rs.next()) {
                programasVuelo.add(rs.getString("DiasSemana"));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return programasVuelo;
    }
    
    

    public static int getProgramaVueloID(String programa) {
        String query = "SELECT NumeroVuelo FROM ProgramaVuelo WHERE NumeroVuelo = ?";
        try (Connection conn = ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y.."); PreparedStatement pstmt = conn.prepareStatement(query)) {

            pstmt.setString(1, programa);
            try (ResultSet rs = pstmt.executeQuery()) {
                if (rs.next()) {
                    return rs.getInt("NumeroVuelo"); // Retorna el ID del programa de vuelo
                } else {
                    throw new SQLException("Programa de vuelo no encontrado.");
                }
            }
        } catch (SQLException e) {
            e.printStackTrace();
            return -1; // Retorna -1 o algún valor que indique error
        }
    }
}
