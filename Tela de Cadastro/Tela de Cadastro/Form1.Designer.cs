namespace Tela_de_Cadastro
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.txtNome = new System.Windows.Forms.Label();
            this.txtCalendar = new System.Windows.Forms.Label();
            this.txtSexo = new System.Windows.Forms.Label();
            this.txtCPF = new System.Windows.Forms.Label();
            this.txtCor = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.checkMasculino = new System.Windows.Forms.CheckBox();
            this.checkFeminino = new System.Windows.Forms.CheckBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(176, 45);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(422, 20);
            this.textBox1.TabIndex = 0;
            // 
            // txtNome
            // 
            this.txtNome.AutoSize = true;
            this.txtNome.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.txtNome.Location = new System.Drawing.Point(31, 45);
            this.txtNome.Name = "txtNome";
            this.txtNome.Size = new System.Drawing.Size(139, 20);
            this.txtNome.TabIndex = 1;
            this.txtNome.Text = "Nome Completo :";
            this.txtNome.Click += new System.EventHandler(this.label1_Click);
            // 
            // txtCalendar
            // 
            this.txtCalendar.AutoSize = true;
            this.txtCalendar.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.txtCalendar.Location = new System.Drawing.Point(31, 99);
            this.txtCalendar.Name = "txtCalendar";
            this.txtCalendar.Size = new System.Drawing.Size(172, 20);
            this.txtCalendar.TabIndex = 2;
            this.txtCalendar.Text = "Data de Nascimento :";
            // 
            // txtSexo
            // 
            this.txtSexo.AutoSize = true;
            this.txtSexo.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.txtSexo.Location = new System.Drawing.Point(31, 143);
            this.txtSexo.Name = "txtSexo";
            this.txtSexo.Size = new System.Drawing.Size(56, 20);
            this.txtSexo.TabIndex = 3;
            this.txtSexo.Text = "Sexo :";
            // 
            // txtCPF
            // 
            this.txtCPF.AutoSize = true;
            this.txtCPF.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.txtCPF.Location = new System.Drawing.Point(31, 280);
            this.txtCPF.Name = "txtCPF";
            this.txtCPF.Size = new System.Drawing.Size(52, 20);
            this.txtCPF.TabIndex = 4;
            this.txtCPF.Text = "CPF :";
            // 
            // txtCor
            // 
            this.txtCor.AutoSize = true;
            this.txtCor.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.txtCor.Location = new System.Drawing.Point(31, 331);
            this.txtCor.Name = "txtCor";
            this.txtCor.Size = new System.Drawing.Size(46, 20);
            this.txtCor.TabIndex = 5;
            this.txtCor.Text = "Cor :";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.label2.Location = new System.Drawing.Point(35, 300);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(0, 20);
            this.label2.TabIndex = 6;
            // 
            // checkMasculino
            // 
            this.checkMasculino.AutoSize = true;
            this.checkMasculino.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.checkMasculino.Location = new System.Drawing.Point(235, 139);
            this.checkMasculino.Name = "checkMasculino";
            this.checkMasculino.Size = new System.Drawing.Size(104, 24);
            this.checkMasculino.TabIndex = 8;
            this.checkMasculino.Text = "Masculino";
            this.checkMasculino.UseVisualStyleBackColor = true;
            // 
            // checkFeminino
            // 
            this.checkFeminino.AutoSize = true;
            this.checkFeminino.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F);
            this.checkFeminino.Location = new System.Drawing.Point(115, 143);
            this.checkFeminino.Name = "checkFeminino";
            this.checkFeminino.Size = new System.Drawing.Size(96, 24);
            this.checkFeminino.TabIndex = 9;
            this.checkFeminino.Text = "Feminino";
            this.checkFeminino.UseVisualStyleBackColor = true;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(89, 282);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(147, 20);
            this.textBox2.TabIndex = 10;
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(209, 99);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(200, 20);
            this.dateTimePicker1.TabIndex = 11;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(624, 450);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.checkFeminino);
            this.Controls.Add(this.checkMasculino);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtCor);
            this.Controls.Add(this.txtCPF);
            this.Controls.Add(this.txtSexo);
            this.Controls.Add(this.txtCalendar);
            this.Controls.Add(this.txtNome);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label txtNome;
        private System.Windows.Forms.Label txtCalendar;
        private System.Windows.Forms.Label txtSexo;
        private System.Windows.Forms.Label txtCPF;
        private System.Windows.Forms.Label txtCor;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.CheckBox checkMasculino;
        private System.Windows.Forms.CheckBox checkFeminino;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
    }
}

