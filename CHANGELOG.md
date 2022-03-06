# Changelog

## 0.1.1

- syntax: new unary expressions `+` and `-`
- syntax: fixed regression in `(summary.ok+1)`
- syntax: member_access doesn't include numbers anymore

## 0.1.0

- syntax: Shebang support in first line of file `#!/usr/bin/env lithia`
- syntax: alias imports `import alias = mod.submod`
- syntax: split `number_literal` into `int_literal` and `float_literal`
- highlight: `int_literal` and `float_literal` are `@constant.numeric`
