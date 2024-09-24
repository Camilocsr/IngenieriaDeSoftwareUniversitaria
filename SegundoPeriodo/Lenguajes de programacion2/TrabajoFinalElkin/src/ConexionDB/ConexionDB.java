/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ConexionDB;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author LENOVO
 */

public class ConexionDB {
    private static ConexionDB instance;
    private Connection connection;
    private String url = "jdbc:mysql://localhost:3306/";  // Ajusta según tu configuración
    private String user;
    private String password;
    private String driver = "com.mysql.cj.jdbc.Driver";

    private ConexionDB() {
        try {
            Class.forName(driver);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }

    public static ConexionDB getInstance() {
        if (instance == null) {
            instance = new ConexionDB();
        }
        return instance;
    }

    public Connection getConnection(String database, String user, String password) {
        if (connection == null || !isValidConnection(connection)) {
            try {
                connection = DriverManager.getConnection(url + database, user, password);
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
        return connection;
    }

    private boolean isValidConnection(Connection connection) {
        try {
            return connection != null && !connection.isClosed();
        } catch (SQLException e) {
            return false;
        }
    }
}
