#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_INNO = {{
//++Autogenerated -- start of section automatically generated
"Code Components CustomMessages Dirs Files INI Icons InstallDelete LangOptions Languages Messages Registry Run Setup "
"Tasks Types UninstallDelete UninstallRun "

, // 1 parameters
"ASLRCompatible AdditionalIcons AddonHostProgramNotFound "
"AllowCancelDuringInstall AllowNetworkDrive AllowNoIcons AllowRootDirectory AllowUNCPath "
"AlwaysRestart AlwaysShowComponentsList AlwaysShowDirOnReadyPage AlwaysShowGroupOnReadyPage AlwaysUsePersonalGroup "
"AppComments AppContact AppCopyright AppId AppModifyPath AppMutex AppName AppPublisher AppPublisherURL AppReadmeFile "
"AppSupportPhone AppSupportURL AppUpdatesURL AppUserModelID AppUserModelToastActivatorCLSID AppVerName AppVersion "
"AppendDefaultDirName AppendDefaultGroupName ArchitecturesAllowed ArchitecturesInstallIn64BitMode "
"AssocFileExtension AssocingFileExtension Attribs AutoStartProgram AutoStartProgramGroupDescription "
"BackColor BackColor2 BackColorDirection BackSolid BeveledLabel "
"ChangesAssociations ChangesEnvironment Check CloseApplications CloseApplicationsFilter "
"Comment Components Compression CompressionThreads CopyMode CopyrightFontName CopyrightFontSize "
"CreateAppDir CreateDesktopIcon CreateQuickLaunchIcon CreateUninstallRegKey "
"DEPCompatible "
"DefaultDialogFontName DefaultDirName DefaultGroupName DefaultUserInfoName DefaultUserInfoOrg DefaultUserInfoSerial "
"Description DestDir DestName DialogFontName DialogFontSize DirExistsWarning DisableDirPage DisableFinishedPage "
"DisableProgramGroupPage DisableReadyMemo DisableReadyPage DisableStartupPrompt DisableWelcomePage "
"DiskClusterSize DiskSliceSize DiskSpanning "
"EnableDirDoesntExistWarning Encryption Excludes ExternalSize ExtraDiskSpaceRequired "
"Filename Flags FlatComponentsList FontInstall GroupDescription HelpTextNote HotKey "
"IconFilename IconIndex InfoAfterFile InfoBeforeFile InternalCompressLevel Key "
"LZMAAlgorithm LZMABlockSize LZMADictionarySize LZMAMatchFinder LZMANumBlockThreads LZMANumFastBytes "
"LZMAUseSeparateProcess LanguageCodePage LanguageDetectionMethod LanguageID LanguageName Languages LaunchProgram "
"LicenseFile "
"MergeDuplicateFiles MessagesFile MinVersion MissingMessagesWarning MissingRunOnceIdsWarning "
"Name NameAndVersion NotRecognizedMessagesWarning "
"OnlyBelowVersion Output OutputBaseFilename OutputDir OutputManifestFile "
"Parameters Password Permissions PrivilegesRequired PrivilegesRequiredOverridesAllowed ProgramOnTheWeb "
"ReserveBytes RestartApplications RestartIfNeededByRun RightToLeft Root RunOnceId "
"Section SetupIconFile SetupLogging SetupMutex ShowComponentSizes ShowLanguageDialog ShowTasksTreeLines "
"SignTool SignToolMinimumTimeBetween SignToolRetryCount SignToolRetryDelay SignToolRunMinimized "
"SignedUninstaller SignedUninstallerDir SlicesPerDisk SolidCompression Source SourceDir "
"StatusMsg String StrongAssemblyName Subkey "
"TerminalServicesAware TimeStampRounding TimeStampsInUTC TitleFontName TitleFontSize TouchDate TouchTime Type Types "
"UninstallDisplayIcon UninstallDisplayName UninstallDisplaySize UninstallFilesDir UninstallLogMode UninstallProgram "
"UninstallRestartComputer Uninstallable UpdateUninstallLogAppName UsePreviousAppDir UsePreviousGroup UsePreviousLanguage "
"UsePreviousPrivigeles UsePreviousSetupType UsePreviousTasks UsePreviousUserInfo UseSetupLdr UsedUserAreasWarning "
"UserInfoPage "
"ValueData ValueName Verb VersionInfoCompany VersionInfoCopyright VersionInfoDescription VersionInfoOriginalFileName "
"VersionInfoProductName VersionInfoProductTextVersion VersionInfoProductVersion VersionInfoTextVersion "
"VersionInfoVersion "
"WelcomeFontName WelcomeFontSize WindowResizable WindowShowCaption WindowStartMaximized WindowVisible "
"WizardImageAlphaFormat WizardImageFile WizardImageStretch WizardResizable "
"WizardSizePercent WizardSmallImageFile WizardStyle WorkingDir "

, // 2 constants
"app autoappdata autocf autocf32 autocf64 autodesktop autodocs autofonts autopf autopf32 autopf64 autoprograms "
"autostartmenu autostartup autotemplates "
"cf cf32 cf64 cm cmd code commonappdata commoncf commoncf32 commoncf64 commondesktop commondocs commonfonts "
"commonpf commonpf32 commonpf64 commonprograms commonstartmenu commonstartup commontemplates computername "
"dao dotnet40 dotnet4032 dotnet4064 drive fonts group groupname hwnd ini language localappdata log param pf pf32 pf64 "
"reg sd sendto src srcexe sys sysnative sysuserinfoname sysuserinfoorg syswow64 tmp "
"uninstallexe userappdata usercf userdesktop userdocs userfavorites userfonts userinfoname userinfoorg userinfoserial "
"username userpf userprograms usersavedgames usersendto userstartmenu userstartup usertemplates "
"win wizardhwnd "

, // 3 keywords
"and not or private protected public "

, // 4 directives
"append define dim elif else emit endif endsub error expr file for if ifdef ifexist ifndef ifnexist include insert "
"pragma preproc redim sub undef "

, // 5 types
"any func int str void "

, // 6 predefined variables
"COMPANY_NAME CompilerPath "
"FILE_DESCRIPTION FILE_VERSION "
"FIND_AND FIND_BEGINS FIND_CASESENSITIVE FIND_CONTAINS FIND_ENDS FIND_MATCH FIND_NOT FIND_OR FIND_SENSITIVE FIND_TRIM "
"False "
"HKCC HKCC64 HKCR HKCR64 HKCU HKCU64 HKEY_CLASSES_ROOT HKEY_CLASSES_ROOT_64 "
"HKEY_CURRENT_CONFIG HKEY_CURRENT_CONFIG_64 HKEY_CURRENT_USER HKEY_CURRENT_USER_64 "
"HKEY_LOCAL_MACHINE HKEY_LOCAL_MACHINE_64 HKEY_USERS HKEY_USERS_64 HKLM HKLM64 HKU HKU64 "
"INTERNAL_NAME ISPPCC_INVOKED ISPP_INVOKED LEGAL_COPYRIGHT MaxInt MinInt NULL NewLine No ORIGINAL_FILENAME "
"PREPROCVER PRODUCT_NAME PRODUCT_VERSION "
"SW_HIDE SW_MAX SW_MAXIMIZE SW_MINIMIZE SW_NORMAL SW_RESTORE "
"SW_SHOW SW_SHOWDEFAULT SW_SHOWMAXIMIZED SW_SHOWMINIMIZED SW_SHOWMINNOACTIVE SW_SHOWNA SW_SHOWNOACTIVATE SW_SHOWNORMAL "
"SourcePath "
"TYPE_ARRAY TYPE_ERROR TYPE_FUNC TYPE_INTEGER TYPE_MACRO TYPE_NULL TYPE_STRING Tab True UNICODE Ver WINDOWS Yes "
"__COUNTER__ __FILE__ __INCLUDE__ __LINE__ __OPT_X__ __WIN32__ "
"faAnyFile faArchive faDirectory faHidden faReadOnly faSymLink faSysFile faVolumeID "

, // 7 functions
"AddBackslash( ChangeFileExt( ComparePackedVersion( Copy( CopyFile( "
"DecodeVer( Defined( Delete( DeleteFile( DeleteFileNow( DeleteToFirstPeriod( DimOf( DirExists( "
"EncodeVer( EntryCount( Error( Exec( ExtractFileDir( ExtractFileExt( ExtractFileName( ExtractFilePath( "
"FileClose( FileEof( FileExists( FileOpen( FileRead( FileReset( FileSize( "
"Find( FindClose( FindCode( FindFirst( FindGetFileName( FindNext( FindNextSection( FindSection( FindSectionEnd( "
"ForceDirectories( "
"GetDateTimeString( GetEnv( GetFileCompany( GetFileCopyright( GetFileDateTimeString( GetFileDescription( "
"GetFileOriginalFilename( GetFileProductVersion( GetFileVersion( GetFileVersionString( "
"GetMD5OfFile( GetMD5OfString( GetMD5OfUnicodeString( GetPackedVersion( "
"GetSHA1OfFile( GetSHA1OfString( GetSHA1OfUnicodeString( GetStringFileInfo( "
"GetVersionComponents( GetVersionNumbers( GetVersionNumbersString( "
"Insert( Int( IsDirSet( IsWin64( Len( LowerCase( Max( Message( Min( "
"PackVersionComponents( PackVersionNumbers( ParseVersion( Pos( Power( "
"RPos( ReadIni( ReadReg( RemoveBackslash( RemoveFileExt( "
"SamePackedVersion( SameStr( SameText( SaveStringToFile( SaveToFile( SetSetupSetting( SetupSetting( "
"Str( StrToVersion( StringChange( "
"Trim( TypeOf( TypeOf2( UnpackVersionComponents( UnpackVersionNumbers( UpperCase( VersionToStr( "
"WarnRenamedVersion( Warning( WriteIni( YesNo( defined( "

, // 8 pascal keywords
"and begin break case class const constructor continue do downto else end event except external finally for function "
"if interface not of or procedure property read record repeat then to try type until uses var while with write "

, // 9 pascal types
"AnsiString Boolean Byte Char Directory HBITMAP IDispatch IUnknown Int64 Integer Longint String "
"TAlign TAlignment TAlphaFormat TAnchorKind TAnchors TBevel TBevelKind TBevelShape TBevelStyle TBevelWidth "
"TBitmap TBitmapImage TBorderIcon TBorderIcons TBorderStyle TBorderWidth TBrush TBrushStyle TButton TButtonControl "
"TCanvas TCheckBox TCheckBoxState TCheckItemOperation TCloseAction TCloseEvent TCloseQueryEvent "
"TColor TComboBox TComboBoxStyle TComponent TConstraintSize TControl TCustomCheckBox TCustomComboBox TCustomControl "
"TCustomEdit TCustomFolderTreeView TCustomLabel TCustomListBox TCustomMemo TCustomPanel TDownloadWizardPage TDuplicates "
"TEShiftState TEdit TEditCharCase "
"TFileStream TFolderRenameEvent TFolderTreeView TFont TFontStyle TFontStyles TForm TFormBorderStyle TFormStyle "
"TGraphic TGraphicControl TGraphicsObject THandleStream "
"TInputDirWizardPage TInputFileWizardPage TInputOptionWizardPage TInputQueryWizardPage TKeyEvent TKeyPressEvent "
"TLabel TListBox TListBoxStyle TMainForm TMemo TNewButton TNewCheckBox TNewCheckListBox TNewComboBox TNewEdit "
"TNewListBox TNewMemo TNewNotebook TNewNotebookPage TNewProgressBar TNewProgressBarState TNewProgressBarStyle "
"TNewRadioButton TNewStaticText TNotebook TNotifyEvent "
"TObject TOutputMarqueeProgressWizardPage TOutputMsgMemoWizardPage TOutputMsgWizardPage TOutputProgressWizardPage "
"TPanel TPanelBevel TPasswordEdit TPen TPenMode TPenStyle TPersistent TPosition TRadioButton TRichEditViewer "
"TScrollBarInc TScrollBarKind TScrollStyle TScrollingWinControl TSetupForm TSetupStep TShiftState TSizeConstraints "
"TStartMenuFolderTreeView TStream TStringList TStringStream TStrings TUIStateForm TUninstallProgressForm TUninstallStep "
"TWinControl "
"TWizardForm TWizardPage TWizardPageButtonEvent TWizardPageCancelEvent TWizardPageNotifyEvent TWizardPageShouldSkipEvent "
"Word "

, // 10 pascal functions
"Abort ActiveLanguage AddPeriod( AddQuotes( AnsiLowercase( AnsiUppercase( Beep BringToFrontAndRestore BrowseForFolder( "
"CharLength( CharToOemBuff( CheckForMutexes( Chr( CoFreeUnusedLibraries CompareStr( CompareText( ConvertPercentStr( "
"CreateCallback( CreateComObject( CreateCustomForm CreateCustomPage( CreateDir( CreateDownloadPage( "
"CreateInputDirPage( CreateInputFilePage( CreateInputOptionPage( CreateInputQueryPage( CreateMutex( CreateOleObject( "
"CreateOutputMarqueeProgressPage( CreateOutputMsgMemoPage( CreateOutputMsgPage( CreateOutputProgressPage( "
"CreateShellLink( CurrentFilename CurrentSourceFilename CustomMessage( "
"DLLGetLastError( DecrementSharedCount( DelTree( DelayDeleteFile( DeleteIniEntry( DeleteIniSection( "
"DownloadTemporaryFile( DownloadTemporaryFileSize( "
"EnableFsRedirection( ExecAsOriginalUser( ExitSetupMsgBox "
"ExpandConstant( ExpandConstantEx( ExpandFileName( ExpandUNCFileName( "
"ExtractFileDrive( ExtractRelativePath( ExtractTemporaryFile( ExtractTemporaryFiles( "
"FileCopy( FileOrDirExists( FileSearch( FileSize64( FindWindowByClassName( FindWindowByWindowName( FloatToStr( "
"FmtMessage( FontExists( Format( "
"GenerateUniqueName( Get8087CW GetActiveOleObject( GetArrayLength( GetCmdTail GetComputerNameString GetCurrentDir "
"GetExceptionMessage GetIniBool( GetIniInt( GetIniString( GetMainForm GetOpenFileName( GetOpenFileNameMulti( "
"GetPreviousData( GetSHA256OfFile( GetSHA256OfString( GetSHA256OfUnicodeString( GetSaveFileName( "
"GetShellFolderByCSIDL( GetShortName( GetSpaceOnDisk( GetSpaceOnDisk64( GetSysWow64Dir GetSystemDir GetTempDir "
"GetUILanguage GetUninstallProgressForm GetUserNameString "
"GetWinDir GetWindowsVersion GetWindowsVersionEx( GetWindowsVersionString GetWizardForm "
"IDispatchInvoke( IncrementSharedCount( IniKeyExists( InitializeBitmapImageFromIcon( InstallOnThisVersion( IntToStr( "
"Is64BitInstallMode IsARM64 IsAdmin IsAdminInstallMode IsDotNetInstalled( IsIA64 IsIniSectionEmpty( "
"IsMsiProductInstalled( IsProtectedSystemFile( IsUninstaller IsWildcard( IsWin64 IsX64 IsX86 "
"Length( LoadStringFromFile( LoadStringsFromFile( Log( Lowercase( "
"MakePendingFileRenameOperationsChecksum MinimizePathName( ModifyPifFile( MsgBox( Null OemToCharBuff( OleCheck( Ord( "
"PageFromID( PageIndexFromID( ParamCount ParamStr( PostBroadcastMessage( PostMessage( ProcessorArchitecture "
"RaiseException( Random( RegDeleteKeyIfEmpty( RegDeleteKeyIncludingSubkeys( RegDeleteValue( "
"RegGetSubkeyNames( RegGetValueNames( RegKeyExists( "
"RegQueryBinaryValue( RegQueryDWordValue( RegQueryMultiStringValue( RegQueryStringValue( RegValueExists( "
"RegWriteBinaryValue( RegWriteDWordValue( RegWriteExpandStringValue( RegWriteMultiStringValue( RegWriteStringValue( "
"RegisterExtraCloseApplicationsResource( RegisterServer( RegisterTypeLibrary( RegisterWindowMessage( "
"RemoveBackslashUnlessRoot( RemoveDir( RemoveQuotes( RenameFile( RestartReplace( RmSessionStarted "
"SaveStringsToFile( SaveStringsToUTF8File( ScaleX( ScaleY( SelectDisk( "
"SendBroadcastMessage( SendBroadcastNotifyMessage( SendMessage( SendNotifyMessage( Set8087CW( SetArrayLength( "
"SetCurrentDir( SetIniBool( SetIniInt( SetIniString( SetLength( SetNTFSCompression( SetPreviousData( SetupMessage( "
"ShellExec( ShellExecAsOriginalUser( ShowExceptionMessage Sleep( "
"StrToFloat( StrToInt( StrToInt64( StrToInt64Def( StrToIntDef( StringChangeEx( StringOfChar( StringToGUID( "
"SuppressibleMsgBox( SuppressibleTaskDialogMsgBox( SysErrorMessage( "
"TaskDialogMsgBox( Terminated TrimLeft( TrimRight( "
"Unassigned UninstallSilent UnloadDLL( UnpinShellLink( UnregisterFont( UnregisterServer( UnregisterTypeLibrary( "
"Uppercase( "
"VarIsClear( VarIsEmpty( VarIsNull( VarType( "
"WildcardMatch( WizardDirValue WizardGroupValue WizardIsComponentSelected( WizardIsTaskSelected( WizardNoIcons "
"WizardSelectComponents( WizardSelectTasks( WizardSelectedComponents( WizardSelectedTasks( WizardSetupType( WizardSilent "

, // 11 pascal constants
"HKA HKA32 HKA64 HKCC32 HKCR32 HKCU32 HKEY_AUTO HKEY_AUTO_32 HKEY_AUTO_64 "
"HKEY_CLASSES_ROOT_32 HKEY_CURRENT_CONFIG_32 HKEY_CURRENT_USER_32 HKEY_DYN_DATA HKEY_LOCAL_MACHINE_32 "
"HKEY_PERFORMANCE_DATA HKEY_USERS_32 HKLM32 HKU32 "
"IDABORT IDCANCEL IDIGNORE IDNO IDOK IDRETRY IDYES "
"MB_ABORTRETRYIGNORE MB_DEFBUTTON1 MB_DEFBUTTON2 MB_DEFBUTTON3 MB_OK MB_OKCANCEL MB_RETRYCANCEL MB_SETFOREGROUND "
"MB_YESNO MB_YESNOCANCEL "
"afDefined afIgnored afPremultiplied akBottom akLeft akRight akTop alBottom alClient alLeft alNone alRight alTop "
"biHelp biMaximize biMinimize biSystemMenu bkFlat bkNone bkSoft bkTile bsBDiagonal bsBottomLine bsBox bsClear bsCross "
"bsDiagCross bsDialog bsFDiagonal bsFrame bsHorizontal bsLeftLine bsLowered bsNone bsRaised bsRightLine "
"bsSingle bsSizeToolWin bsSizeable bsSolid bsSpacer bsToolWindow bsTopLine bsVertical bvLowered bvNone bvRaised bvSpace "
"caFree caHide caMinimize caNone cbChecked cbGrayed cbUnchecked coCheck coCheckWithChildren coUncheck "
"csDropDown csDropDownList csOwnerDrawFixed csOwnerDrawVariable csSimple "
"ecLowerCase ecNormal ecUpperCase fsBold fsItalic fsStrikeOut fsUnderline "
"lbOwnerDrawFixed lbOwnerDrawVariable lbStandard mbConfirmation mbCriticalError mbError mbInformation "
"npbsError npbsNormal npbsPaused npbstMarquee npbstNormal "
"pmBlack pmCopy pmMask pmMaskNotPen pmMaskPenNot pmMerge pmMergeNotPen pmMergePenNot "
"pmNop pmNot pmNotCopy pmNotMask pmNotMerge pmNotXor pmWhite pmXor "
"poDefault poDefaultPosOnly poDefaultSizeOnly poDesigned poDesktopCenter poMainFormCenter poOwnerFormCenter "
"poScreenCenter psClear psDash psDashDot psDashDotDot psDot psInsideFrame psSolid "
"sbHorizontal sbVertical "
"sfAppData sfDesktop sfDocs sfFavorites sfFonts sfLocalAppData sfPrograms sfSendTo sfStartMenu sfStartup sfTemplates "
"srNo srUnknown srYes ssAlt ssBoth ssCtrl ssDone ssDouble ssHorizontal ssInstall ssLeft ssMiddle ssNone ssPostInstall "
"ssRight ssShift ssVertical "
"taCenter taLeftJustify taRightJustify "
"wpFinished wpInfoAfter wpInfoBefore wpInstalling wpLicense wpPassword wpPreparing wpReady "
"wpSelectComponents wpSelectDir wpSelectProgramGroup wpSelectTasks wpUserInfo wpWelcome "

, // 12 misc
"AbortButton AbortedByUser Active ActiveControl ActivePage Align Alignment AllowGrayed AlphaFormat Anchors "
"AutoScroll AutoSelect AutoSize "
"BackButton BackButtonClick( BackColor Bevel Bevel1 BevelInner BevelKind BevelOuter BevelWidth BeveledLabel Bitmap "
"BorderIcons BorderStyle BorderWidth Brush Buttons "
"Cancel CancelButton CancelButtonClick( Canvas Caption Center CharCase CheckListBox CheckPassword( CheckSerial( Checked "
"ClientHeight ClientWidth Color "
"CommaText ComponentCount ComponentIndex ComponentState Components ComponentsDiskSpaceLabel ComponentsList "
"Constraints ControlCount Controls ControlsFlipped CopyMode Count "
"CurInstallProgressChanged( CurPageChanged( CurPageID CurStepChanged( CurUninstallStepChanged( Cursor "
"Default DeinitializeSetup( DeinitializeUninstall( Description DesignInfo DirBrowseButton DirEdit DiskSpaceLabel "
"DropDownCount DroppedDown Duplicates "
"Edits Empty Enabled "
"FilenameLabel FinishedHeadingLabel FinishedLabel FinishedPage Flat FlipControlsOnShow "
"FocusControl Font ForceLTRReading FormStyle "
"GetCustomSetupExitCode GroupBrowseButton GroupEdit Handle Height HideSelection Hint "
"ID InfoAfterClickLabel InfoAfterMemo InfoAfterPage InfoBeforeClickLabel InfoBeforeMemo InfoBeforePage "
"InitializeSetup( InitializeUninstall( InitializeUninstallProgressForm( InitializeWizard( InnerNotebook InnerPage "
"InstallingPage IsSaveButton ItemCaption ItemEnabled ItemFontStyle ItemIndex ItemLevel ItemObject ItemSubItem Items "
"KeepSizeY KeyPreview "
"Left LicenseAcceptedRadio LicenseLabel1 LicenseMemo LicenseNotAcceptedRadio LicensePage Lines Local "
"MainPanel Max MaxHeight MaxLength MaxWidth Min MinHeight MinItemHeight MinWidth ModalResult Mode Modified "
"Msg1Label Msg2Label MsgLabel MultiSelect "
"Name NeedRestart( NextButton NextButtonClick( NoIconsCheck NoRadio Notebook "
"Objects Offset OnActivate OnBackButtonClick "
"OnCancelButtonClick OnChange OnChanging OnClick OnClickCheck OnClose OnCloseQuery OnCreate "
"OnDblClick OnDeactivate OnDestroy OnDropDown OnHide OnKeyDown OnKeyPress OnKeyUp OnNextButtonClick OnRename OnResize "
"OnShouldSkipPage OnShow OuterNotebook Owner "
"PageCount PageDescriptionLabel PageIndex PageNameLabel Pages Parent ParentBackground "
"Password PasswordChar PasswordEdit PasswordEditLabel PasswordLabel PasswordPage Pen Pitch Pixels PixelsPerInch Position "
"PrepareToInstall( "
"PreparingErrorBitmapImage PreparingLabel PreparingMemo PreparingNoRadio PreparingPage PreparingYesRadio PrevAppDir "
"ProgressBar ProgressGauge PromptLabels "
"RTFText ReadOnly ReadyLabel ReadyMemo ReadyPage RegisterExtraCloseApplicationsResources RegisterPreviousData( "
"ReplaceColor ReplaceWithColor RequireRadioSelection RichEditViewer RightToLeft RunList "
"ScrollBars SelCount SelLength SelStart SelText SelectComponentsLabel SelectComponentsPage "
"SelectDirBitmapImage SelectDirBrowseLabel SelectDirLabel SelectDirPage SelectGroupBitmapImage SelectProgramGroupPage "
"SelectStartMenuFolderBrowseLabel SelectStartMenuFolderLabel SelectTasksLabel SelectTasksPage "
"Selected SelectedValueIndex Shape ShouldSkipPage( ShowAccelChar ShowHint ShowLines Showing Size SizeAndCenterOnShow "
"Sorted State StatusLabel Stretch Strings Style "
"SubCaptionLabel SubItemFontStyle Surface SurfaceColor SurfaceHeight SurfaceWidth "
"TabOrder TabStop Tag TasksList Text Top TypesCombo "
"UninstallNeedRestart( UpdateReadyMemo( UseRichEdit "
"UserInfoNameEdit UserInfoNameLabel UserInfoOrgEdit UserInfoOrgLabel UserInfoPage UserInfoSerialEdit UserInfoSerialLabel "
"Values Visible "
"WantReturns WantTabs WelcomeLabel1 WelcomeLabel2 WelcomePage "
"Width WizardBitmapImage WizardBitmapImage2 WizardSmallBitmapImage WordWrap "
"YesRadio error include inlineend inlinestart message option parseroption spansymbol verboselevel warning "

, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_INNO[] = {
	EDITSTYLE_DEFAULT,
	{ MULTI_STYLE(SCE_INNO_KEYWORD, SCE_INNO_PASCAL_KEYWORD, 0, 0), NP2StyleX_Keyword, L"bold; fore:#FF8000" },
	{ SCE_INNO_PASCAL_TYPE, NP2StyleX_Type, L"bold; fore:#1E90FF" },
	{ MULTI_STYLE(SCE_INNO_PREPROCESSOR, SCE_INNO_PREPROCESSOR_WORD, 0, 0), NP2StyleX_Preprocessor, L"fore:#FF8000" },
	{ SCE_INNO_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_INNO_SECTION, NP2StyleX_Section, L"bold; back:#FFC040; eolfilled" },
	{ MULTI_STYLE(SCE_INNO_PARAMETER, SCE_INNO_PLACEHOLDER, 0, 0), NP2StyleX_Parameter, L"fore:#0000FF" },
	{ SCE_INNO_INLINE_EXPANSION, NP2StyleX_InlineExpansion, L"fore:#8080FF" },
	{ SCE_INNO_CONSTANT, NP2StyleX_Constant, L"fore:#B000B0" },
	{ MULTI_STYLE(SCE_INNO_COMMENT, SCE_INNO_ISPP_COMMENTBLOCK, SCE_INNO_PASCAL_COMMENTPAREN, SCE_INNO_PASCAL_COMMENTBRACE), NP2StyleX_Comment, L"fore:#008000" },
	{ MULTI_STYLE(SCE_INNO_STRING_DQ, SCE_INNO_STRING_SQ, SCE_INNO_STRING_ANGLE, SCE_INNO_PREPROCESSOR_MESSAGE), NP2StyleX_String, L"fore:#808000" },
	{ SCE_INNO_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_INNO_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexInnoSetup = {
	SCLEX_INNOSETUP, NP2LEX_INNOSETUP,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // section, code
		0
		, KeywordAttr32(0, KeywordAttr_NoLexer) // section
		| KeywordAttr32(1, KeywordAttr_NoLexer) // parameters
		| KeywordAttr32(2, KeywordAttr_NoLexer) // constants
		| KeywordAttr32(3, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(4, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // directives
		| KeywordAttr32(5, KeywordAttr_PreSorted) // types
		| KeywordAttr32(6, KeywordAttr_MakeLower) // predefined variables
		| KeywordAttr64(7, KeywordAttr_NoLexer) // functions
		| KeywordAttr64(8, KeywordAttr_PreSorted) // pascal keywords
		| KeywordAttr64(9, KeywordAttr_MakeLower) // pascal types
		| KeywordAttr64(10, KeywordAttr_NoLexer) // pascal functions
		| KeywordAttr64(11, KeywordAttr_MakeLower) // pascal constants
		| KeywordAttr64(12, KeywordAttr_NoLexer) // misc
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Inno Setup Script", Styles_INNO),
	L"iss; isl; islu",
	&Keywords_INNO,
	Styles_INNO
};
