﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace TestDemo
{
    public partial class SmartBlurForm : CCWin.Skin_Mac
    {
        public SmartBlurForm(string path)
        {
            InitializeComponent();
            this.DoubleBuffered = true;
            zPhoto = new ZPhotoEngineDll();
            Bitmap tmp = new Bitmap(path);
            if (tmp != null)
            {
                curBitmap = new Bitmap(tmp, 150 * tmp.Width / Math.Max(tmp.Width, tmp.Height), 150 * tmp.Height / Math.Max(tmp.Width, tmp.Height));
                pictureBox1.Image = (Image)zPhoto.SmartBlurProcess(curBitmap, radius, threshold);
            }
        }
        private ZPhotoEngineDll zPhoto = null;
        private Bitmap curBitmap = null;
        private int radius = 3;
        private int threshold = 25;
        public int getRadius
        {
            get { return radius; }
        }
        public int getThreshld
        {
            get { return threshold; }
        }
        //radius
        private void skinHScrollBar1_Scroll(object sender, ScrollEventArgs e)
        {
            if (curBitmap != null)
            {
                threshold = skinHScrollBar2.Value;
                radius = skinHScrollBar1.Value;
                textBox1.Text = radius.ToString();
                textBox2.Text = threshold.ToString();
                pictureBox1.Image = (Image)zPhoto.SmartBlurProcess(curBitmap, radius, threshold);
            }
        }
        //threshold
        private void skinHScrollBar2_Scroll(object sender, ScrollEventArgs e)
        {
            if (curBitmap != null)
            {
                threshold = skinHScrollBar2.Value;
                radius = skinHScrollBar1.Value;
                textBox1.Text = radius.ToString();
                textBox2.Text = threshold.ToString();
                pictureBox1.Image = (Image)zPhoto.SmartBlurProcess(curBitmap, radius, threshold);
            }
        }

        private void skinButton1_Click(object sender, EventArgs e)
        {
            threshold = skinHScrollBar2.Value;
            radius = skinHScrollBar1.Value;
            this.DialogResult = DialogResult.OK;
            this.Close();
        }
    }
}
