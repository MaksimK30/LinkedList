Описание реализуемой структуры данных и её базовых методов и свойств

Линейный однонаправленный список — это структура данных, состоящая из элементов одного типа, связанных между собой последовательно посредством указателей. Каждый элемент списка имеет указатель на следующий элемент. Последний элемент списка указывает на NULL. Элемент, на который нет указателя, является первым (головным) элементом списка. Здесь ссылка в каждом узле указывает на следующий узел в списке. В односвязном списке можно передвигаться только в сторону конца списка. Узнать адрес предыдущего элемента, опираясь на содержимое текущего узла, невозможно.

В информатике линейный список обычно определяется как абстрактный тип данных (АТД), формализующий понятие упорядоченной коллекции данных. На практике линейные списки обычно реализуются при помощи массивов и связных списков. Иногда термин «список» неформально используется также как синоним понятия «связный список». К примеру, АТД нетипизированного изменяемого списка может быть определён как набор из конструктора и основных операций:

    Операция, проверяющая список на пустоту.
    Три операции добавления объекта в список (в начало, конец или внутрь после любого (n-го) элемента списка);
    Операция, вычисляющая первый (головной) элемент списка;
    Операция доступа к списку, состоящему из всех элементов исходного списка, кроме первого.

Характеристики

    Длина списка. Количество элементов в списке.
    Списки могут быть типизированными или нетипизированными. Если список типизирован, то тип его элементов задан, и все его элементы должны иметь типы, совместимые с заданным типом элементов списка. Чаще списки типизированы.
    Список может быть сортированным или несортированным.
    В зависимости от реализации может быть возможен произвольный доступ к элементам списка.