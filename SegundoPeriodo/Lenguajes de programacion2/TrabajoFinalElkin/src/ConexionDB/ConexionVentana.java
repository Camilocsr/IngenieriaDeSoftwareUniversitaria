package ConexionDB;

import java.sql.Connection;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ConexionVentana extends JFrame {

    private JTextField txtURL;
    private JTextField txtUsuario;
    private JPasswordField txtPassword;
    private JTextField txtBaseDeDatos;
    private JButton btnConectar;
    private JTextArea txtResultados;

    public ConexionVentana() {
        setTitle("Conexión a Base de Datos");
        setSize(450, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new BorderLayout());

        // Panel de entrada
        JPanel panelEntrada = new JPanel();
        panelEntrada.setLayout(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5); // Espaciado entre componentes

        // Etiqueta y campo de URL
        gbc.gridx = 0;
        gbc.gridy = 0;
        panelEntrada.add(new JLabel("URL:"), gbc);
        txtURL = new JTextField("jdbc:mysql://localhost:3306/", 20);
        gbc.gridx = 1;
        panelEntrada.add(txtURL, gbc);

        // Etiqueta y campo de Base de Datos
        gbc.gridx = 0;
        gbc.gridy = 1;
        panelEntrada.add(new JLabel("Base de Datos:"), gbc);
        txtBaseDeDatos = new JTextField("", 20);
        gbc.gridx = 1;
        panelEntrada.add(txtBaseDeDatos, gbc);

        // Etiqueta y campo de Usuario
        gbc.gridx = 0;
        gbc.gridy = 2;
        panelEntrada.add(new JLabel("Usuario:"), gbc);
        txtUsuario = new JTextField("", 20);
        gbc.gridx = 1;
        panelEntrada.add(txtUsuario, gbc);

        // Etiqueta y campo de Contraseña
        gbc.gridx = 0;
        gbc.gridy = 3;
        panelEntrada.add(new JLabel("Contraseña:"), gbc);
        txtPassword = new JPasswordField("", 20);
        gbc.gridx = 1;
        panelEntrada.add(txtPassword, gbc);

        // Botón de Conectar
        gbc.gridx = 0;
        gbc.gridy = 4;
        gbc.gridwidth = 2;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        btnConectar = new JButton("Conectar");
        panelEntrada.add(btnConectar, gbc);

        // Panel de resultados
        txtResultados = new JTextArea(8, 30);
        txtResultados.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(txtResultados);

        // Añadir paneles al marco
        add(panelEntrada, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);

        // Acción del botón Conectar
        btnConectar.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                conectar();
            }
        });
    }

    private void conectar() {
        String url = txtURL.getText();
        String database = txtBaseDeDatos.getText();  // Obtiene el nombre de la base de datos
        String user = txtUsuario.getText();
        String password = new String(txtPassword.getPassword());

        if (url.isEmpty() || database.isEmpty() || user.isEmpty() || password.isEmpty()) {
            txtResultados.setText("Todos los campos deben ser completados.");
            return;
        }

        try {
            // Obtener la conexión desde el Singleton
            Connection connection = ConexionDB.getInstance().getConnection(database, user, password);
            if (connection != null) {
                txtResultados.setText("Conexión exitosa a la base de datos!");
                // Cerrar la ventana después de una conexión exitosa
                dispose();
            } else {
                txtResultados.setText("Error al conectar a la base de datos: Conexión nula.");
            }
        } catch (Exception e) {
            txtResultados.setText("Error al conectar a la base de datos: " + e.getMessage());
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            ConexionVentana ventana = new ConexionVentana();
            ventana.setVisible(true);
        });
    }
}