/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../LibraryLoader.dart';

var _dylib = Library.instance().dylib;

class QStyle_StateFlag {
  static const State_None = 0;
  static const State_Enabled = 1;
  static const State_Raised = 2;
  static const State_Sunken = 4;
  static const State_Off = 8;
  static const State_NoChange = 16;
  static const State_On = 32;
  static const State_DownArrow = 64;
  static const State_Horizontal = 128;
  static const State_HasFocus = 256;
  static const State_Top = 512;
  static const State_Bottom = 1024;
  static const State_FocusAtBorder = 2048;
  static const State_AutoRaise = 4096;
  static const State_MouseOver = 8192;
  static const State_UpArrow = 16384;
  static const State_Selected = 32768;
  static const State_Active = 65536;
  static const State_Window = 131072;
  static const State_Open = 262144;
  static const State_Children = 524288;
  static const State_Item = 1048576;
  static const State_Sibling = 2097152;
  static const State_Editing = 4194304;
  static const State_KeyboardFocusChange = 8388608;
  static const State_ReadOnly = 33554432;
  static const State_Small = 67108864;
  static const State_Mini = 134217728;
}

class QStyle_PrimitiveElement {
  static const PE_Frame = 0;
  static const PE_FrameDefaultButton = 1;
  static const PE_FrameDockWidget = 2;
  static const PE_FrameFocusRect = 3;
  static const PE_FrameGroupBox = 4;
  static const PE_FrameLineEdit = 5;
  static const PE_FrameMenu = 6;
  static const PE_FrameStatusBarItem = 7;
  static const PE_FrameTabWidget = 8;
  static const PE_FrameWindow = 9;
  static const PE_FrameButtonBevel = 10;
  static const PE_FrameButtonTool = 11;
  static const PE_FrameTabBarBase = 12;
  static const PE_PanelButtonCommand = 13;
  static const PE_PanelButtonBevel = 14;
  static const PE_PanelButtonTool = 15;
  static const PE_PanelMenuBar = 16;
  static const PE_PanelToolBar = 17;
  static const PE_PanelLineEdit = 18;
  static const PE_IndicatorArrowDown = 19;
  static const PE_IndicatorArrowLeft = 20;
  static const PE_IndicatorArrowRight = 21;
  static const PE_IndicatorArrowUp = 22;
  static const PE_IndicatorBranch = 23;
  static const PE_IndicatorButtonDropDown = 24;
  static const PE_IndicatorItemViewItemCheck = 25;
  static const PE_IndicatorCheckBox = 26;
  static const PE_IndicatorDockWidgetResizeHandle = 27;
  static const PE_IndicatorHeaderArrow = 28;
  static const PE_IndicatorMenuCheckMark = 29;
  static const PE_IndicatorProgressChunk = 30;
  static const PE_IndicatorRadioButton = 31;
  static const PE_IndicatorSpinDown = 32;
  static const PE_IndicatorSpinMinus = 33;
  static const PE_IndicatorSpinPlus = 34;
  static const PE_IndicatorSpinUp = 35;
  static const PE_IndicatorToolBarHandle = 36;
  static const PE_IndicatorToolBarSeparator = 37;
  static const PE_PanelTipLabel = 38;
  static const PE_IndicatorTabTear = 39;
  static const PE_IndicatorTabTearLeft = 39;
  static const PE_PanelScrollAreaCorner = 40;
  static const PE_Widget = 41;
  static const PE_IndicatorColumnViewArrow = 42;
  static const PE_IndicatorItemViewItemDrop = 43;
  static const PE_PanelItemViewItem = 44;
  static const PE_PanelItemViewRow = 45;
  static const PE_PanelStatusBar = 46;
  static const PE_IndicatorTabClose = 47;
  static const PE_PanelMenu = 48;
  static const PE_IndicatorTabTearRight = 49;
  static const PE_CustomBase = 251658240;
}

class QStyle_ControlElement {
  static const CE_PushButton = 0;
  static const CE_PushButtonBevel = 1;
  static const CE_PushButtonLabel = 2;
  static const CE_CheckBox = 3;
  static const CE_CheckBoxLabel = 4;
  static const CE_RadioButton = 5;
  static const CE_RadioButtonLabel = 6;
  static const CE_TabBarTab = 7;
  static const CE_TabBarTabShape = 8;
  static const CE_TabBarTabLabel = 9;
  static const CE_ProgressBar = 10;
  static const CE_ProgressBarGroove = 11;
  static const CE_ProgressBarContents = 12;
  static const CE_ProgressBarLabel = 13;
  static const CE_MenuItem = 14;
  static const CE_MenuScroller = 15;
  static const CE_MenuVMargin = 16;
  static const CE_MenuHMargin = 17;
  static const CE_MenuTearoff = 18;
  static const CE_MenuEmptyArea = 19;
  static const CE_MenuBarItem = 20;
  static const CE_MenuBarEmptyArea = 21;
  static const CE_ToolButtonLabel = 22;
  static const CE_Header = 23;
  static const CE_HeaderSection = 24;
  static const CE_HeaderLabel = 25;
  static const CE_ToolBoxTab = 26;
  static const CE_SizeGrip = 27;
  static const CE_Splitter = 28;
  static const CE_RubberBand = 29;
  static const CE_DockWidgetTitle = 30;
  static const CE_ScrollBarAddLine = 31;
  static const CE_ScrollBarSubLine = 32;
  static const CE_ScrollBarAddPage = 33;
  static const CE_ScrollBarSubPage = 34;
  static const CE_ScrollBarSlider = 35;
  static const CE_ScrollBarFirst = 36;
  static const CE_ScrollBarLast = 37;
  static const CE_FocusFrame = 38;
  static const CE_ComboBoxLabel = 39;
  static const CE_ToolBar = 40;
  static const CE_ToolBoxTabShape = 41;
  static const CE_ToolBoxTabLabel = 42;
  static const CE_HeaderEmptyArea = 43;
  static const CE_ColumnViewGrip = 44;
  static const CE_ItemViewItem = 45;
  static const CE_ShapedFrame = 46;
  static const CE_CustomBase = 4026531840;
}

class QStyle_SubElement {
  static const SE_PushButtonContents = 0;
  static const SE_PushButtonFocusRect = 1;
  static const SE_CheckBoxIndicator = 2;
  static const SE_CheckBoxContents = 3;
  static const SE_CheckBoxFocusRect = 4;
  static const SE_CheckBoxClickRect = 5;
  static const SE_RadioButtonIndicator = 6;
  static const SE_RadioButtonContents = 7;
  static const SE_RadioButtonFocusRect = 8;
  static const SE_RadioButtonClickRect = 9;
  static const SE_ComboBoxFocusRect = 10;
  static const SE_SliderFocusRect = 11;
  static const SE_ProgressBarGroove = 12;
  static const SE_ProgressBarContents = 13;
  static const SE_ProgressBarLabel = 14;
  static const SE_ToolBoxTabContents = 15;
  static const SE_HeaderLabel = 16;
  static const SE_HeaderArrow = 17;
  static const SE_TabWidgetTabBar = 18;
  static const SE_TabWidgetTabPane = 19;
  static const SE_TabWidgetTabContents = 20;
  static const SE_TabWidgetLeftCorner = 21;
  static const SE_TabWidgetRightCorner = 22;
  static const SE_ItemViewItemCheckIndicator = 23;
  static const SE_TabBarTearIndicator = 24;
  static const SE_TabBarTearIndicatorLeft = 24;
  static const SE_TreeViewDisclosureItem = 25;
  static const SE_LineEditContents = 26;
  static const SE_FrameContents = 27;
  static const SE_DockWidgetCloseButton = 28;
  static const SE_DockWidgetFloatButton = 29;
  static const SE_DockWidgetTitleBarText = 30;
  static const SE_DockWidgetIcon = 31;
  static const SE_CheckBoxLayoutItem = 32;
  static const SE_ComboBoxLayoutItem = 33;
  static const SE_DateTimeEditLayoutItem = 34;
  static const SE_LabelLayoutItem = 35;
  static const SE_ProgressBarLayoutItem = 36;
  static const SE_PushButtonLayoutItem = 37;
  static const SE_RadioButtonLayoutItem = 38;
  static const SE_SliderLayoutItem = 39;
  static const SE_SpinBoxLayoutItem = 40;
  static const SE_ToolButtonLayoutItem = 41;
  static const SE_FrameLayoutItem = 42;
  static const SE_GroupBoxLayoutItem = 43;
  static const SE_TabWidgetLayoutItem = 44;
  static const SE_ItemViewItemDecoration = 45;
  static const SE_ItemViewItemText = 46;
  static const SE_ItemViewItemFocusRect = 47;
  static const SE_TabBarTabLeftButton = 48;
  static const SE_TabBarTabRightButton = 49;
  static const SE_TabBarTabText = 50;
  static const SE_ShapedFrameContents = 51;
  static const SE_ToolBarHandle = 52;
  static const SE_TabBarScrollLeftButton = 53;
  static const SE_TabBarScrollRightButton = 54;
  static const SE_TabBarTearIndicatorRight = 55;
  static const SE_PushButtonBevel = 56;
  static const SE_CustomBase = 4026531840;
}

class QStyle_ComplexControl {
  static const CC_SpinBox = 0;
  static const CC_ComboBox = 1;
  static const CC_ScrollBar = 2;
  static const CC_Slider = 3;
  static const CC_ToolButton = 4;
  static const CC_TitleBar = 5;
  static const CC_Dial = 6;
  static const CC_GroupBox = 7;
  static const CC_MdiControls = 8;
  static const CC_CustomBase = 4026531840;
}

class QStyle_SubControl {
  static const SC_None = 0;
  static const SC_ScrollBarAddLine = 1;
  static const SC_ScrollBarSubLine = 2;
  static const SC_ScrollBarAddPage = 4;
  static const SC_ScrollBarSubPage = 8;
  static const SC_ScrollBarFirst = 16;
  static const SC_ScrollBarLast = 32;
  static const SC_ScrollBarSlider = 64;
  static const SC_ScrollBarGroove = 128;
  static const SC_SpinBoxUp = 1;
  static const SC_SpinBoxDown = 2;
  static const SC_SpinBoxFrame = 4;
  static const SC_SpinBoxEditField = 8;
  static const SC_ComboBoxFrame = 1;
  static const SC_ComboBoxEditField = 2;
  static const SC_ComboBoxArrow = 4;
  static const SC_ComboBoxListBoxPopup = 8;
  static const SC_SliderGroove = 1;
  static const SC_SliderHandle = 2;
  static const SC_SliderTickmarks = 4;
  static const SC_ToolButton = 1;
  static const SC_ToolButtonMenu = 2;
  static const SC_TitleBarSysMenu = 1;
  static const SC_TitleBarMinButton = 2;
  static const SC_TitleBarMaxButton = 4;
  static const SC_TitleBarCloseButton = 8;
  static const SC_TitleBarNormalButton = 16;
  static const SC_TitleBarShadeButton = 32;
  static const SC_TitleBarUnshadeButton = 64;
  static const SC_TitleBarContextHelpButton = 128;
  static const SC_TitleBarLabel = 256;
  static const SC_DialGroove = 1;
  static const SC_DialHandle = 2;
  static const SC_DialTickmarks = 4;
  static const SC_GroupBoxCheckBox = 1;
  static const SC_GroupBoxLabel = 2;
  static const SC_GroupBoxContents = 4;
  static const SC_GroupBoxFrame = 8;
  static const SC_MdiMinButton = 1;
  static const SC_MdiNormalButton = 2;
  static const SC_MdiCloseButton = 4;
  static const SC_CustomBase = 4026531840;
  static const SC_All = 4294967295;
}

class QStyle_PixelMetric {
  static const PM_ButtonMargin = 0;
  static const PM_ButtonDefaultIndicator = 1;
  static const PM_MenuButtonIndicator = 2;
  static const PM_ButtonShiftHorizontal = 3;
  static const PM_ButtonShiftVertical = 4;
  static const PM_DefaultFrameWidth = 5;
  static const PM_SpinBoxFrameWidth = 6;
  static const PM_ComboBoxFrameWidth = 7;
  static const PM_MaximumDragDistance = 8;
  static const PM_ScrollBarExtent = 9;
  static const PM_ScrollBarSliderMin = 10;
  static const PM_SliderThickness = 11;
  static const PM_SliderControlThickness = 12;
  static const PM_SliderLength = 13;
  static const PM_SliderTickmarkOffset = 14;
  static const PM_SliderSpaceAvailable = 15;
  static const PM_DockWidgetSeparatorExtent = 16;
  static const PM_DockWidgetHandleExtent = 17;
  static const PM_DockWidgetFrameWidth = 18;
  static const PM_TabBarTabOverlap = 19;
  static const PM_TabBarTabHSpace = 20;
  static const PM_TabBarTabVSpace = 21;
  static const PM_TabBarBaseHeight = 22;
  static const PM_TabBarBaseOverlap = 23;
  static const PM_ProgressBarChunkWidth = 24;
  static const PM_SplitterWidth = 25;
  static const PM_TitleBarHeight = 26;
  static const PM_MenuScrollerHeight = 27;
  static const PM_MenuHMargin = 28;
  static const PM_MenuVMargin = 29;
  static const PM_MenuPanelWidth = 30;
  static const PM_MenuTearoffHeight = 31;
  static const PM_MenuDesktopFrameWidth = 32;
  static const PM_MenuBarPanelWidth = 33;
  static const PM_MenuBarItemSpacing = 34;
  static const PM_MenuBarVMargin = 35;
  static const PM_MenuBarHMargin = 36;
  static const PM_IndicatorWidth = 37;
  static const PM_IndicatorHeight = 38;
  static const PM_ExclusiveIndicatorWidth = 39;
  static const PM_ExclusiveIndicatorHeight = 40;
  static const PM_DialogButtonsSeparator = 41;
  static const PM_DialogButtonsButtonWidth = 42;
  static const PM_DialogButtonsButtonHeight = 43;
  static const PM_MdiSubWindowFrameWidth = 44;
  static const PM_MdiSubWindowMinimizedWidth = 45;
  static const PM_HeaderMargin = 46;
  static const PM_HeaderMarkSize = 47;
  static const PM_HeaderGripMargin = 48;
  static const PM_TabBarTabShiftHorizontal = 49;
  static const PM_TabBarTabShiftVertical = 50;
  static const PM_TabBarScrollButtonWidth = 51;
  static const PM_ToolBarFrameWidth = 52;
  static const PM_ToolBarHandleExtent = 53;
  static const PM_ToolBarItemSpacing = 54;
  static const PM_ToolBarItemMargin = 55;
  static const PM_ToolBarSeparatorExtent = 56;
  static const PM_ToolBarExtensionExtent = 57;
  static const PM_SpinBoxSliderHeight = 58;
  static const PM_ToolBarIconSize = 59;
  static const PM_ListViewIconSize = 60;
  static const PM_IconViewIconSize = 61;
  static const PM_SmallIconSize = 62;
  static const PM_LargeIconSize = 63;
  static const PM_FocusFrameVMargin = 64;
  static const PM_FocusFrameHMargin = 65;
  static const PM_ToolTipLabelFrameWidth = 66;
  static const PM_CheckBoxLabelSpacing = 67;
  static const PM_TabBarIconSize = 68;
  static const PM_SizeGripSize = 69;
  static const PM_DockWidgetTitleMargin = 70;
  static const PM_MessageBoxIconSize = 71;
  static const PM_ButtonIconSize = 72;
  static const PM_DockWidgetTitleBarButtonMargin = 73;
  static const PM_RadioButtonLabelSpacing = 74;
  static const PM_LayoutLeftMargin = 75;
  static const PM_LayoutTopMargin = 76;
  static const PM_LayoutRightMargin = 77;
  static const PM_LayoutBottomMargin = 78;
  static const PM_LayoutHorizontalSpacing = 79;
  static const PM_LayoutVerticalSpacing = 80;
  static const PM_TabBar_ScrollButtonOverlap = 81;
  static const PM_TextCursorWidth = 82;
  static const PM_TabCloseIndicatorWidth = 83;
  static const PM_TabCloseIndicatorHeight = 84;
  static const PM_ScrollView_ScrollBarSpacing = 85;
  static const PM_ScrollView_ScrollBarOverlap = 86;
  static const PM_SubMenuOverlap = 87;
  static const PM_TreeViewIndentation = 88;
  static const PM_HeaderDefaultSectionSizeHorizontal = 89;
  static const PM_HeaderDefaultSectionSizeVertical = 90;
  static const PM_TitleBarButtonIconSize = 91;
  static const PM_TitleBarButtonSize = 92;
  static const PM_LineEditIconSize = 93;
  static const PM_LineEditIconMargin = 94;
  static const PM_CustomBase = 4026531840;
}

class QStyle_ContentsType {
  static const CT_PushButton = 0;
  static const CT_CheckBox = 1;
  static const CT_RadioButton = 2;
  static const CT_ToolButton = 3;
  static const CT_ComboBox = 4;
  static const CT_Splitter = 5;
  static const CT_ProgressBar = 6;
  static const CT_MenuItem = 7;
  static const CT_MenuBarItem = 8;
  static const CT_MenuBar = 9;
  static const CT_Menu = 10;
  static const CT_TabBarTab = 11;
  static const CT_Slider = 12;
  static const CT_ScrollBar = 13;
  static const CT_LineEdit = 14;
  static const CT_SpinBox = 15;
  static const CT_SizeGrip = 16;
  static const CT_TabWidget = 17;
  static const CT_DialogButtons = 18;
  static const CT_HeaderSection = 19;
  static const CT_GroupBox = 20;
  static const CT_MdiControls = 21;
  static const CT_ItemViewItem = 22;
  static const CT_CustomBase = 4026531840;
}

class QStyle_RequestSoftwareInputPanel {
  static const RSIP_OnMouseClickAndAlreadyFocused = 0;
  static const RSIP_OnMouseClick = 1;
}

class QStyle_StyleHint {
  static const SH_EtchDisabledText = 0;
  static const SH_DitherDisabledText = 1;
  static const SH_ScrollBar_MiddleClickAbsolutePosition = 2;
  static const SH_ScrollBar_ScrollWhenPointerLeavesControl = 3;
  static const SH_TabBar_SelectMouseType = 4;
  static const SH_TabBar_Alignment = 5;
  static const SH_Header_ArrowAlignment = 6;
  static const SH_Slider_SnapToValue = 7;
  static const SH_Slider_SloppyKeyEvents = 8;
  static const SH_ProgressDialog_CenterCancelButton = 9;
  static const SH_ProgressDialog_TextLabelAlignment = 10;
  static const SH_PrintDialog_RightAlignButtons = 11;
  static const SH_MainWindow_SpaceBelowMenuBar = 12;
  static const SH_FontDialog_SelectAssociatedText = 13;
  static const SH_Menu_AllowActiveAndDisabled = 14;
  static const SH_Menu_SpaceActivatesItem = 15;
  static const SH_Menu_SubMenuPopupDelay = 16;
  static const SH_ScrollView_FrameOnlyAroundContents = 17;
  static const SH_MenuBar_AltKeyNavigation = 18;
  static const SH_ComboBox_ListMouseTracking = 19;
  static const SH_Menu_MouseTracking = 20;
  static const SH_MenuBar_MouseTracking = 21;
  static const SH_ItemView_ChangeHighlightOnFocus = 22;
  static const SH_Widget_ShareActivation = 23;
  static const SH_Workspace_FillSpaceOnMaximize = 24;
  static const SH_ComboBox_Popup = 25;
  static const SH_TitleBar_NoBorder = 26;
  static const SH_Slider_StopMouseOverSlider = 27;
  static const SH_BlinkCursorWhenTextSelected = 28;
  static const SH_RichText_FullWidthSelection = 29;
  static const SH_Menu_Scrollable = 30;
  static const SH_GroupBox_TextLabelVerticalAlignment = 31;
  static const SH_GroupBox_TextLabelColor = 32;
  static const SH_Menu_SloppySubMenus = 33;
  static const SH_Table_GridLineColor = 34;
  static const SH_LineEdit_PasswordCharacter = 35;
  static const SH_DialogButtons_DefaultButton = 36;
  static const SH_ToolBox_SelectedPageTitleBold = 37;
  static const SH_TabBar_PreferNoArrows = 38;
  static const SH_ScrollBar_LeftClickAbsolutePosition = 39;
  static const SH_ListViewExpand_SelectMouseType = 40;
  static const SH_UnderlineShortcut = 41;
  static const SH_SpinBox_AnimateButton = 42;
  static const SH_SpinBox_KeyPressAutoRepeatRate = 43;
  static const SH_SpinBox_ClickAutoRepeatRate = 44;
  static const SH_Menu_FillScreenWithScroll = 45;
  static const SH_ToolTipLabel_Opacity = 46;
  static const SH_DrawMenuBarSeparator = 47;
  static const SH_TitleBar_ModifyNotification = 48;
  static const SH_Button_FocusPolicy = 49;
  static const SH_MessageBox_UseBorderForButtonSpacing = 50;
  static const SH_TitleBar_AutoRaise = 51;
  static const SH_ToolButton_PopupDelay = 52;
  static const SH_FocusFrame_Mask = 53;
  static const SH_RubberBand_Mask = 54;
  static const SH_WindowFrame_Mask = 55;
  static const SH_SpinControls_DisableOnBounds = 56;
  static const SH_Dial_BackgroundRole = 57;
  static const SH_ComboBox_LayoutDirection = 58;
  static const SH_ItemView_EllipsisLocation = 59;
  static const SH_ItemView_ShowDecorationSelected = 60;
  static const SH_ItemView_ActivateItemOnSingleClick = 61;
  static const SH_ScrollBar_ContextMenu = 62;
  static const SH_ScrollBar_RollBetweenButtons = 63;
  static const SH_Slider_AbsoluteSetButtons = 64;
  static const SH_Slider_PageSetButtons = 65;
  static const SH_Menu_KeyboardSearch = 66;
  static const SH_TabBar_ElideMode = 67;
  static const SH_DialogButtonLayout = 68;
  static const SH_ComboBox_PopupFrameStyle = 69;
  static const SH_MessageBox_TextInteractionFlags = 70;
  static const SH_DialogButtonBox_ButtonsHaveIcons = 71;
  static const SH_MessageBox_CenterButtons = 72;
  static const SH_Menu_SelectionWrap = 73;
  static const SH_ItemView_MovementWithoutUpdatingSelection = 74;
  static const SH_ToolTip_Mask = 75;
  static const SH_FocusFrame_AboveWidget = 76;
  static const SH_TextControl_FocusIndicatorTextCharFormat = 77;
  static const SH_WizardStyle = 78;
  static const SH_ItemView_ArrowKeysNavigateIntoChildren = 79;
  static const SH_Menu_Mask = 80;
  static const SH_Menu_FlashTriggeredItem = 81;
  static const SH_Menu_FadeOutOnHide = 82;
  static const SH_SpinBox_ClickAutoRepeatThreshold = 83;
  static const SH_ItemView_PaintAlternatingRowColorsForEmptyArea = 84;
  static const SH_FormLayoutWrapPolicy = 85;
  static const SH_TabWidget_DefaultTabPosition = 86;
  static const SH_ToolBar_Movable = 87;
  static const SH_FormLayoutFieldGrowthPolicy = 88;
  static const SH_FormLayoutFormAlignment = 89;
  static const SH_FormLayoutLabelAlignment = 90;
  static const SH_ItemView_DrawDelegateFrame = 91;
  static const SH_TabBar_CloseButtonPosition = 92;
  static const SH_DockWidget_ButtonsHaveFrame = 93;
  static const SH_ToolButtonStyle = 94;
  static const SH_RequestSoftwareInputPanel = 95;
  static const SH_ScrollBar_Transient = 96;
  static const SH_Menu_SupportsSections = 97;
  static const SH_ToolTip_WakeUpDelay = 98;
  static const SH_ToolTip_FallAsleepDelay = 99;
  static const SH_Widget_Animate = 100;
  static const SH_Splitter_OpaqueResize = 101;
  static const SH_ComboBox_UseNativePopup = 102;
  static const SH_LineEdit_PasswordMaskDelay = 103;
  static const SH_TabBar_ChangeCurrentDelay = 104;
  static const SH_Menu_SubMenuUniDirection = 105;
  static const SH_Menu_SubMenuUniDirectionFailCount = 106;
  static const SH_Menu_SubMenuSloppySelectOtherActions = 107;
  static const SH_Menu_SubMenuSloppyCloseTimeout = 108;
  static const SH_Menu_SubMenuResetWhenReenteringParent = 109;
  static const SH_Menu_SubMenuDontStartSloppyOnLeave = 110;
  static const SH_ItemView_ScrollMode = 111;
  static const SH_TitleBar_ShowToolTipsOnButtons = 112;
  static const SH_Widget_Animation_Duration = 113;
  static const SH_ComboBox_AllowWheelScrolling = 114;
  static const SH_SpinBox_ButtonsInsideFrame = 115;
  static const SH_SpinBox_StepModifier = 116;
  static const SH_TabBar_AllowWheelScrolling = 117;
  static const SH_Table_AlwaysDrawLeftTopGridLines = 118;
  static const SH_SpinBox_SelectOnStep = 119;
  static const SH_CustomBase = 4026531840;
}

class QStyle_StandardPixmap {
  static const SP_TitleBarMenuButton = 0;
  static const SP_TitleBarMinButton = 1;
  static const SP_TitleBarMaxButton = 2;
  static const SP_TitleBarCloseButton = 3;
  static const SP_TitleBarNormalButton = 4;
  static const SP_TitleBarShadeButton = 5;
  static const SP_TitleBarUnshadeButton = 6;
  static const SP_TitleBarContextHelpButton = 7;
  static const SP_DockWidgetCloseButton = 8;
  static const SP_MessageBoxInformation = 9;
  static const SP_MessageBoxWarning = 10;
  static const SP_MessageBoxCritical = 11;
  static const SP_MessageBoxQuestion = 12;
  static const SP_DesktopIcon = 13;
  static const SP_TrashIcon = 14;
  static const SP_ComputerIcon = 15;
  static const SP_DriveFDIcon = 16;
  static const SP_DriveHDIcon = 17;
  static const SP_DriveCDIcon = 18;
  static const SP_DriveDVDIcon = 19;
  static const SP_DriveNetIcon = 20;
  static const SP_DirOpenIcon = 21;
  static const SP_DirClosedIcon = 22;
  static const SP_DirLinkIcon = 23;
  static const SP_DirLinkOpenIcon = 24;
  static const SP_FileIcon = 25;
  static const SP_FileLinkIcon = 26;
  static const SP_ToolBarHorizontalExtensionButton = 27;
  static const SP_ToolBarVerticalExtensionButton = 28;
  static const SP_FileDialogStart = 29;
  static const SP_FileDialogEnd = 30;
  static const SP_FileDialogToParent = 31;
  static const SP_FileDialogNewFolder = 32;
  static const SP_FileDialogDetailedView = 33;
  static const SP_FileDialogInfoView = 34;
  static const SP_FileDialogContentsView = 35;
  static const SP_FileDialogListView = 36;
  static const SP_FileDialogBack = 37;
  static const SP_DirIcon = 38;
  static const SP_DialogOkButton = 39;
  static const SP_DialogCancelButton = 40;
  static const SP_DialogHelpButton = 41;
  static const SP_DialogOpenButton = 42;
  static const SP_DialogSaveButton = 43;
  static const SP_DialogCloseButton = 44;
  static const SP_DialogApplyButton = 45;
  static const SP_DialogResetButton = 46;
  static const SP_DialogDiscardButton = 47;
  static const SP_DialogYesButton = 48;
  static const SP_DialogNoButton = 49;
  static const SP_ArrowUp = 50;
  static const SP_ArrowDown = 51;
  static const SP_ArrowLeft = 52;
  static const SP_ArrowRight = 53;
  static const SP_ArrowBack = 54;
  static const SP_ArrowForward = 55;
  static const SP_DirHomeIcon = 56;
  static const SP_CommandLink = 57;
  static const SP_VistaShield = 58;
  static const SP_BrowserReload = 59;
  static const SP_BrowserStop = 60;
  static const SP_MediaPlay = 61;
  static const SP_MediaStop = 62;
  static const SP_MediaPause = 63;
  static const SP_MediaSkipForward = 64;
  static const SP_MediaSkipBackward = 65;
  static const SP_MediaSeekForward = 66;
  static const SP_MediaSeekBackward = 67;
  static const SP_MediaVolume = 68;
  static const SP_MediaVolumeMuted = 69;
  static const SP_LineEditClearButton = 70;
  static const SP_DialogYesToAllButton = 71;
  static const SP_DialogNoToAllButton = 72;
  static const SP_DialogSaveAllButton = 73;
  static const SP_DialogAbortButton = 74;
  static const SP_DialogRetryButton = 75;
  static const SP_DialogIgnoreButton = 76;
  static const SP_RestoreDefaultsButton = 77;
  static const SP_TabCloseButton = 78;
  static const NStandardPixmap = 79;
  static const SP_CustomBase = 4026531840;
}

class QStyle extends QObject {
  QStyle.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QStyle.init() : super.init() {}
  factory QStyle.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QStyle;
    }
    return QStyle.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QStyle_Finalizer";
  } //QStyle()

  QStyle() : super.init() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QStyle__constructor')
        .asFunction();
    thisCpp = func();
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  } // drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const

  drawComplexControl(int cc, QStyleOptionComplex? opt, QPainter? p,
      {required QWidget? widget}) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1906))
        .asFunction();
    func(
        thisCpp,
        cc,
        opt == null ? ffi.nullptr : opt.thisCpp,
        p == null ? ffi.nullptr : p.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static void drawComplexControl_calledFromC(ffi.Pointer<void> thisCpp, int cc,
      ffi.Pointer<void>? opt, ffi.Pointer<void>? p, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.drawComplexControl(
        cc,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOptionComplex.fromCppPointer(opt),
        (p == null || p.address == 0) ? null : QPainter.fromCppPointer(p),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
  } // drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) const

  drawControl(int element, QStyleOption? opt, QPainter? p,
      {required QWidget? w}) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1907))
        .asFunction();
    func(
        thisCpp,
        element,
        opt == null ? ffi.nullptr : opt.thisCpp,
        p == null ? ffi.nullptr : p.thisCpp,
        w == null ? ffi.nullptr : w.thisCpp);
  }

  static void drawControl_calledFromC(ffi.Pointer<void> thisCpp, int element,
      ffi.Pointer<void>? opt, ffi.Pointer<void>? p, ffi.Pointer<void>? w) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.drawControl(
        element,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt),
        (p == null || p.address == 0) ? null : QPainter.fromCppPointer(p),
        w: (w == null || w.address == 0) ? null : QWidget.fromCppPointer(w));
  } // drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const

  drawItemPixmap(
      QPainter? painter, QRect? rect, int alignment, QPixmap pixmap) {
    final void_Func_voidstar_voidstar_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(1908))
        .asFunction();
    func(
        thisCpp,
        painter == null ? ffi.nullptr : painter.thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        alignment,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp);
  }

  static void drawItemPixmap_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? painter,
      ffi.Pointer<void>? rect,
      int alignment,
      ffi.Pointer<void> pixmap) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.drawItemPixmap(
        (painter == null || painter.address == 0)
            ? null
            : QPainter.fromCppPointer(painter),
        (rect == null || rect.address == 0) ? null : QRect.fromCppPointer(rect),
        alignment,
        QPixmap.fromCppPointer(pixmap));
  } // drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) const

  drawItemText(QPainter? painter, QRect? rect, int flags, QPalette pal,
      bool enabled, String? text,
      {int textRole = QPalette_ColorRole.NoRole}) {
    final void_Func_voidstar_voidstar_voidstar_int_voidstar_bool_voidstar_int
        func = _dylib
            .lookup<
                    ffi.NativeFunction<
                        void_Func_voidstar_voidstar_voidstar_ffi_Int32_voidstar_ffi_Int8_voidstar_ffi_Int32_FFI>>(
                cFunctionSymbolName(1909))
            .asFunction();
    func(
        thisCpp,
        painter == null ? ffi.nullptr : painter.thisCpp,
        rect == null ? ffi.nullptr : rect.thisCpp,
        flags,
        pal == null ? ffi.nullptr : pal.thisCpp,
        enabled ? 1 : 0,
        text?.toNativeUtf8() ?? ffi.nullptr,
        textRole);
  }

  static void drawItemText_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? painter,
      ffi.Pointer<void>? rect,
      int flags,
      ffi.Pointer<void> pal,
      int enabled,
      ffi.Pointer<void>? text,
      int textRole) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.drawItemText(
        (painter == null || painter.address == 0)
            ? null
            : QPainter.fromCppPointer(painter),
        (rect == null || rect.address == 0) ? null : QRect.fromCppPointer(rect),
        flags,
        QPalette.fromCppPointer(pal),
        enabled != 0,
        QString.fromCppPointer(text).toDartString(),
        textRole: textRole);
  } // drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) const

  drawPrimitive(int pe, QStyleOption? opt, QPainter? p, {required QWidget? w}) {
    final void_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1910))
        .asFunction();
    func(
        thisCpp,
        pe,
        opt == null ? ffi.nullptr : opt.thisCpp,
        p == null ? ffi.nullptr : p.thisCpp,
        w == null ? ffi.nullptr : w.thisCpp);
  }

  static void drawPrimitive_calledFromC(ffi.Pointer<void> thisCpp, int pe,
      ffi.Pointer<void>? opt, ffi.Pointer<void>? p, ffi.Pointer<void>? w) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.drawPrimitive(
        pe,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt),
        (p == null || p.address == 0) ? null : QPainter.fromCppPointer(p),
        w: (w == null || w.address == 0) ? null : QWidget.fromCppPointer(w));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? watched, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::eventFilter(QObject * watched, QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.eventFilter(
        (watched == null || watched.address == 0)
            ? null
            : QObject.fromCppPointer(watched),
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  } // generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const

  QPixmap generatedIconPixmap(int iconMode, QPixmap pixmap, QStyleOption? opt) {
    final voidstar_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1914))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        iconMode,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp,
        opt == null ? ffi.nullptr : opt.thisCpp);
    return QPixmap.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> generatedIconPixmap_calledFromC(
      ffi.Pointer<void> thisCpp,
      int iconMode,
      ffi.Pointer<void> pixmap,
      ffi.Pointer<void>? opt) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.generatedIconPixmap(
        iconMode,
        QPixmap.fromCppPointer(pixmap),
        (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt));
    return result.thisCpp;
  } // hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const

  int hitTestComplexControl(int cc, QStyleOptionComplex? opt, QPoint? pt,
      {required QWidget? widget}) {
    final int_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1915))
        .asFunction();
    return func(
        thisCpp,
        cc,
        opt == null ? ffi.nullptr : opt.thisCpp,
        pt == null ? ffi.nullptr : pt.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static int hitTestComplexControl_calledFromC(
      ffi.Pointer<void> thisCpp,
      int cc,
      ffi.Pointer<void>? opt,
      ffi.Pointer<void>? pt,
      ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hitTestComplexControl(
        cc,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOptionComplex.fromCppPointer(opt),
        (pt == null || pt.address == 0) ? null : QPoint.fromCppPointer(pt),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result;
  } // itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const

  QRect itemPixmapRect(QRect? r, int flags, QPixmap pixmap) {
    final voidstar_Func_voidstar_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(1921))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        r == null ? ffi.nullptr : r.thisCpp,
        flags,
        pixmap == null ? ffi.nullptr : pixmap.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> itemPixmapRect_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? r, int flags, ffi.Pointer<void> pixmap) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.itemPixmapRect(
        (r == null || r.address == 0) ? null : QRect.fromCppPointer(r),
        flags,
        QPixmap.fromCppPointer(pixmap));
    return result.thisCpp;
  } // layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const

  int layoutSpacing(int control1, int control2, int orientation,
      {required QStyleOption? option, required QWidget? widget}) {
    final int_Func_voidstar_int_int_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1923))
        .asFunction();
    return func(
        thisCpp,
        control1,
        control2,
        orientation,
        option == null ? ffi.nullptr : option.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static int layoutSpacing_calledFromC(
      ffi.Pointer<void> thisCpp,
      int control1,
      int control2,
      int orientation,
      ffi.Pointer<void>? option,
      ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.layoutSpacing(control1, control2, orientation,
        option: (option == null || option.address == 0)
            ? null
            : QStyleOption.fromCppPointer(option),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result;
  } // name() const

  QString name() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStyle__name')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const

  int pixelMetric(int metric,
      {required QStyleOption? option, required QWidget? widget}) {
    final int_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1927))
        .asFunction();
    return func(thisCpp, metric, option == null ? ffi.nullptr : option.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static int pixelMetric_calledFromC(ffi.Pointer<void> thisCpp, int metric,
      ffi.Pointer<void>? option, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.pixelMetric(metric,
        option: (option == null || option.address == 0)
            ? null
            : QStyleOption.fromCppPointer(option),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result;
  } // polish(QApplication * application)

  polishApplication(QApplication? application) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1928))
        .asFunction();
    func(thisCpp, application == null ? ffi.nullptr : application.thisCpp);
  }

  static void polishApplication_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? application) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::polish(QApplication * application)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.polishApplication(
        (application == null || application.address == 0)
            ? null
            : QApplication.fromCppPointer(application));
  } // polish(QPalette & palette)

  polish(QPalette palette) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1929))
        .asFunction();
    func(thisCpp, palette == null ? ffi.nullptr : palette.thisCpp);
  }

  static void polish_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> palette) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::polish(QPalette & palette)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.polish(QPalette.fromCppPointer(palette));
  } // polish(QWidget * widget)

  polishWidget(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1930))
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static void polishWidget_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::polish(QWidget * widget)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.polishWidget((widget == null || widget.address == 0)
        ? null
        : QWidget.fromCppPointer(widget));
  } // proxy() const

  QStyle proxy() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStyle__proxy')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStyle.fromCppPointer(result, false);
  } // setName(const QString & name)

  setName(String? name) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStyle__setName_QString')
        .asFunction();
    func(thisCpp, name?.toNativeUtf8() ?? ffi.nullptr);
  } // setProxy(QStyle * style)

  setProxy(QStyle? style) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStyle__setProxy_QStyle')
        .asFunction();
    func(thisCpp, style == null ? ffi.nullptr : style.thisCpp);
  } // sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w) const

  QSize sizeFromContents(int ct, QStyleOption? opt, QSize? contentsSize,
      {required QWidget? w}) {
    final voidstar_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1942))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        ct,
        opt == null ? ffi.nullptr : opt.thisCpp,
        contentsSize == null ? ffi.nullptr : contentsSize.thisCpp,
        w == null ? ffi.nullptr : w.thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> sizeFromContents_calledFromC(
      ffi.Pointer<void> thisCpp,
      int ct,
      ffi.Pointer<void>? opt,
      ffi.Pointer<void>? contentsSize,
      ffi.Pointer<void>? w) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeFromContents(
        ct,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt),
        (contentsSize == null || contentsSize.address == 0)
            ? null
            : QSize.fromCppPointer(contentsSize),
        w: (w == null || w.address == 0) ? null : QWidget.fromCppPointer(w));
    return result.thisCpp;
  }

  static // sliderPositionFromValue(int min, int max, int val, int space, bool upsideDown)
      int sliderPositionFromValue(int min, int max, int val, int space,
          {bool upsideDown = false}) {
    final int_Func_int_int_int_int_bool func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int8_FFI>>(
            'c_static_QStyle__sliderPositionFromValue_int_int_int_int_bool')
        .asFunction();
    return func(min, max, val, space, upsideDown ? 1 : 0);
  }

  static // sliderValueFromPosition(int min, int max, int pos, int space, bool upsideDown)
      int sliderValueFromPosition(int min, int max, int pos, int space,
          {bool upsideDown = false}) {
    final int_Func_int_int_int_int_bool func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int8_FFI>>(
            'c_static_QStyle__sliderValueFromPosition_int_int_int_int_bool')
        .asFunction();
    return func(min, max, pos, space, upsideDown ? 1 : 0);
  } // standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) const

  QIcon standardIcon(int standardIcon,
      {required QStyleOption? option, required QWidget? widget}) {
    final voidstar_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1945))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        standardIcon,
        option == null ? ffi.nullptr : option.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
    return QIcon.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> standardIcon_calledFromC(ffi.Pointer<void> thisCpp,
      int standardIcon, ffi.Pointer<void>? option, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.standardIcon(standardIcon,
        option: (option == null || option.address == 0)
            ? null
            : QStyleOption.fromCppPointer(option),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result.thisCpp;
  } // standardPalette() const

  QPalette standardPalette() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(1946))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QPalette.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> standardPalette_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::standardPalette() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.standardPalette();
    return result.thisCpp;
  } // standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) const

  QPixmap standardPixmap(int standardPixmap,
      {required QStyleOption? opt, required QWidget? widget}) {
    final voidstar_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1947))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        standardPixmap,
        opt == null ? ffi.nullptr : opt.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
    return QPixmap.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> standardPixmap_calledFromC(ffi.Pointer<void> thisCpp,
      int standardPixmap, ffi.Pointer<void>? opt, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.standardPixmap(standardPixmap,
        opt: (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result.thisCpp;
  } // styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) const

  int styleHint(int stylehint,
      {required QStyleOption? opt,
      required QWidget? widget,
      required QStyleHintReturn? returnData}) {
    final int_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    int_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1949))
        .asFunction();
    return func(
        thisCpp,
        stylehint,
        opt == null ? ffi.nullptr : opt.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp,
        returnData == null ? ffi.nullptr : returnData.thisCpp);
  }

  static int styleHint_calledFromC(
      ffi.Pointer<void> thisCpp,
      int stylehint,
      ffi.Pointer<void>? opt,
      ffi.Pointer<void>? widget,
      ffi.Pointer<void>? returnData) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt, const QWidget * widget, QStyleHintReturn * returnData) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.styleHint(stylehint,
        opt: (opt == null || opt.address == 0)
            ? null
            : QStyleOption.fromCppPointer(opt),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget),
        returnData: (returnData == null || returnData.address == 0)
            ? null
            : QStyleHintReturn.fromCppPointer(returnData));
    return result;
  } // subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const

  QRect subControlRect(int cc, QStyleOptionComplex? opt, int sc,
      {required QWidget? widget}) {
    final voidstar_Func_voidstar_int_voidstar_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_ffi_Int32_voidstar_FFI>>(
            cFunctionSymbolName(1950))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        cc,
        opt == null ? ffi.nullptr : opt.thisCpp,
        sc,
        widget == null ? ffi.nullptr : widget.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> subControlRect_calledFromC(ffi.Pointer<void> thisCpp,
      int cc, ffi.Pointer<void>? opt, int sc, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.subControlRect(
        cc,
        (opt == null || opt.address == 0)
            ? null
            : QStyleOptionComplex.fromCppPointer(opt),
        sc,
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result.thisCpp;
  } // subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget) const

  QRect subElementRect(int subElement, QStyleOption? option,
      {required QWidget? widget}) {
    final voidstar_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1951))
        .asFunction();
    ffi.Pointer<void> result = func(
        thisCpp,
        subElement,
        option == null ? ffi.nullptr : option.thisCpp,
        widget == null ? ffi.nullptr : widget.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> subElementRect_calledFromC(ffi.Pointer<void> thisCpp,
      int subElement, ffi.Pointer<void>? option, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.subElementRect(
        subElement,
        (option == null || option.address == 0)
            ? null
            : QStyleOption.fromCppPointer(option),
        widget: (widget == null || widget.address == 0)
            ? null
            : QWidget.fromCppPointer(widget));
    return result.thisCpp;
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QStyle__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // unpolish(QApplication * application)

  unpolishApplication(QApplication? application) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1953))
        .asFunction();
    func(thisCpp, application == null ? ffi.nullptr : application.thisCpp);
  }

  static void unpolishApplication_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? application) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::unpolish(QApplication * application)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.unpolishApplication(
        (application == null || application.address == 0)
            ? null
            : QApplication.fromCppPointer(application));
  } // unpolish(QWidget * widget)

  unpolish(QWidget? widget) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            cFunctionSymbolName(1954))
        .asFunction();
    func(thisCpp, widget == null ? ffi.nullptr : widget.thisCpp);
  }

  static void unpolish_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? widget) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QStyle;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStyle::unpolish(QWidget * widget)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.unpolish((widget == null || widget.address == 0)
        ? null
        : QWidget.fromCppPointer(widget));
  }

  static // visualPos(Qt::LayoutDirection direction, const QRect & boundingRect, const QPoint & logicalPos)
      QPoint visualPos(int direction, QRect? boundingRect, QPoint? logicalPos) {
    final voidstar_Func_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_static_QStyle__visualPos_LayoutDirection_QRect_QPoint')
        .asFunction();
    ffi.Pointer<void> result = func(
        direction,
        boundingRect == null ? ffi.nullptr : boundingRect.thisCpp,
        logicalPos == null ? ffi.nullptr : logicalPos.thisCpp);
    return QPoint.fromCppPointer(result, true);
  }

  static // visualRect(Qt::LayoutDirection direction, const QRect & boundingRect, const QRect & logicalRect)
      QRect visualRect(int direction, QRect? boundingRect, QRect? logicalRect) {
    final voidstar_Func_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi
                .NativeFunction<voidstar_Func_ffi_Int32_voidstar_voidstar_FFI>>(
            'c_static_QStyle__visualRect_LayoutDirection_QRect_QRect')
        .asFunction();
    ffi.Pointer<void> result = func(
        direction,
        boundingRect == null ? ffi.nullptr : boundingRect.thisCpp,
        logicalRect == null ? ffi.nullptr : logicalRect.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStyle__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 946:
        return "c_QStyle__customEvent_QEvent";
      case 1906:
        return "c_QStyle__drawComplexControl_ComplexControl_QStyleOptionComplex_QPainter_QWidget";
      case 1907:
        return "c_QStyle__drawControl_ControlElement_QStyleOption_QPainter_QWidget";
      case 1908:
        return "c_QStyle__drawItemPixmap_QPainter_QRect_int_QPixmap";
      case 1909:
        return "c_QStyle__drawItemText_QPainter_QRect_int_QPalette_bool_QString_ColorRole";
      case 1910:
        return "c_QStyle__drawPrimitive_PrimitiveElement_QStyleOption_QPainter_QWidget";
      case 956:
        return "c_QStyle__event_QEvent";
      case 957:
        return "c_QStyle__eventFilter_QObject_QEvent";
      case 1914:
        return "c_QStyle__generatedIconPixmap_Mode_QPixmap_QStyleOption";
      case 1915:
        return "c_QStyle__hitTestComplexControl_ComplexControl_QStyleOptionComplex_QPoint_QWidget";
      case 1921:
        return "c_QStyle__itemPixmapRect_QRect_int_QPixmap";
      case 1923:
        return "c_QStyle__layoutSpacing_ControlType_ControlType_Orientation_QStyleOption_QWidget";
      case 1927:
        return "c_QStyle__pixelMetric_PixelMetric_QStyleOption_QWidget";
      case 1928:
        return "c_QStyle__polishApplication_QApplication";
      case 1929:
        return "c_QStyle__polish_QPalette";
      case 1930:
        return "c_QStyle__polishWidget_QWidget";
      case 1942:
        return "c_QStyle__sizeFromContents_ContentsType_QStyleOption_QSize_QWidget";
      case 1945:
        return "c_QStyle__standardIcon_StandardPixmap_QStyleOption_QWidget";
      case 1946:
        return "c_QStyle__standardPalette";
      case 1947:
        return "c_QStyle__standardPixmap_StandardPixmap_QStyleOption_QWidget";
      case 1949:
        return "c_QStyle__styleHint_StyleHint_QStyleOption_QWidget_QStyleHintReturn";
      case 1950:
        return "c_QStyle__subControlRect_ComplexControl_QStyleOptionComplex_SubControl_QWidget";
      case 1951:
        return "c_QStyle__subElementRect_SubElement_QStyleOption_QWidget";
      case 1953:
        return "c_QStyle__unpolishApplication_QApplication";
      case 1954:
        return "c_QStyle__unpolish_QWidget";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 946:
        return "customEvent";
      case 1906:
        return "drawComplexControl";
      case 1907:
        return "drawControl";
      case 1908:
        return "drawItemPixmap";
      case 1909:
        return "drawItemText";
      case 1910:
        return "drawPrimitive";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 1914:
        return "generatedIconPixmap";
      case 1915:
        return "hitTestComplexControl";
      case 1921:
        return "itemPixmapRect";
      case 1923:
        return "layoutSpacing";
      case 1927:
        return "pixelMetric";
      case 1928:
        return "polishApplication";
      case 1929:
        return "polish";
      case 1930:
        return "polishWidget";
      case 1942:
        return "sizeFromContents";
      case 1945:
        return "standardIcon";
      case 1946:
        return "standardPalette";
      case 1947:
        return "standardPixmap";
      case 1949:
        return "styleHint";
      case 1950:
        return "subControlRect";
      case 1951:
        return "subElementRect";
      case 1953:
        return "unpolishApplication";
      case 1954:
        return "unpolish";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QStyle__registerVirtualMethodCallback')
        .asFunction();
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback1906 = ffi.Pointer.fromFunction<
            void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.drawComplexControl_calledFromC);
    registerCallback(thisCpp, callback1906, 1906);
    final callback1907 = ffi.Pointer.fromFunction<
            void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.drawControl_calledFromC);
    registerCallback(thisCpp, callback1907, 1907);
    final callback1908 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_voidstar_ffi_Int32_voidstar_FFI>(
        QStyle.drawItemPixmap_calledFromC);
    registerCallback(thisCpp, callback1908, 1908);
    final callback1909 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_voidstar_ffi_Int32_voidstar_ffi_Int8_voidstar_ffi_Int32_FFI>(
        QStyle.drawItemText_calledFromC);
    registerCallback(thisCpp, callback1909, 1909);
    final callback1910 = ffi.Pointer.fromFunction<
            void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.drawPrimitive_calledFromC);
    registerCallback(thisCpp, callback1910, 1910);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QObject.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QObject.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    final callback1914 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.generatedIconPixmap_calledFromC);
    registerCallback(thisCpp, callback1914, 1914);
    const callbackExcept1915 = 0;
    final callback1915 = ffi.Pointer.fromFunction<
            int_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.hitTestComplexControl_calledFromC, callbackExcept1915);
    registerCallback(thisCpp, callback1915, 1915);
    final callback1921 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_voidstar_ffi_Int32_voidstar_FFI>(
        QStyle.itemPixmapRect_calledFromC);
    registerCallback(thisCpp, callback1921, 1921);
    const callbackExcept1923 = 0;
    final callback1923 = ffi.Pointer.fromFunction<
            int_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.layoutSpacing_calledFromC, callbackExcept1923);
    registerCallback(thisCpp, callback1923, 1923);
    const callbackExcept1927 = 0;
    final callback1927 = ffi.Pointer.fromFunction<
            int_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.pixelMetric_calledFromC, callbackExcept1927);
    registerCallback(thisCpp, callback1927, 1927);
    final callback1928 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QStyle.polishApplication_calledFromC);
    registerCallback(thisCpp, callback1928, 1928);
    final callback1929 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QStyle.polish_calledFromC);
    registerCallback(thisCpp, callback1929, 1929);
    final callback1930 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QStyle.polishWidget_calledFromC);
    registerCallback(thisCpp, callback1930, 1930);
    final callback1942 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.sizeFromContents_calledFromC);
    registerCallback(thisCpp, callback1942, 1942);
    final callback1945 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.standardIcon_calledFromC);
    registerCallback(thisCpp, callback1945, 1945);
    final callback1946 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QStyle.standardPalette_calledFromC);
    registerCallback(thisCpp, callback1946, 1946);
    final callback1947 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.standardPixmap_calledFromC);
    registerCallback(thisCpp, callback1947, 1947);
    const callbackExcept1949 = 0;
    final callback1949 = ffi.Pointer.fromFunction<
            int_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>(
        QStyle.styleHint_calledFromC, callbackExcept1949);
    registerCallback(thisCpp, callback1949, 1949);
    final callback1950 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_ffi_Int32_voidstar_FFI>(
        QStyle.subControlRect_calledFromC);
    registerCallback(thisCpp, callback1950, 1950);
    final callback1951 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>(
        QStyle.subElementRect_calledFromC);
    registerCallback(thisCpp, callback1951, 1951);
    final callback1953 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QStyle.unpolishApplication_calledFromC);
    registerCallback(thisCpp, callback1953, 1953);
    final callback1954 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QStyle.unpolish_calledFromC);
    registerCallback(thisCpp, callback1954, 1954);
  }
}
