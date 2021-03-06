/*
 *  gtkTtk_Elements.h
 * -------------------
 *
 * This file is part of the gtkTtk package, a Tk/Tile based theme that uses
 * Gtk/GNOME for drawing.
 *
 * Copyright (C) 2004-2008 by:
 * Georgios Petasis, petasis@iit.demokritos.gr,
 * Software and Knowledge Engineering Laboratory,
 * Institute of Informatics and Telecommunications,
 * National Centre for Scientific Research (NCSR) "Demokritos",
 * Aghia Paraskevi, 153 10, Athens, Greece.
 */
#include "gtkTtk_TkHeaders.h"

extern int GtkTtk_Init_Background(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Button(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_CheckButton(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_RadioButton(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Menubutton(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_ToolButton(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Entry(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Combobox(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Labelframe(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Scrollbar(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Notebook(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_TreeView(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Progress(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Scale(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Paned(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_SizeGrip(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Separator(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
extern int GtkTtk_Init_Arrows(Tcl_Interp *interp,
                                  GtkTtk_WidgetCache **, Ttk_Theme themePtr);
