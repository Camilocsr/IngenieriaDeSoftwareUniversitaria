/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package Vistas.ConVist;

import ConexionDB.ConexionDB;
import Logica.ProgramaVueloDB;
import Logica.Vuelo;
import Vistas.Consultas;
import java.sql.Connection;
import java.util.ArrayList;
import java.util.List;
import java.sql.Statement;
import java.sql.SQLException;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

/**
 *
 * @author LENOVO
 */
public class ProgramasConsultas extends javax.swing.JFrame {

    /**
     * Creates new form ProgramasConsultas
     */
    public ProgramasConsultas() {
        initComponents();
        llenarConboBoxIDVuelo();
        llenarLineaAeria();
        llenarDiasSemana();
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
        jComboBoxNUMVUELO = new javax.swing.JComboBox<>();
        jLabel2 = new javax.swing.JLabel();
        jComboBoxLineaAeria = new javax.swing.JComboBox<>();
        jLabel3 = new javax.swing.JLabel();
        DiasDeLaSemana = new javax.swing.JComboBox<>();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Numero de Vuelo");

        jComboBoxNUMVUELO.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jLabel2.setText("Linea Aeria");

        jComboBoxLineaAeria.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jLabel3.setText("Dias de la semana");

        DiasDeLaSemana.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));

        jButton1.setText("Consultar");
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
                .addGap(23, 23, 23)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel2)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(jLabel1)
                        .addGap(116, 116, 116))
                    .addComponent(jLabel3)
                    .addComponent(jButton1))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jComboBoxLineaAeria, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 98, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jComboBoxNUMVUELO, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 98, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(1, 1, 1)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jButton2)
                            .addComponent(DiasDeLaSemana, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addContainerGap(61, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(jComboBoxNUMVUELO, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(jComboBoxLineaAeria, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(DiasDeLaSemana, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton2))
                .addContainerGap(14, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        this.dispose();
    }//GEN-LAST:event_jButton2ActionPerformed

    private Connection getConnection() {
        return ConexionDB.getInstance().getConnection("aeropuerto", "root", "C.M.B.Y..");
    }

    private void llenarConboBoxIDVuelo() {
        ProgramaVueloDB vuelo = new ProgramaVueloDB();
        List<String> listaIDVuelos = vuelo.getProgramasAvion();

        jComboBoxNUMVUELO.removeAllItems(); // Limpiar el JComboBox antes de llenarlo
        for (String id : listaIDVuelos) {
            jComboBoxNUMVUELO.addItem(id); // Agregar cada ID al JComboBox
        }
    }

    private void llenarLineaAeria() {
        ProgramaVueloDB vuelo = new ProgramaVueloDB();
        List<String> listaLineaAeria = vuelo.getLineaAeria();

        jComboBoxLineaAeria.removeAllItems(); // Limpiar el JComboBox antes de llenarlo
        for (String id : listaLineaAeria) {
            jComboBoxLineaAeria.addItem(id); // Agregar cada ID al JComboBox
        }
    }

    private void llenarDiasSemana() {
        ProgramaVueloDB vuelo = new ProgramaVueloDB();
        List<String> DiasSemana = vuelo.getDiasSemana();

        DiasDeLaSemana.removeAllItems(); // Limpiar el JComboBox antes de llenarlo
        for (String id : DiasSemana) {
            DiasDeLaSemana.addItem(id); // Agregar cada ID al JComboBox
        }
    }

    private List<String[]> realizarConsulta(String numeroVuelo, String lineaAeria, String diasSemana) {
        List<String[]> resultados = new ArrayList<>();
        String query = "SELECT p.NumeroVuelo, p.LineaAerea, p.DiasSemana, "
                + "ad.Nombre AS AeropuertoDespegue, "
                + "aa.Nombre AS AeropuertoAterrizaje "
                + "FROM ProgramaVuelo p "
                + "JOIN Aeropuerto ad ON p.AeropuertoDespegueID = ad.Codigo "
                + "JOIN Aeropuerto aa ON p.AeropuertoAterrizajeID = aa.Codigo "
                + "WHERE p.NumeroVuelo = ? AND p.LineaAerea = ? AND p.DiasSemana = ?";

        try (Connection conn = getConnection(); PreparedStatement stmt = conn.prepareStatement(query)) {
            stmt.setString(1, numeroVuelo);
            stmt.setString(2, lineaAeria);
            stmt.setString(3, diasSemana);

            try (ResultSet rs = stmt.executeQuery()) {
                while (rs.next()) {
                    String[] row = {
                        rs.getString("NumeroVuelo"),
                        rs.getString("LineaAerea"),
                        rs.getString("DiasSemana"),
                        rs.getString("AeropuertoDespegue"),
                        rs.getString("AeropuertoAterrizaje")
                    };
                    resultados.add(row);
                }
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return resultados;
    }


    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        String numeroVuelo = jComboBoxNUMVUELO.getSelectedItem().toString();
        String lineaAeria = jComboBoxLineaAeria.getSelectedItem().toString();
        String diasSemana = DiasDeLaSemana.getSelectedItem().toString();

        // Ejecutar la consulta y pasar los resultados a la tabla en el formulario Consultas
        List<String[]> resultados = realizarConsulta(numeroVuelo, lineaAeria, diasSemana);

        // Suponiendo que tienes una referencia al formulario Consultas
        Consultas consultasForm = new Consultas();
        consultasForm.actualizarTabla(resultados);
        consultasForm.setVisible(true);
    }//GEN-LAST:event_jButton1ActionPerformed

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
            java.util.logging.Logger.getLogger(ProgramasConsultas.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ProgramasConsultas.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ProgramasConsultas.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ProgramasConsultas.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ProgramasConsultas().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JComboBox<String> DiasDeLaSemana;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JComboBox<String> jComboBoxLineaAeria;
    private javax.swing.JComboBox<String> jComboBoxNUMVUELO;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    // End of variables declaration//GEN-END:variables
}