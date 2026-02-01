!define PRODUCT_NAME "Notepad4"
!define PRODUCT_VERSION "${VERSION}"
!define PRODUCT_PUBLISHER "Notepad4 Team"
!define PRODUCT_DIR_REGKEY "Software\Microsoft\Windows\CurrentVersion\App Paths\Notepad4.exe"
!define PRODUCT_UNINST_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}"
!define PRODUCT_UNINST_ROOT_KEY "HKLM"

!include "x64.nsh"

!include "MUI2.nsh"

; MUI General Settings
!define MUI_ABORTWARNING
!define MUI_ICON "..\res\Notepad4.ico"
!define MUI_UNICON "${NSISDIR}\Contrib\Graphics\Icons\modern-uninstall.ico"
!define MUI_HEADERIMAGE
!define MUI_HEADERIMAGE_BITMAP "${NSISDIR}\Contrib\Graphics\Header\nsis.bmp"
!define MUI_WELCOMEFINISHPAGE_BITMAP "${NSISDIR}\Contrib\Graphics\Wizard\nsis.bmp"
!define MUI_COMPONENTSPAGE_SMALLDESC

; Page Settings
!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_LICENSE "..\License.txt"
!insertmacro MUI_PAGE_COMPONENTS
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH

; Uninstall Page Settings
!insertmacro MUI_UNPAGE_WELCOME
!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES
!insertmacro MUI_UNPAGE_FINISH

; Language Settings
!insertmacro MUI_LANGUAGE "English"

Name "${PRODUCT_NAME} ${PRODUCT_VERSION} (${ARCH})"
OutFile "${OUTPUT_FILE}"
InstallDir "$PROGRAMFILES\${PRODUCT_NAME}"
InstallDirRegKey HKLM "${PRODUCT_DIR_REGKEY}" "Path"

; Component page configuration
!define MUI_COMPONENTSPAGE_NODESC

Section "Notepad4 Main Program" SEC_MAIN
  SectionIn RO
  SetOutPath "$INSTDIR"
  ; Use SOURCE_DIR variable passed from command line
  File "${SOURCE_DIR}\Notepad4.exe"
  File "${SOURCE_DIR}\matepath.exe"
  
  WriteRegStr HKLM "${PRODUCT_DIR_REGKEY}" "" "$INSTDIR\Notepad4.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayName" "${PRODUCT_NAME}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "UninstallString" "$INSTDIR\uninstall.exe"
  WriteUninstaller "$INSTDIR\uninstall.exe"
SectionEnd

Section "Language Packs" SEC_LOCALE
  ; Build locale path using ARCH variable
  ; Actual locale path: build\bin\Release\{platform}\locale\
  
  ; Set base directory for locales
  !define LOCALE_BASE_DIR "..\build\bin\Release"
  
  ; Determine platform directory based on ARCH variable
  !ifdef ARCH
    !if "${ARCH}" == "x86"
      !define PLATFORM_DIR "Win32"
    !elseif "${ARCH}" == "x64"
      !define PLATFORM_DIR "x64"
    !elseif "${ARCH}" == "arm64"
      !define PLATFORM_DIR "ARM64"
    !else
      !define PLATFORM_DIR "Win32"
    !endif
  !else
    !define PLATFORM_DIR "Win32"
  !endif
  
  ; Build full locale directory path
  !define LOCALE_FULL_DIR "${LOCALE_BASE_DIR}\${PLATFORM_DIR}\locale"
  
  SetOutPath "$INSTDIR\locale\de"
  File /r "${LOCALE_FULL_DIR}\de\*.dll"
  
  SetOutPath "$INSTDIR\locale\fr"
  File /r "${LOCALE_FULL_DIR}\fr\*.dll"
  
  SetOutPath "$INSTDIR\locale\it"
  File /r "${LOCALE_FULL_DIR}\it\*.dll"
  
  SetOutPath "$INSTDIR\locale\ja"
  File /r "${LOCALE_FULL_DIR}\ja\*.dll"
  
  SetOutPath "$INSTDIR\locale\ko"
  File /r "${LOCALE_FULL_DIR}\ko\*.dll"
  
  SetOutPath "$INSTDIR\locale\pl"
  File /r "${LOCALE_FULL_DIR}\pl\*.dll"
  
  SetOutPath "$INSTDIR\locale\pt-BR"
  File /r "${LOCALE_FULL_DIR}\pt-BR\*.dll"
  
  SetOutPath "$INSTDIR\locale\ru"
  File /r "${LOCALE_FULL_DIR}\ru\*.dll"
  
  SetOutPath "$INSTDIR\locale\zh-Hans"
  File /r "${LOCALE_FULL_DIR}\zh-Hans\*.dll"
  
  SetOutPath "$INSTDIR\locale\zh-Hant"
  File /r "${LOCALE_FULL_DIR}\zh-Hant\*.dll"
SectionEnd

; Component descriptions
!insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
  !insertmacro MUI_DESCRIPTION_TEXT ${SEC_MAIN} "Notepad4 main program and matepath tool"
  !insertmacro MUI_DESCRIPTION_TEXT ${SEC_LOCALE} "Multi-language support files"
!insertmacro MUI_FUNCTION_DESCRIPTION_END

Section "Uninstall"
  Delete "$INSTDIR\uninstall.exe"
  Delete "$INSTDIR\Notepad4.exe"
  Delete "$INSTDIR\matepath.exe"
  
  ; Delete locale folders
  RMDir /r "$INSTDIR\locale"
  
  DeleteRegKey ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}"
  DeleteRegKey HKLM "${PRODUCT_DIR_REGKEY}"
  
  RMDir "$INSTDIR"
SectionEnd