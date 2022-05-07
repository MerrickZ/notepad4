#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_Jam = {{
//++Autogenerated -- start of section automatically generated
"actions bind break case catch class continue default else existing false for if ignore import in include local module "
"on piecemeal quietly return rule switch together true try updated using while "

, // 1 module
"modules path regex sequence stage target-module type "

, // 2 class
"abstract-target basic-target main-target project-target property-set typed-target "

, // 3 builtin rule
"ALWAYS BACKTRACE CALLER_MODULE DELETE_MODULE DEPENDS ECHO EXIT EXPORT FAIL_EXPECTED FILE_OPEN GLOB GLOB_ARCHIVE "
"IMPORT INCLUDES ISFILE LEAVES MATCH MD5 NOCARE NOTFILE NOUPDATE PAD PRECIOUS RMOLD RULENAMES SHELL SPLIT_BY_CHARACTERS "
"TEMPORARY UPDATE UPDATE_NOW VARNAMES W32_GETREG W32_GETREGNAMES alias always build-project "
"check-target-builds compile compile-fail constant exe explicit glob glob-tree install lib link link-fail obj "
"path-constant preprocessed project run run-fail test-suite unit-test use-project "

, // 4 constant
"ARGV BINDMODULE BINDRULE BUILTIN_GLOB_ARCHIVE_BACK BUILTIN_GLOB_BACK ENVIRON EXTRA_PYTHONPATH "
"FILE_ARCHIVESCAN FILE_DIRSCAN HCACHEFILE HCACHEMAXAGE HDRRULE HDRSCAN IMPORT_MODULE "
"JAMDATE JAMSHELL JAMUNAME JAM_SEMAPHORE JAM_TIMESTAMP_RESOLUTION JAM_VERSION KEEP_GOING LOCATE "
"MAIN MAIN_MAKE MAIN_PYTHON MAKE_MAKE0 MAKE_MAKE0SORT MAKE_MAKE1 OTHER PARALLELISM SEARCH STDERR STDOUT "
"TMPDIR TMPFILE TMPNAME TOTAL __ACTION_RULE__ __TIMING_RULE__ __bases__ __class__ __name__ __python__ python_interface "
"timestamp "

, // 5 rule
"__init__ add add-install-dir add-raw all-bases all-derived all-parents base basename binding build-dir "
"call-in change-generated-target-prefix change-generated-target-suffix clone-rules construct escape exists "
"filter find full-name "
"generate generated-target-prefix generated-target-suffix get get-dir get-package-name get-scanner glob-in-parents "
"has-main-target has-parent insertion-sort install-dir-names is-derived is-rooted join length load location "
"make makedirs match max-element merge name native parent peek poke programs-path propagated pwd "
"raw refine register register-suffixes registered relative relative-to replace replace-list reverse root "
"select-highest-ranked set-generated-target-prefix set-generated-target-suffix set-scanner split split-list str "
"transform unique validate "

, // 6 feature
"address-model address-sanitizer allow architecture archiveflags asmflags asynch-exceptions build "
"c++-template-depth c++abi cflags conditional coverage cxxflags cxxstd cxxstd-dialect "
"debug-symbols def-file define dependency dll-path "
"embed-manifest embed-manifest-file embed-manifest-via exception-handling extern-c-nothrow "
"fflags file find-shared-library find-static-library flags force-include hardcode-dll-paths "
"implicit-dependency inlining install-package instruction-set "
"leak-sanitizer library library-path linkflags local-visibility location-prefix lto lto-mode mflags mmflags optimization "
"profiling relevant response-file rtti runtime-debugging runtime-link "
"search source staging-prefix stdlib strip suppress-import-lib "
"tag target-os thread-sanitizer threading toolset translate-path undef undefined-sanitizer use user-interface "
"variant vectorize version visibility warnings warnings-as-errors "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_Jam[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_JAM_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_JAM_MODULE, NP2StyleX_Module, L"fore:#FF8000" },
	{ SCE_JAM_CLASS, NP2StyleX_Class, L"bold; fore:#0080C0" },
	{ SCE_JAM_RULE, NP2StyleX_Rule, L"fore:#0080C0" },
	{ SCE_JAM_FEATURE, NP2StyleX_Feature, L"fore:#0080FF" },
	{ SCE_JAM_CONSTANT, NP2StyleX_Constant, L"fore:#B000B0" },
	{ MULTI_STYLE(SCE_JAM_COMMENTLINE, SCE_JAM_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_JAM_STRING, NP2StyleX_String, L"fore:#008000" },
	{ SCE_JAM_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_JAM_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_JAM_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexJamfile = {
	SCLEX_JAMFILE, NP2LEX_JAMFILE,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // level1, level2
		0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // module
		| KeywordAttr32(2, KeywordAttr_PreSorted) // class
		| KeywordAttr32(3, KeywordAttr_PreSorted) // builtin rule
		| KeywordAttr32(4, KeywordAttr_PreSorted) // constant
		| KeywordAttr32(5, KeywordAttr_NoLexer) // rule
		| KeywordAttr32(6, KeywordAttr_NoLexer) // feature
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Jamfile", Styles_Jam),
	L"jam",
	&Keywords_Jam,
	Styles_Jam
};
