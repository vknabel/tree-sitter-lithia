package treesitterlithia

import (
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/vknabel/tree-sitter-lithia/src"
)

func GetLanguage() *sitter.Language {
	return sitter.NewLanguage(src.LanguagePtr)
}
