#define		Cc_StateIdle			1001
#define		Cc_StateRecord			1002
#define		Cc_StateRecordPause		1003
#define		Cc_StateViewEventLog	1004
#define		Cc_StatePlay			1005
#define		Cc_StatePlayPause		1006

#define		Cc_Error		2001
#define		Cc_Warning		2002
#define		Cc_TestPassed	2003

#define		WINDOWTITLE_LOC		"VFP Active Accessibility Test Harness"
#define		TESTHARNESSPATH_LOC	HOME() + 'TOOLS\TEST\'

#define		MSG_PROGERROR_LOC	  "Application error. "
#define		MSG_PLAYBACKERROR_LOC "Error running the script. "
#define     MSG_RECORDING1_LOC   "Recording the script..."
#define     MSG_RECORDING2_LOC   "Paused the recording..."
#define     MSG_PLAYBACK1_LOC    "Preparing to play the script..."
#define     MSG_PLAYBACK2_LOC    "Playback has been paused."
#define     MSG_PLAYBACK10_LOC   "Playback stopped."
#define     MSG_SCRIPTEXIST_LOC	 "The test script '" + .cTestName + "' already exists. Overwrite?"
#define     MSG_TESTRUN_LOC      "The Test Run " + STR(.nTestRun) + " has been completed"
#define     MSG_TESTRUNNO_LOC    "  Run number:"
#define     MSG_NOFOCUS_LOC      "The object " + ALLTRIM(cFormName) + " does not have the focus. "
#define     MSG_NOFOCUS2_LOC     "The object " + cEpath + " does not have the focus."
#define     MSG_SCRIPTLINE_LOC   "Script line "
#define     MSG_SUPSEND_LOC      "Suspending..."
#define     MSG_PARSE1_LOC       "Parsing the script..."
#define     MSG_PARSE2_LOC       "Parsing the script - item "
#define     MSG_SCRIPTSAVING_LOC "Saving the script..."
#define     MSG_NOOBJECT_LOC     "The object " + cEpath + " doesn't exists."
#define     MSG_NONVFP_LOC		"The application selected is not VFP."
#define     MSG_RUNTIME_LOC		"Test Harness is not supported in VFP runtime libraries."
#define     MSG_CHKLOG_LOC		'Please check the test log for details'
#define     MSG_TESTNAME_LOC	"Enter Test Name "
#define     MSG_ERROR1_LOC	    "A VFP error has occured."
#define     MSG_ERROR_OPN1_LOC	"Could not open aatestlog.dbf"
#define     MSG_ERROR_OPN2_LOC	"Could not open aascripts.dbf"
#define     MSG_NOSCRIPT_LOC    "No script has been selected from the list to delete."
#define     MSG_NOSCRIPT2_LOC   "No script has been selected from the list"
#define     MSG_SELSCRIPT_LOC   "You must select a script to edit."
#define     MSG_NOTESTLOG_LOC   "No test log has been selected from the list to delete."
#define     MSG_DELSCRIPT1_LOC	"Do you want to delete the selected scripts?"
#define     MSG_DELSCRIPT2_LOC	"Do you want to permanently remove (pack) the deleted scripts?"
#define     MSG_DELLOG1_LOC		"Do you want to delete the selected test logs?"
#define     MSG_DELLOG2_LOC		"Do you want to permanently remove (pack) the deleted testlogs?"
#define		MSG_TESTPASSED_LOC	"Test Passed."
#define		MSG_RUNS_OVER_LOC	"Runs Completed"
#define     MSG_WRONGSTARTWINDOW_LOC  "The startup form/window '" + ALLTRIM(cFormName) + "' is not available"

#define		GW_HWNDFIRST        0
#define		GW_HWNDLAST         1
#define		GW_HWNDNEXT         2
#define		GW_HWNDPREV         3

#define     OBJID_WINDOW        	0x00000000
#define     OBJID_SYSMENU       	0xFFFFFFFF
#define     OBJID_TITLEBAR      	0xFFFFFFFE
#define     OBJID_MENU          	0xFFFFFFFD
#define     OBJID_CLIENT        	0xFFFFFFFC
#define     OBJID_VSCROLL       	0xFFFFFFFB
#define     OBJID_HSCROLL       	0xFFFFFFFA
#define     OBJID_SIZEGRIP      	0xFFFFFFF9
#define     OBJID_CARET         	0xFFFFFFF8
#define     OBJID_CURSOR        	0xFFFFFFF7
#define     OBJID_ALERT         	0xFFFFFFF6
#define     OBJID_SOUND         	0xFFFFFFF5
#define     OBJID_QUERYCLASSNAMEIDX 0xFFFFFFF4
#define     OBJID_NATIVEOM      	0xFFFFFFF0

#define		IAccGuid			"618736E0-3C3D-11CF-810C-00AA00389B71"

#define     CHILDID_SELF        0

#if .f.
#define		SELFLAG_NONE            0
#define		SELFLAG_TAKEFOCUS       1
#define		SELFLAG_TAKESELECTION   2
#define		SELFLAG_EXTENDSELECTION 4
#define		SELFLAG_ADDSELECTION    8
#define		SELFLAG_REMOVESELECTION 16
#endif

#define	NAVDIR_MIN	0
#define	NAVDIR_UP	0x1
#define	NAVDIR_DOWN	0x2
#define	NAVDIR_LEFT	0x3
#define	NAVDIR_RIGHT	0x4
#define	NAVDIR_NEXT		0x5
#define	NAVDIR_PREVIOUS	0x6
#define	NAVDIR_FIRSTCHILD	0x7
#define	NAVDIR_LASTCHILD	0x8
#define	NAVDIR_MAX	0x9

*// Output from DISPID_ACC_ROLE
#define ROLE_SYSTEM_TITLEBAR            0x00000001
#define ROLE_SYSTEM_MENUBAR             0x00000002
#define ROLE_SYSTEM_SCROLLBAR           0x00000003
#define ROLE_SYSTEM_GRIP                0x00000004
#define ROLE_SYSTEM_SOUND               0x00000005
#define ROLE_SYSTEM_CURSOR              0x00000006
#define ROLE_SYSTEM_CARET               0x00000007
#define ROLE_SYSTEM_ALERT               0x00000008
#define ROLE_SYSTEM_WINDOW              0x00000009
#define ROLE_SYSTEM_CLIENT              0x0000000A
#define ROLE_SYSTEM_MENUPOPUP           0x0000000B
#define ROLE_SYSTEM_MENUITEM            0x0000000C
#define ROLE_SYSTEM_TOOLTIP             0x0000000D
#define ROLE_SYSTEM_APPLICATION         0x0000000E
#define ROLE_SYSTEM_DOCUMENT            0x0000000F
#define ROLE_SYSTEM_PANE                0x00000010
#define ROLE_SYSTEM_CHART               0x00000011
#define ROLE_SYSTEM_DIALOG              0x00000012
#define ROLE_SYSTEM_BORDER              0x00000013
#define ROLE_SYSTEM_GROUPING            0x00000014
#define ROLE_SYSTEM_SEPARATOR           0x00000015
#define ROLE_SYSTEM_TOOLBAR             0x00000016
#define ROLE_SYSTEM_STATUSBAR           0x00000017
#define ROLE_SYSTEM_TABLE               0x00000018
#define ROLE_SYSTEM_COLUMNHEADER        0x00000019
#define ROLE_SYSTEM_ROWHEADER           0x0000001A
#define ROLE_SYSTEM_COLUMN              0x0000001B
#define ROLE_SYSTEM_ROW                 0x0000001C
#define ROLE_SYSTEM_CELL                0x0000001D
#define ROLE_SYSTEM_LINK                0x0000001E
#define ROLE_SYSTEM_HELPBALLOON         0x0000001F
#define ROLE_SYSTEM_CHARACTER           0x00000020
#define ROLE_SYSTEM_LIST                0x00000021
#define ROLE_SYSTEM_LISTITEM            0x00000022
#define ROLE_SYSTEM_OUTLINE             0x00000023
#define ROLE_SYSTEM_OUTLINEITEM         0x00000024
#define ROLE_SYSTEM_PAGETAB             0x00000025
#define ROLE_SYSTEM_PROPERTYPAGE        0x00000026
#define ROLE_SYSTEM_INDICATOR           0x00000027
#define ROLE_SYSTEM_GRAPHIC             0x00000028
#define ROLE_SYSTEM_STATICTEXT          0x00000029
#define ROLE_SYSTEM_TEXT                0x0000002A  
#define ROLE_SYSTEM_PUSHBUTTON          0x0000002B
#define ROLE_SYSTEM_CHECKBUTTON         0x0000002C
#define ROLE_SYSTEM_RADIOBUTTON         0x0000002D
#define ROLE_SYSTEM_COMBOBOX            0x0000002E
#define ROLE_SYSTEM_DROPLIST            0x0000002F
#define ROLE_SYSTEM_PROGRESSBAR         0x00000030
#define ROLE_SYSTEM_DIAL                0x00000031
#define ROLE_SYSTEM_HOTKEYFIELD         0x00000032
#define ROLE_SYSTEM_SLIDER              0x00000033
#define ROLE_SYSTEM_SPINBUTTON          0x00000034
#define ROLE_SYSTEM_DIAGRAM             0x00000035
#define ROLE_SYSTEM_ANIMATION           0x00000036
#define ROLE_SYSTEM_EQUATION            0x00000037
#define ROLE_SYSTEM_BUTTONDROPDOWN      0x00000038
#define ROLE_SYSTEM_BUTTONMENU          0x00000039
#define ROLE_SYSTEM_BUTTONDROPDOWNGRID  0x0000003A
#define ROLE_SYSTEM_WHITESPACE          0x0000003B
#define ROLE_SYSTEM_PAGETABLIST         0x0000003C
#define ROLE_SYSTEM_CLOCK               0x0000003D

#define SELFLAG_NONE                    0x00000000
#define SELFLAG_TAKEFOCUS               0x00000001
#define SELFLAG_TAKESELECTION           0x00000002
#define SELFLAG_EXTENDSELECTION         0x00000004
#define SELFLAG_ADDSELECTION            0x00000008
#define SELFLAG_REMOVESELECTION         0x00000010
#define SELFLAG_VALID                   0x0000001F

#define INPUT_MOUSE     0
#define INPUT_KEYBOARD  1
#define INPUT_HARDWARE  2


#define KEYEVENTF_EXTENDEDKEY 0x0001
#define KEYEVENTF_KEYUP       0x0002

*#if(_WIN32_WINNT >= 0x0500)
#define KEYEVENTF_UNICODE     0x0004
#define KEYEVENTF_SCANCODE    0x0008
*#endif /* _WIN32_WINNT >= 0x0500 */


#define VK_SHIFT          0x10
#define VK_CONTROL        0x11
#define VK_LSHIFT         0xA0
#define VK_RSHIFT         0xA1
#define VK_LCONTROL       0xA2
#define VK_RCONTROL       0xA3
#define VK_LMENU          0xA4
#define VK_RMENU          0xA5

#define MOUSEEVENTF_MOVE        0x0001 
#define MOUSEEVENTF_LEFTDOWN    0x0002 
#define MOUSEEVENTF_LEFTUP      0x0004 
#define MOUSEEVENTF_RIGHTDOWN   0x0008 
#define MOUSEEVENTF_RIGHTUP     0x0010 
#define MOUSEEVENTF_MIDDLEDOWN  0x0020 
#define MOUSEEVENTF_MIDDLEUP    0x0040 
#define MOUSEEVENTF_WHEEL       0x0800 
#define MOUSEEVENTF_ABSOLUTE    0x8000 

*-- The AA object state constants
#define		Cn_State_Unavailable	0
#define		Cn_State_Selected		1
#define		Cn_State_Focused		2
#define		Cn_State_Pressed		3
#define		Cn_State_Checked		4
#define		Cn_State_Mixed			5
#define		Cn_State_Readonly		6
#define		Cn_State_HotTracked		7
#define		Cn_State_Default		8
#define		Cn_State_Expanded		9
#define		Cn_State_Collapsed		10
#define		Cn_State_Busy			11
#define		Cn_State_Floating		12
#define		Cn_State_Marqueed		13
#define		Cn_State_Animated		14
#define		Cn_State_Invisible		15
#define		Cn_State_Offscreen		16
#define		Cn_State_Sizeable		17
#define		Cn_State_Moveable		18
#define		Cn_State_SelfVoicing	19
#define		Cn_State_Focusable		20
#define		Cn_State_Selectable		21
#define		Cn_State_Linked			22
#define		Cn_State_Traversed		23
#define		Cn_State_MultiSelectable	24
#define		Cn_State_ExtSelecteable	24
#define		Cn_State_Alert_Low		26
#define		Cn_State_Alert_Medium	27
#define		Cn_State_Alert_High		28
#define		Cn_State_Protected		29

#define		Cc_EOL					CHR(13)

#define		Cc_Directive			"*"