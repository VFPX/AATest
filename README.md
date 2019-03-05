# Visual FoxPro Automated Test Harness

<u>[Introduction](#INTRODUCTION)</u>

<u>[Running the Tool](#RUNNING_THE_TOOL)</u>

<u>[Features](#FEATURES)</u>

<u>[Test Harness Window](#UI_WINDOW)</u>

<u>[Advanced](#Advanced)</u>

<u>[Limitations](#Limitations)</u>

<u>[Tips](#TIPS)</u>

<u>[Test Harness files](#Test_tool_files)</u>

## <a name="INTRODUCTION"></a>Introduction

The Automated Test Harness tool has been built on Microsoft Active Accessibility (MSAA) technology supported in Visual FoxPro. The Mouse and Keyboard events in your VFP applications can be recorded and played back at any time. This is useful for doing automated testing.

## <a name="RUNNING_THE_TOOL"></a>Running the Tool

All files for the test harness are installed in the \Tools\Test\ folder under the VFP home directory.

To launch the test harness application (AATEST.APP):

* Select the **Do…** menu item from the Program menu. When the Do dialog appears, locate and select the **AATEST.APP** file in your \Tools\Test folder.

* From the Command Window, type the following:

    DO (HOME() + "tools\test\aatest")

To record a script:

1. Click the **Record** button on the toolbar or select the **Record** menu item from the Record menu.

2. You will see a list of available applications. Make sure to select a running instance of Visual FoxPro. You can also launch and use a new instance of Visual FoxPro by clicking on the Fox button.

3. When prompted, enter a unique name to identify the test. This will allow you to easily find it later so you can play it back.

4. The selected VFP application window will be brought forward. At this point, you are ready to record events. You can start by entering commands in the Command Window or selecting a menu item. You can continue recording events in your custom forms with mouse and/or keyboard interaction.

    Note: Make sure you click the parent menu first before selecting a submenu (e.g., Tools->Wizards). You cannot just move your mouse to select the sub menu, it should be clicked.

5. When finished, click the Stop button. You can also pause and resume recording.

To view the recorded script (events log), which has been selected or previously recorded; click the **Edit the script** toolbar button.  

To play back a script, select the script you want to run and click the **Play** button. If the program detects an error, you will see a prompt in the testing application.  

To see the results of your playback (test log), select the **Test Log** tab.

    Note: Only one instance of the test tool can be run from one installation. This is because the test tables are opened exclusively.

## <a name="FEATURES"></a>Features

With the Automated Test Harness you can:

* Work with all controls on a form

* Call multiple forms

* Use ActiveX controls and dialog boxes within a window

* Use hotkeys and special keys such as F2, PgDn, and Alt+S

* Access menus and sub-menus

* Click the title bar (including control box, close box, min and max buttons)

* Recalculate the mouse events positions if the object position has changed.

* Playback the events properly even if the main VFP application has changed (re-sized or maximized)

* Record by entering commands in the Command Window or selecting menu items

* Set options in the **Options** tab to better control record and playback

* Enable coverage logging using the settings in the **Coverage Log** tab

* View the test log to analyze time taken to run the script and memory usage

### <a name="RECORDER"></a>Recorder

The recorder uses Visual FoxPro event logging to register all events for your application, such as those from the mouse and keyboard. You can choose a separate instance of Visual FoxPro already running or launch a new one to record your script.

### <a name="PLAYBACK"></a>Playback

The playback logic uses Active Accessibility in part to find objects and window positions recorded in the script. The program emulates output events like keyboard and mouse ones using windows APIs and Visual FoxPro functions. More than one script can be chosen to play back at any time.

## <a name="UI_WINDOW"></a>Test Harness Window

### Scripts Tab

This tab allows you to view and work with existing scripts that were recorded earlier with the Test Harness. You can edit any script by highlighting it in the grid and then clicking the **Edit the test script** toolbar button or selecting the **Edit Script** menu item. One or more scripts can be played back at a time. Click on checkboxes next to the scripts you want to play back and then click the **Play the script** toolbar button or select the **Play** menu item. The following options are available in this tab:

* **Scripts grid:** displays all recorded scripts. Information for a script is displayed on a line including pre and post scripts that get executed before/after the main script. The main script uses the event log. Items checked in the first column are used when deleting or playing back scripts. The Edit script function only applies to the current row highlighted in the grid.

* **Delete button:** will delete scripts selected (first column checked) in the grid.

### Options Tab

This tab has optional settings you can select for both recording and playback. The following options are available in this tab:

* **Overwrite the existing script:** if checked, an existing script of the same name will automatically be overwritten without prompting for confirmation during recording.

* **Always launch new VFP Window:** if checked, recording will always start with a new instance of VFP.

* **Validate startup window before playback:** if checked, the startup window is validated against the recorded window. If it doesn't match, it will prompt with an error. The test will fail if an unexpected window appears or an error occurs.

* **Check for presence of each object:** if checked, the object associated with every event will be verified before playback. For example, if the keypress event is recorded on a textbox, the presence of the same object name is verified before playing back the event. An error will be displayed if the object does not exist.

* **Check for program error:** this option is used to report an error in the testing application. If checked and there is an error during playback, the error will be logged in the test log. The test results can be viewed in the **Test Log** tab.

* **Run count:** specifies the number of times each script selected in the **Scripts** tab is run during play back.

* **Delay between events:** allows you to specify a specific delay (milliseconds) between events during playback.

* **On script failure:** provides error handling options if a problem occurs during script playback. You can **abort** the entire script, **skip** only the event that failed or **continue** playing back the script after retrying the failed event.

### Test Log

This tab has details on results from test runs (playbacks). The following options are available in this tab:

* **Test Log grid:** displays useful information on recently played back scripts. The memory usage is the difference in the memory before and after the test run.

* **Delete button:** deletes the selected test log.

### Coverage Log

You can set coverage logging by using the settings in the **Coverage Log** tab. During playback, it will turn on coverage logging and save the log in the file specified.

* **Turn on coverage logging during playback:** if checked, creates a coverage log during playback of a script.

* **Overwrite the log if file exists:** if checked, will automatically overwrite the log if it already exists without confirmation.

* **View Log button:** displays a coverage log for the test if one exists.

* **Coverage Profiler button:** will invoke the Coverage Profiler. The Coverage Profiler will load the coverage log if it exists, otherwise it will prompt for a log.

## <a name="Limitations"></a><a name="Advanced"></a>Advanced

### Inserting a New Recording

A set of new events can be recorded and inserted into a script by using the **Insert new recording** toolbar button or **Insert script** menu item from the Playback menu. To insert a new script at a particular location in the existing script, you must first insert the script directive *&lt;PAUSE&gt; at this location. Once the directive is inserted, playback the script. The script will pause at the specified location. At this point, you can now insert a new script by selecting the above option (e.g., Insert new recording toolbar button). After you have inserted the new script, you should go back to the original script location and remove the *&lt;PAUSE&gt; script directive.

### Script Directives

You can edit scripts by selecting the **Edit the script** toolbar button. The following are script directives which can be inserted into a script:

* ***&lt;PAUSE&gt;:** pauses the playback at a particular point of the script so that you can insert a new script recording.

* ***COMMAND &lt;command&gt;:** executes the specified command.

* ***DO &lt;program name&gt;:** executes the specified program.

* ***= &lt;function&gt;:** calls the specified function.

* ***IF &lt;expression&gt;**, ***ELSE**, ***ENDIF:** the events between *IF and *ENDIF in the script will be run if the <expression> evaluates to true (.T.). If the *ELSE directive is given, the events between *IF and *ELSE will be run if the <expression> is .T. otherwise the events between *ELSE and *ENDIF will be run.

**Note:** By default, the commands (or program calls) specified by the script directives will be executed in the VFP instance running the Test Harness application. To execute the commands in the testing application itself, it should be preceded by **.oVFP**.

    COMMAND .oVFP.DoCmd('wait window ')

## Limitations

The following are limitations and issues with the Test Harness that you should be aware of when recording scripts:

* The Shift+Tab and Ctrl+Tab keyboard commands should not be used.

* Clicking the edges of menus or objects may not work consistently.

* You cannot use the mouse to drag and drop a window or an object.

* Clicking on the scrollbar of a combo box is not played back properly because the window name/title is not recorded.

* For proper keystroke interpretation, scripts recorded under specific keyboard layouts must be played back under the same keyboard layout. For instance, if you record a script with a Windows input locale of German and a keyboard layout of German, you must play back the script with the same locale and layout configuration.

* The Test Harness is not supported with the Visual FoxPro runtime libraries. You need to test your applications using the core Visual FoxPro product.

* If you use the Enter key to trigger the default button (Default property = .T.), you should ensure that the button first has focus.

## <a name="TIPS"></a>Tips

The following tips may be useful when using the Test Harness:

* It is recommended that you close all other Windows applications when running the Test Harness. This will avoid confusion when recording a script because the dialog will display a list of all running Windows applications. The target application you want to select must be a running instance of Visual FoxPro.

* It is often better to record many small scripts instead of one large one for big applications. This offers more flexibility in that only specific scripts would need to be re-recorded for changes made in the future.

## <a name="Test_tool_files"></a>Test Harness Files

The following set of files is used by the Automated Test Harness:

<table width="667" style='border: currentColor; border-image: none; width: 6.95in; text-transform: none; text-indent: 0px; letter-spacing: normal; font-family: "Times New Roman"; margin-left: 30.6pt; word-spacing: 0px; border-collapse: collapse; orphans: 2; widows: 2; -webkit-text-stroke-width: 0px; text-decoration-style: initial; text-decoration-color: initial;' border="1" cellspacing="0" cellpadding="0">

<tbody>

<tr>

<td valign="top" style="border-width: 1.5pt medium 1pt; border-style: solid none; border-color: green currentColor; padding: 0in 5.4pt;">

File Name

</td>

<td valign="top" style="border-width: 1.5pt medium 1pt; border-style: solid none; border-color: green currentColor; padding: 0in 5.4pt;">

Extensions

</td>

<td width="494" valign="top" style="border-width: 1.5pt medium 1pt; border-style: solid none; border-color: green currentColor; padding: 0in 5.4pt; width: 5.15in;">

Description

</td>

</tr>

<tr>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

AATest

</td>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

app/pjx/pjt

</td>

<td width="494" valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none; width: 5.15in;">

The main program/project

</td>

</tr>

<tr>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

AATest

</td>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

scx/sct

</td>

<td width="494" valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none; width: 5.15in;">

The main form including the recording/playback logic

</td>

</tr>

<tr>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

AAUtils

</td>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

vcx/vct

</td>

<td width="494" valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none; width: 5.15in;">

The class library which has the class cstglobal. This is shared by different forms.

</td>

</tr>

<tr>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

AAScripts

</td>

<td valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none;">

dbf/fpt

</td>

<td width="494" valign="top" style="padding: 0in 5.4pt; border: currentColor; border-image: none; width: 5.15in;">

The event logging table. This stores all the scripts that are created.

</td>

</tr>

<tr>

<td valign="top" style="border-width: medium medium 1.5pt; border-style: none none solid; border-color: currentColor currentColor green; padding: 0in 5.4pt;">

AATestLog

</td>

<td valign="top" style="border-width: medium medium 1.5pt; border-style: none none solid; border-color: currentColor currentColor green; padding: 0in 5.4pt;">

dbf/fpt

</td>

<td width="494" valign="top" style="border-width: medium medium 1.5pt; border-style: none none solid; border-color: currentColor currentColor green; padding: 0in 5.4pt; width: 5.15in;">

The test log table which has the information of each test run.

</td>

</tr>

</tbody>

</table>

## Other

See the "How to: Use the Automated Test Harness" topic in VFP help for additional details.
