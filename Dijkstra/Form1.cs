using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Dijkstra
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            var graph = new graph();
            Node SelectedNode = null;

            InitializeComponent();
            this.MouseClick += (sender, e) =>
            {
                switch (e.Button) {
                    // 左クリック
                    case MouseButtons.Left:
                        Form1_LeftClick(sender , e);
                        break;
                    // 右クリック
                    case MouseButtons.Right:
                        Form1_RightClick(sender , e);
                        break;
                }
            };
        }

        private void Form1_LeftClick(object sender,System.Windows.Forms.MouseEventArgs e)
        {
            Draw(sender, e);
        }
        private void Form1_RightClick(object sender, System.Windows.Forms.MouseEventArgs e)
        {

        }

        private void Draw(object sender, System.Windows.Forms.MouseEventArgs e)
        {
            var point = new Point(e.X, e.Y);
            var size = new Size(10, 10);

            using (var nodeBrush = new SolidBrush(Color.DarkSeaGreen))
            {
                using (var EdzePen = new Pen(Color.Black))
                {
                    var rt = new Rectangle(point, size);
                    Graphics g = this.CreateGraphics();
                    g.DrawRectangle(EdzePen, rt);
                }
            }
        }

    }
}
