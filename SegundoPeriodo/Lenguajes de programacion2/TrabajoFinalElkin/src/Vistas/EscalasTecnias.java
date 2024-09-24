/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package Vistas;

import ConexionDB.ConexionDB;
import Logica.AeropuertoDB;
import Logica.Vuelo;
import java.sql.Connection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.swing.JOptionPane;
import java.sql.PreparedStatement;
import java.sql.SQLException;

/**
 *
 * @author LENOVO
 */
public class EscalasTecnias extends javax.swing.JFrame {

    private Map<String, Integer> aeropuertoEscalas;
    private Vuelo vuelo = new Vuelo();

    /**
     * Creates new form EscalasTecnias
     */
    public EscalasTecnias() {
        initComponents();
        llenarComboBoxIDVuelo();
        llenarComboBoxEscalaAeropuerto();
    }

    private void llenarComboBoxIDVuelo() {
        List<String> idsVuelo = vuelo.getIDAvion(); // Obtén los IDs de vuelo

        jComboBoxIDVuelo.removeAllItems(); // Limpia los elementos actuales

        for (String id : idsVuelo) {
            jComboBoxIDVuelo.addItem(id); // Agrega cada ID al JComboBox
        }
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        NumOrdenTextFild = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jComboBoxIDVuelo = new javax.swing.JComboBox<>();
        jLabel3 = new javax.swing.JLabel();
        jComboBoxEscalaAeropuerto = new javax.swing.JComboBox<>();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Numero de orden");

        jLabel2.setText("ID Vuelo");

        jComboBoxIDVuelo.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jLabel3.setText("Aeropuerto de Escala.");

        jComboBoxEscalaAeropuerto.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jButton1.setText("Insertar");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jButton2.setText("Salir");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        jLabel4.setText("Escalas Tecnicas");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap(32, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel1)
                            .addComponent(jLabel2)
                            .addComponent(jLabel3)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(44, 44, 44)
                        .addComponent(jButton1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(36, 36, 36)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addComponent(jComboBoxIDVuelo, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(NumOrdenTextFild, javax.swing.GroupLayout.PREFERRED_SIZE, 72, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addComponent(jComboBoxEscalaAeropuerto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(15, 15, 15)
                        .addComponent(jButton2)))
                .addGap(27, 27, 27))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(0, 0, Short.MAX_VALUE)
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 144, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(58, 58, 58))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(14, Short.MAX_VALUE)
                .addComponent(jLabel4)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(NumOrdenTextFild, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel2)
                    .addComponent(jComboBoxIDVuelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(jComboBoxEscalaAeropuerto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(26, 26, 26)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton2))
                .addGap(14, 14, 14))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void llenarComboBoxEscalaAeropuerto() {
        AeropuertoDB db = new AeropuertoDB();
        List<AeropuertoDB.Aeropuerto> aeropuertos = db.getAeropuertoDespegue();

        // HashMap para almacenar la relación entre nombre e ID
        Map<String, Integer> aeropuertoMap = new HashMap<>();

        if (aeropuertos.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No se pudieron obtener las escalas de aeropuertos.", "Error", JOptionPane.ERROR_MESSAGE);
        } else {
            jComboBoxEscalaAeropuerto.removeAllItems();
            for (AeropuertoDB.Aeropuerto aeropuerto : aeropuertos) {
                // Añadir el nombre al JComboBox
                jComboBoxEscalaAeropuerto.addItem(aeropuerto.getNombre());
                // Guardar la relación nombre-ID en el HashMap
                aeropuertoMap.put(aeropuerto.getNombre(), aeropuerto.getId());
            }
        }

        // Guardar el HashMap en una variable de instancia
        this.aeropuertoEscalas = aeropuertoMap;
    }

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // Obtiene los valores desde los componentes de la interfaz
        String numOrdenText = NumOrdenTextFild.getText(); // Número de Orden
        String idVueloString = jComboBoxIDVuelo.getSelectedItem().toString(); // ID del vuelo
        String escalaVuelo = jComboBoxEscalaAeropuerto.getSelectedItem().toString(); // Código del aeropuerto

        System.out.println(escalaVuelo);

        int numOrden;
        int idVuelo;
        try {
            numOrden = Integer.parseInt(numOrdenText); // Convierte el número de orden a entero
            idVuelo = Integer.parseInt(idVueloString); // Convierte el ID del vuelo a entero
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(this, "Número de orden o ID de vuelo no válidos.", "Error", JOptionPane.ERROR_MESSAGE);
            e.printStackTrace();
            return; // Sale del método si ocurre un error
        }

        int aeropuertoID = AeropuertoDB.getAeropuertoID(escalaVuelo); // Obtiene el ID del aeropuerto basado en el código
        String aeropuertoIDString = String.valueOf(aeropuertoID); // Convierte el ID del aeropuerto a String

        // Construye la consulta SQL para insertar un nuevo registro en la tabla EscalaTecnica
        String query = "INSERT INTO EscalaTecnica (NumeroOrden, VueloID, AeropuertoID) VALUES (?, ?, ?)";

        try (Connection conn = getConnection(); // Obtiene la conexión a la base de datos
                 PreparedStatement pstmt = conn.prepareStatement(query)) { // Prepara la consulta SQL

            // Establece los valores en el PreparedStatement
            pstmt.setInt(1, numOrden); // Número de Orden
            pstmt.setInt(2, idVuelo); // ID del Vuelo
            pstmt.setString(3, aeropuertoIDString); // Código del Aeropuerto

            int rowsAffected = pstmt.executeUpdate(); // Ejecuta la consulta

            if (rowsAffected > 0) {
                JOptionPane.showMessageDialog(this, "Escala técnica insertada con éxito", "Éxito", JOptionPane.INFORMATION_MESSAGE);
            } else {
                JOptionPane.showMessageDialog(this, "No se insertó ningún registro.", "Información", JOptionPane.INFORMATION_MESSAGE);
            }
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(this, "Error al insertar la escala técnica: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            e.printStackTrace();
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        this.dispose();
    }//GEN-LAST:event_jButton2ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(EscalasTecnias.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(EscalasTecnias.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(EscalasTecnias.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(EscalasTecnias.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new EscalasTecnias().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField NumOrdenTextFild;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JComboBox<String> jComboBoxEscalaAeropuerto;
    private javax.swing.JComboBox<String> jComboBoxIDVuelo;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    // End of variables declaration//GEN-END:variables
}