/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package Vistas;

import ConexionDB.ConexionDB;
import Logica.AeropuertoDB;
import Logica.ModeloAvionDB;
import Logica.ProgramaVueloDB;
import java.sql.Connection;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import javax.swing.JComboBox;
import java.util.List;
import java.util.Map;
import javax.swing.JOptionPane;

import java.sql.Statement;
import java.sql.SQLException;
import java.sql.PreparedStatement;


/**
 *
 * @author LENOVO
 */
public class Vuelos extends javax.swing.JFrame {

    private Map<String, Integer> aeropuertoMapDespegue;

    /**
     * Creates new form Vuelos
     */
    public Vuelos() {
        initComponents();
        llenarComboBoxModeloAvion();
        llenarComboBoxProgramaVuelo();
        llenarComboBoxAeropuertoDespegue();
        llenarComboBoxAeropuertoAterrizaje();
    }

    private void llenarComboBoxModeloAvion() {
        ModeloAvionDB db = new ModeloAvionDB();
        List<String> modelosAvion = db.getModelosAvion();

        if (modelosAvion.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No se pudieron obtener los modelos de avión.", "Error", JOptionPane.ERROR_MESSAGE);
        } else {
            jComboBoxModeloAvion.removeAllItems();
            for (String modelo : modelosAvion) {
                jComboBoxModeloAvion.addItem(modelo);
            }
        }
    }

    private void llenarComboBoxProgramaVuelo() {
        ProgramaVueloDB db = new ProgramaVueloDB();
        List<String> ProgramaAvion = db.getProgramasAvion();

        if (ProgramaAvion.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No se pudieron Obtener los programas de avion.", "Error", JOptionPane.ERROR_MESSAGE);
        } else {
            jComboBoxProgramaVuelo.removeAllItems();
            for (String modelo : ProgramaAvion) {
                jComboBoxProgramaVuelo.addItem(modelo);
            }
        }
    }

    private void llenarComboBoxAeropuertoDespegue() {
        AeropuertoDB db = new AeropuertoDB();
        List<AeropuertoDB.Aeropuerto> aeropuertos = db.getAeropuertoDespegue();

        // HashMap para almacenar la relación entre nombre e ID
        Map<String, Integer> aeropuertoMap = new HashMap<>();

        if (aeropuertos.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No se pudieron obtener los aeropuertos de despegue.", "Error", JOptionPane.ERROR_MESSAGE);
        } else {
            jComboBoxAeropuertoDespegue.removeAllItems();
            for (AeropuertoDB.Aeropuerto aeropuerto : aeropuertos) {
                // Añadir el nombre al JComboBox
                jComboBoxAeropuertoDespegue.addItem(aeropuerto.getNombre());
                // Guardar la relación nombre-ID en el HashMap
                aeropuertoMap.put(aeropuerto.getNombre(), aeropuerto.getId());
            }
        }

        // Guardar el HashMap en una variable de instancia
        this.aeropuertoMapDespegue = aeropuertoMap;
    }

    // Método para obtener el ID del aeropuerto seleccionado
    private int getSelectedAeropuertoId() {
        String selectedName = (String) jComboBoxAeropuertoDespegue.getSelectedItem();
        return this.aeropuertoMapDespegue.getOrDefault(selectedName, -1);
    }

    private void llenarComboBoxAeropuertoAterrizaje() {
        AeropuertoDB db = new AeropuertoDB();
        List<AeropuertoDB.Aeropuerto> aeropuertos = db.getAeropuertoDespegue();

        // HashMap para almacenar la relación entre nombre e ID
        Map<String, Integer> aeropuertoMap = new HashMap<>();

        if (aeropuertos.isEmpty()) {
            JOptionPane.showMessageDialog(this, "No se pudieron obtener los aeropuertos de despegue.", "Error", JOptionPane.ERROR_MESSAGE);
        } else {
            jComboBoxAeropuertoAterrizaje.removeAllItems();
            for (AeropuertoDB.Aeropuerto aeropuerto : aeropuertos) {
                // Añadir el nombre al JComboBox
                jComboBoxAeropuertoAterrizaje.addItem(aeropuerto.getNombre());
                // Guardar la relación nombre-ID en el HashMap
                aeropuertoMap.put(aeropuerto.getNombre(), aeropuerto.getId());
            }
        }

        // Guardar el HashMap en una variable de instancia
        this.aeropuertoMapDespegue = aeropuertoMap;
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
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jComboBoxModeloAvion = new javax.swing.JComboBox<>();
        jComboBoxProgramaVuelo = new javax.swing.JComboBox<>();
        jComboBoxAeropuertoDespegue = new javax.swing.JComboBox<>();
        jComboBoxAeropuertoAterrizaje = new javax.swing.JComboBox<>();
        jTextField1PlazasVacias = new javax.swing.JTextField();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jDateChooserFechaVuelo = new com.toedter.calendar.JDateChooser();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Cronograma Vuelos");

        jLabel2.setText("Fecha: ");

        jLabel3.setText("Plazas Vacias");

        jLabel4.setText("ModeloAvion: ");

        jLabel5.setText("Programa Vuelo");

        jLabel6.setText("Aeropuerto Despegue");

        jLabel7.setText("Aeropuerto Aterrizaje");

        jComboBoxModeloAvion.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jComboBoxProgramaVuelo.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jComboBoxAeropuertoDespegue.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jComboBoxAeropuertoAterrizaje.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        jComboBoxAeropuertoAterrizaje.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jComboBoxAeropuertoAterrizajeActionPerformed(evt);
            }
        });

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

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(27, 27, 27)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel5)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jComboBoxProgramaVuelo, javax.swing.GroupLayout.PREFERRED_SIZE, 103, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel6)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jComboBoxAeropuertoDespegue, javax.swing.GroupLayout.PREFERRED_SIZE, 103, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel7)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jComboBoxAeropuertoAterrizaje, javax.swing.GroupLayout.PREFERRED_SIZE, 103, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabel4)
                                    .addComponent(jLabel3)
                                    .addComponent(jLabel2))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(jComboBoxModeloAvion, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(jTextField1PlazasVacias)
                                    .addComponent(jDateChooserFechaVuelo, javax.swing.GroupLayout.DEFAULT_SIZE, 103, Short.MAX_VALUE)))))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGap(116, 116, 116)
                                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 182, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(72, 72, 72)
                                .addComponent(jButton1)
                                .addGap(84, 84, 84)
                                .addComponent(jButton2)))
                        .addGap(0, 94, Short.MAX_VALUE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(20, 20, 20)
                .addComponent(jLabel1)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel2)
                    .addComponent(jDateChooserFechaVuelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(jTextField1PlazasVacias, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(jComboBoxModeloAvion, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(jComboBoxProgramaVuelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel6)
                    .addComponent(jComboBoxAeropuertoDespegue, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7)
                    .addComponent(jComboBoxAeropuertoAterrizaje, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(27, 27, 27)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton2))
                .addContainerGap(32, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        Date fechaVuelo = jDateChooserFechaVuelo.getDate();
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        String fechaVueloStr = dateFormat.format(fechaVuelo);
        String plazasVaciasStr = jTextField1PlazasVacias.getText();
        int plazasVacias = Integer.parseInt(plazasVaciasStr);
        String modeloAvion = jComboBoxModeloAvion.getSelectedItem().toString();
        String programaVuelo = jComboBoxProgramaVuelo.getSelectedItem().toString();
        String aeropuertoDespegue = jComboBoxAeropuertoDespegue.getSelectedItem().toString();
        String aeropuertoAterrizaje = jComboBoxAeropuertoAterrizaje.getSelectedItem().toString();

        // Obtener IDs
        int modeloAvionID = ModeloAvionDB.getModeloAvionID(modeloAvion);
        int programaVueloID = ProgramaVueloDB.getProgramaVueloID(programaVuelo);
        int aeropuertoDespegueID = AeropuertoDB.getAeropuertoID(aeropuertoDespegue);
        int aeropuertoAterrizajeID = AeropuertoDB.getAeropuertoID(aeropuertoAterrizaje);

        // Insertar en la base de datos
        String query = "INSERT INTO Vuelo (Fecha, PlazasVacias, ModeloAvionID, ProgramaVueloID, AeropuertoDespegueID, AeropuertoAterrizajeID) VALUES (?, ?, ?, ?, ?, ?)";

        try (Connection conn = getConnection(); PreparedStatement pstmt = conn.prepareStatement(query)) {

            pstmt.setDate(1, java.sql.Date.valueOf(fechaVueloStr));
            pstmt.setInt(2, plazasVacias);
            pstmt.setInt(3, modeloAvionID);
            pstmt.setInt(4, programaVueloID);
            pstmt.setInt(5, aeropuertoDespegueID);
            pstmt.setInt(6, aeropuertoAterrizajeID);

            int rowsAffected = pstmt.executeUpdate();
            if (rowsAffected > 0) {
                JOptionPane.showMessageDialog(this, "Vuelo insertado correctamente.", "Éxito", JOptionPane.INFORMATION_MESSAGE);
            } else {
                JOptionPane.showMessageDialog(this, "No se pudo insertar el vuelo.", "Error", JOptionPane.ERROR_MESSAGE);
            }

        } catch (SQLException e) {
            JOptionPane.showMessageDialog(this, "Error al insertar el vuelo: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        this.dispose();
    }//GEN-LAST:event_jButton2ActionPerformed

    private void jComboBoxAeropuertoAterrizajeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jComboBoxAeropuertoAterrizajeActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jComboBoxAeropuertoAterrizajeActionPerformed

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
            java.util.logging.Logger.getLogger(Vuelos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Vuelos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Vuelos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Vuelos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Vuelos().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JComboBox<String> jComboBoxAeropuertoAterrizaje;
    private javax.swing.JComboBox<String> jComboBoxAeropuertoDespegue;
    private javax.swing.JComboBox<String> jComboBoxModeloAvion;
    private javax.swing.JComboBox<String> jComboBoxProgramaVuelo;
    private com.toedter.calendar.JDateChooser jDateChooserFechaVuelo;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JTextField jTextField1PlazasVacias;
    // End of variables declaration//GEN-END:variables
}