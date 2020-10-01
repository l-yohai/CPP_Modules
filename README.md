# CPP_Modules

## [CPP_Modules_00](/00)
## [CPP_Modules_01](/01)
## [CPP_Modules_02](/02)
## [CPP_Modules_03](/03)
## [CPP_Modules_04](/04)
## [CPP_Modules_05](/05)
## [CPP_Modules_06](/06)
## [CPP_Modules_07](/07)
## [CPP_Modules_08](/08)


### CPP Code Snippet for 42 style

```JSON
{
	"setHPP": {
		"prefix": ">setHPP", 
		"body": [
			"#ifndef ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_HPP",
			"# define ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_HPP",
			"",
			"# include <iostream>",
			"",
			"class ${1:${TM_FILENAME_BASE}}",
			"{",
			"    private:",
			"        ${2:/* data */}",
			"    public:",
			"        ${1:${TM_FILENAME_BASE}}(${3:/* args*/});",
			"        ${1:${TM_FILENAME_BASE}}(const ${1:${TM_FILENAME_BASE}} &);",
			"        ${1:${TM_FILENAME_BASE}}& operator=(const ${1:${TM_FILENAME_BASE}} &);",
			"        ~${1:${TM_FILENAME_BASE}}();",
			"};",
			"",
			"#endif"
		],
		"description": "이 스니펫은 ifnde~endif를 작성하는 용도입니다."
	},

	"setCPP": {
		"prefix": ">setCPP", 
		"body": [
			"#include \"${1:${TM_FILENAME_BASE}}.hpp\"",
			"",
			"${1:${TM_FILENAME_BASE}}::${1:${TM_FILENAME_BASE}}() {}",
			"",
			"${1:${TM_FILENAME_BASE}}::${1:${TM_FILENAME_BASE}}(const ${1:${TM_FILENAME_BASE}} & other)",
			"{",
			"    ${2:*this = other};",
			"}",
			"",
			"${1:${TM_FILENAME_BASE}} & ${1:${TM_FILENAME_BASE}}::operator=(const ${1:${TM_FILENAME_BASE}} & other)",
			"{",
			"    ${3:return (*this)};",
			"}",
			"",
			"${1:${TM_FILENAME_BASE}}::~${1:${TM_FILENAME_BASE}}() {}",
		],
		"description": "이 스니펫은 클래스의 구현부를 작성하는 용도입니다.."
	},
}
```