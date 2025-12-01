% ============================================================================
% csbeamer.cls - Computer Science Teaching Beamer Class
% A professional beamer class for CS university lectures
% ============================================================================

\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{csbeamer}[2024/11/23 v1.0 Computer Science Teaching Beamer Class]

% ============================================================================
% CLASS OPTIONS
% ============================================================================
\DeclareOption{10pt}{\PassOptionsToClass{10pt}{beamer}}
\DeclareOption{11pt}{\PassOptionsToClass{11pt}{beamer}}
\DeclareOption{12pt}{\PassOptionsToClass{12pt}{beamer}}
\DeclareOption{aspectratio=169}{\PassOptionsToClass{aspectratio=169}{beamer}}
\DeclareOption{aspectratio=43}{\PassOptionsToClass{aspectratio=43}{beamer}}
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{beamer}}
\ExecuteOptions{10pt,aspectratio=169}
\ProcessOptions\relax

% Load base class (respect user options)
\LoadClassWithOptions{beamer}

% ============================================================================
% REQUIRED PACKAGES
% ============================================================================
\RequirePackage[dvipsnames]{xcolor}
\RequirePackage{amsmath}
\RequirePackage{graphicx}
\RequirePackage{booktabs}
\RequirePackage[T1]{fontenc}
\RequirePackage{microtype}

% Font packages (XeLaTeX/LuaLaTeX support)
\RequirePackage{iftex}
\ifXeTeX
  \RequirePackage{fontspec}
  \RequirePackage{unicode-math}
  \setmainfont{Times New Roman}
  \setmathfont{Libertinus Math}
\else
  \ifLuaTeX
    \RequirePackage{fontspec}
    \RequirePackage{unicode-math}
    \setmainfont{Times New Roman}
    \setmathfont{Libertinus Math}
  \else
    % pdfLaTeX fallback
    \RequirePackage{mathptmx}
    \RequirePackage{mathpazo}
  \fi
\fi

% Typography
\linespread{1.05}

% TikZ for graphics
\RequirePackage{tikz}

% ============================================================================
% COLOR DEFINITIONS
% ============================================================================
% Code listing colors
\definecolor{codebg}{HTML}{F7F7F9}
\definecolor{coderule}{HTML}{E0E0E0}
\definecolor{codekw}{HTML}{005C99}
\definecolor{codecomment}{HTML}{777777}
\definecolor{codestring}{HTML}{AA5500}

% Additional theme colors
\definecolor{csblue}{HTML}{003366}
\definecolor{csred}{HTML}{8B0000}

% ============================================================================
% BEAMER THEME CONFIGURATION
% ============================================================================
\usetheme{Pittsburgh}
\usecolortheme{beaver}
% remove the entire footer area


% Remove navigation symbols
\setbeamertemplate{navigation symbols}{}

% ============================================================================
% CODE LISTINGS CONFIGURATION
% ============================================================================
\RequirePackage{listings}

\lstset{
  language=C++,
  basicstyle=\ttfamily\small,
  moredelim=[is][{\color{red}\ttfamily}]{@@}{@@},
  breaklines=true,
  frame=single,
  framerule=0.4pt,
  rulecolor=\color{coderule},
  backgroundcolor=\color{codebg},
  keywordstyle=\color{codekw}\bfseries,
  commentstyle=\itshape\color{codecomment},
  stringstyle=\color{codestring},
  tabsize=4,
  showstringspaces=false,
  numbers=left,
  numberstyle=\tiny\color{gray},
  numbersep=8pt
}

% Minted support (optional, requires -shell-escape)
\IfFileExists{minted.sty}{
  \RequirePackage{minted}
  \setminted{
    bgcolor=codebg,
    fontsize=\small,
    linenos=true,
    frame=lines,
    framesep=2mm
  }
}{}

% ============================================================================
% CUSTOM BOXES (tcolorbox)
% ============================================================================
\RequirePackage[most]{tcolorbox}

% Exercise box with gray title bar
\newtcolorbox{exercisebox}[1]{
  colback=white,
  colframe=black,
  boxrule=0.5pt,
  enhanced,
  title={Answers to #1},
  fonttitle=\bfseries\large,
  colbacktitle=gray!20,
  coltitle=black,
  attach boxed title to top left = {xshift=0mm,yshift=-2mm},
  boxed title style={boxrule=0.5pt,colframe=black}
}

%Note box with side marker
\newtcolorbox{notebox}[1][N]{%
  colback=gray!15,
  colframe=gray!60,
  boxrule=0pt,
  borderline west={2pt}{0pt}{gray!60},
  sharp corners,
  before skip=10pt,
  after skip=10pt,
  enhanced,
  overlay={%
      \node[
        draw,
        fill=white,
        circle,
        inner sep=2pt,
        font=\footnotesize\bfseries
      ] at ([xshift=-6mm,yshift=-4mm]frame.north west) {#1};
    }%
}

% Definition box (title must be provided by the writer)
\newtcolorbox{definitionbox}[1]{%
  colback=blue!5,% light blue background (distinct from example's green)
  colframe=blue!60,
  boxrule=0.5pt,
  enhanced,
  title={#1},%
  fonttitle=\bfseries,
  colbacktitle=blue!20,
  coltitle=black,
  attach boxed title to top left = {xshift=0mm,yshift=-2mm},%
  boxed title style={boxrule=0.5pt,colframe=blue!60}%
}

% Example box
\newtcolorbox{examplebox}[1][Example]{
  colback=green!5,
  colframe=green!60,
  boxrule=0.5pt,
  enhanced,
  title={#1},
  fonttitle=\bfseries,
  colbacktitle=green!20,
  coltitle=black,
  attach boxed title to top left = {xshift=0mm,yshift=-2mm},
  boxed title style={boxrule=0.5pt,colframe=green!60}
}

% Warning box
\newtcolorbox{warningbox}[1][Warning]{
  colback=red!5,
  colframe=red!60,
  boxrule=0.5pt,
  enhanced,
  title={#1},
  fonttitle=\bfseries,
  colbacktitle=red!20,
  coltitle=black,
  attach boxed title to top left = {xshift=0mm,yshift=-2mm},
  boxed title style={boxrule=0.5pt,colframe=red!60}
}

% ============================================================================
% CUSTOM COMMANDS
% ============================================================================

% Colored overbrace
\newcommand{\obrace}[3]{%
\overbrace{#1}^{\textcolor{#3}{\shortstack{#2}}}%
}


% Colored underbrace
\newcommand{\ubrace}[3]{%
\underbrace{#1}_{\textcolor{#3}{\shortstack{#2}}}%
}

% Highlighted text
\newcommand{\htext}[2]{\textcolor{#2}{#1}}

% Highlighted bold text
\newcommand{\hbtext}[2]{\textcolor{#2}{\textbf{#1}}}

% Highlighted italic text
\newcommand{\hitext}[2]{\textcolor{#2}{\textit{#1}}}

% Code inline command
\newcommand{\code}[1]{\texttt{#1}}

% C++ command
\newcommand{\cpp}{C\nolinebreak\hspace{-.05em}\raisebox{.4ex}{\tiny\bf +}\nolinebreak\hspace{-.10em}\raisebox{.4ex}{\tiny\bf +}}

% ============================================================================
% TITLE PAGE CONFIGURATION
% ============================================================================

% Custom variables
\def\@subtitle{}
\renewcommand{\subtitle}[1]{\def\@subtitle{#1}}

\def\@course{}
\newcommand{\course}[1]{\def\@course{#1}}

\def\@instructor{}
\newcommand{\instructor}[1]{\def\@instructor{#1}}

\def\@university{}
\newcommand{\university}[1]{\def\@university{#1}}

\def\@department{}
\newcommand{\department}[1]{\def\@department{#1}}

% Empty date by default
\date{}

% ============================================================================
% FRAME TITLE CONFIGURATION
% ============================================================================
\setbeamertemplate{frametitle}{
  \vspace*{0.5em}
  \insertframetitle
  \vspace*{-0.3em}
}

% ============================================================================
% FOOTER CONFIGURATION
% ============================================================================
\setbeamertemplate{footline}{
  \leavevmode%
  \hbox{%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,center]{author in head/foot}%
      \usebeamerfont{author in head/foot}\insertshortauthor
    \end{beamercolorbox}%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,center]{title in head/foot}%
      \usebeamerfont{title in head/foot}\insertshorttitle
    \end{beamercolorbox}%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,right]{date in head/foot}%
      \usebeamerfont{date in head/foot}\insertshortdate{}\hspace*{2em}
      \insertframenumber{} / \inserttotalframenumber\hspace*{2ex}
    \end{beamercolorbox}}%
  \vskip0pt%
}

% ============================================================================
% SECTION PAGE TEMPLATE
% ============================================================================
\AtBeginSection[]{
  \begin{frame}
    \vfill
    \centering
    \begin{beamercolorbox}[sep=8pt,center]{title}
      \usebeamerfont{title}\insertsectionhead\par%
    \end{beamercolorbox}
    \vfill
  \end{frame}
}

\endinput