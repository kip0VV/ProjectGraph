# ProjectGraph — текущая модель

## Структуры

```cpp
Variable {
    name
    selfDepent
}

Elsif {
    condition
    true_variables
    false_variables
}

Loop {
    condition
    variables
    elsifs
}

Func {
    name
    input
    variables
    loops
    Func_return
    elsifs
}
```

## Пример `maxArea`

```text
Function: maxArea
├── INPUT
│   └── vector<int>& height
├── Variables
│   ├── *int result
│   ├── left
│   └── right
├── Loop
│   ├── condition: left < right
│   ├── Variables
│   │   └── int area
│   └── Elsif
│       ├── condition: height[left] < height[right]
│       ├── TRUE changes: left
│       └── FALSE changes: right
└── RETURN
    └── int result
```

## Scope

Область видимости определяется местом хранения:

- `maxArea.variables` — переменные функции: `result`, `left`, `right`;
- `loop_while.variables` — переменные цикла: `area`;
- `loop_while.elsifs` — условная конструкция внутри цикла.

`*` — маркер self-dependency в ProjectGraph, а не указатель C++.
