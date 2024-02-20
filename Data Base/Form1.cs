namespace _22F_3104_DB_Lab3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter your First Name:");
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked)
            {
                string gender = "Male";
            }
        }

        private void label5_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Confirm Password:");
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter your Last Name:");
        }

        private void label3_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter your Email:");
        }

        private void label4_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Enter your password:");
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                string gender = "Male";
            }
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                string gender = "Others";
            }
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label8_Click(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            { }
            else
            {
                MessageBox.Show("please check the box!");
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "")
            {
                MessageBox.Show("Please enter your First Name.");
                return;
            }
            else if (textBox2.Text == "")
            {
                MessageBox.Show("Please enter your Last Name.");
                return;
            }
            else if (textBox3.Text == "")
            {

                MessageBox.Show("Please enter your Email.");
                return;
            }
            else if (textBox4.Text == "")
            {
                MessageBox.Show("Please enter your Password.");
                return;
            }
            else if (textBox5.Text == "")
            {
                MessageBox.Show("Please confirm your Password.");
                return;
            }


            if (textBox4.Text != textBox5.Text)
            {
                MessageBox.Show("password and Confirm Password do not match");
                return;
            }

            if (!checkBox1.Checked)
            {
                MessageBox.Show("check on accept the Terms and Conditions.");
                return;
            }
            string gender;
            if (radioButton1.Checked)
            {
                gender = "Female";
            }
            else if (radioButton2.Checked)
            {
                gender = "Male";
            }
            else
            {
                gender = "Others";
            }
            string summary =$"congrats!\n"+ $" First Name is: {textBox1.Text}\n" +$"Last Name is: {textBox2.Text}\n" + $"Email is: {textBox3.Text}\n" + $"Gender is: {gender}\n";
            MessageBox.Show(summary, "Details");
        }
    }
    }