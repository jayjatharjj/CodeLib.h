<h1 align="center">Hi 👋, This is CodeLib.h</h1>
<h3 align="center">An interactive platform for learning C programming language</h3>

<p align="center">
Codelib.h is a comprehensive and user-friendly desktop application designed to facilitate the learning and understanding of the C programming language. Developed using C and GTK (GIMP Toolkit), Codelib.h provides a valuable resource for individuals looking to master C programming, whether they are beginners aiming to grasp the basics or experienced programmers seeking to refresh their knowledge.
</p>

<h4 align = "left">Key Features:</h4>
<ul>
  <li><p>Extensive Code Repository: Boasts an extensive collection of well-commented and organized C code examples covering a wide range of concepts and topics, from basic syntax to advanced algorithms and data structures.</p></li>
  <li><p>Interactive Learning: Users can explore and study each code example interactively. The application allows users to input custom values and execute the code, enabling them to see how different inputs affect the program's behavior and output.</p></li>
  <li><p>Categorized Topics: The code examples are grouped into categories such as Concepts, Arrays, Strings and more. This categorization makes it easy for users to navigate and focus on specific areas of interest.</p></li>
  <li><p>Downloadable Resources: Users have the option to download code examples and explanations for offline access, making it convenient for learning on the go.</p></li>
</ul>

## Installation

Step 1: Install C compiler by installation of the development package build-essential use the following command.

```bash
  sudo apt install build-essential
```
Step 2: Check C compiler version using following command 

```bash
  gcc --version
```
Step 3: Install GTK glade.

```bash
  sudo apt-get install libgtk2.0-doc devhelp
  sudo apt-get install -y glade
```

If you are having using issues, refer to the link
https://www.youtube.com/watch?v=Txo1OFViWpU

Possible error: (glade:391): Gtk-WARNING **: 02:58:09.056: Error loading theme icon 'dialog-warning' for 
stock: Icon 'dialog-warning' not present in theme Adwaita
```bash
  sudo apt install adwaita-icon-theme-ful
```

## How to run

```bash
  gcc -w GUI.c(main c file) -o Codelib.h(preferred executable file name) `pkg-config --cflags --libs gtk+-3.0` -export-dynamic
```

## Reference

For GTK: https://www.youtube.com/playlist?list=PLmMgHNtOIstZEvqYJncYUx52n8_OV0uWy

## Contributions 🤝

Contributions to this project are welcome! Feel free to submit a pull request if you have any suggestions or want to add more features. Please ensure your changes are well-tested and align with the project's goals.


## Get in Touch 📞

If you have any questions, suggestions, or feedback, don't hesitate to reach out to us. You can contact me on [LinkedIn](www.linkedin.com/in/jayjathar1409) 

## Languages and Tools

<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> 
<a href="https://www.gtk.org/" target="_blank" rel="noreferrer"> <img src="https://icongr.am/devicon/gimp-original-wordmark.svg" alt="c" width="40" height="40"/> </a>
</p>
