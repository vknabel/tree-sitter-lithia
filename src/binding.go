package src

//#include "./tree_sitter/parser.h"
//TSLanguage *tree_sitter_Lithia();
import "C"
import (
	"unsafe"
)

var LanguagePtr = unsafe.Pointer(C.tree_sitter_Lithia())
