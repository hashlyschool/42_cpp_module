# C++ Module 05 #

Повторы и исключения

Резюме:

Этот документ содержит упражнения модуля 02 из модулей C++.

Версия: `9`

## Содержание ##

1.	[Введение](#Введение)
2.	[Общие инструкции](#Общие-инструкции)
3.	[Новые правила](#Новые-правила)
4.	[Упражнение 00: Mommy, when I grow up, I want to be a bureaucrat](#Упражнение-00-Mommy-when-I-grow-up-I-want-to-be-a-bureaucrat)
5.	[Упражнение 01: Form up, maggots](#Упражнение-01-Form-up-maggots)
6.	[Упражнение 02: No, you need form 28B, not 28C](#Упражнение-02-No-you-need-form-28B-not-28C)
6.	[Упражнение 03: At least this beats coffee-making](#Упражнение-03-At-least-this-beats-coffee-making)

## Глава I ##

### Введение ###

C++ — это язык программирования общего назначения, созданный Бьерном Страуструпом как расширение языка программирования C или «C with Classes» (источник: Википедия).

Цель этих модулей — познакомить вас с объектно-ориентированным программированием. Это будет отправной точкой вашего путешествия по C++.

Многие языки рекомендуются для изучения ООП. Мы решили выбрать C++, так как он является производным от вашего старого знакомого C. Поскольку это сложный язык, и для простоты ваш код будет соответствовать стандарту C++98.

Мы знаем, что современный C++ сильно отличается во многих аспектах. Так что, если вы хотите стать опытным разработчиком C++, вам решать, идти ли дальше после 42 Common Core!

## Глава II ##

### Общие инструкции ###

#### Компиляция ####
* Скомпилируйте свой код с помощью C++ и флагов -Wall -Wextra -Werror
* Ваш код все равно должен компилироваться, если вы добавите флаг -std=c++98
#### Форматирование и соглашения об именах ####
* Каталоги упражнений будут называться следующим образом: ex00, ex01, ..., ex[n]
* Назовите ваши файлы, классы, функции, функции-члены и атрибуты, как это требуется в рекомендациях.
* Пишите имена классов в формате UpperCamelCase. Файлы, содержащие код класса, всегда будут называться в соответствии с именем класса.

	Например:
	ClassName.hpp/ClassName.h, ClassName.cpp или ClassName.tpp. Затем, если у вас есть заголовочный файл, содержащий определение класса «BrickWall», обозначающего кирпичную стену, его имя будет BrickWall.hpp.
* Если не указано иное, каждое выходное сообщение должно заканчиваться символом новой строки и выводиться на стандартный вывод.
* До свидания, Норминетт! В модулях C++ не применяется стиль кодирования. Вы можете следить за своим любимым. Но имейте в виду, что код, который не могут понять ваши коллеги-оценщики, — это код, который они не могут оценить. Старайтесь писать чистый и читаемый код.

#### Разрешено/Запрещено ####

Вы больше не кодируете на C. Время С++! Поэтому:

* Вам разрешено использовать почти все из стандартной библиотеки. Таким образом, вместо того, чтобы придерживаться того, что вы уже знаете, было бы разумно использовать как можно больше C++-версий функций C, к которым вы привыкли.
* Однако вы не можете использовать никакую другую внешнюю библиотеку. Это означает, что C++11 (и производные формы) и библиотеки Boost запрещены. Также запрещены следующие функции: *printf(), *alloc() и free(). Если вы их используете, ваша оценка будет 0 и все.
* Обратите внимание, что если явно не указано иное, использование пространства имен `<ns_name>` и `friend` ключевых слов запрещено. В противном случае ваша оценка будет -42.
* Вам разрешено использовать STL только в Модуле 08. Это означает: никаких контейнеров (vector/list/map и т. д.) и никаких алгоритмов (все, что требует включения заголовка <algorithm>) до этого момента. В противном случае ваша оценка будет -42.

#### Несколько требований к дизайну ####
* Утечка памяти происходит и в C++. Когда вы выделяете память (используя ключевое слово new), вы должны избегать утечек памяти.
* Начиная с Модуля 02 и заканчивая Модулем 08, ваши классы должны быть разработаны в `Orthodox Canonical Form`, за исключением случаев, когда прямо указано иное.
* Любая реализация функции, помещенная в заголовочный файл (кроме шаблонов функций), означает 0 для упражнения.
* Вы должны иметь возможность использовать каждый из ваших заголовков независимо от других. Таким образом, они должны включать все необходимые им зависимости. Однако вы должны избежать проблемы двойного включения, добавив защиту включения. В противном случае ваша оценка будет 0.

#### Прочти меня ####
* При необходимости вы можете добавить несколько дополнительных файлов (например, для разделения кода). Поскольку эти назначения не проверяются программой, не стесняйтесь делать это при условии, что вы сдадите обязательные файлы.
* Иногда рекомендации упражнения кажутся короткими, но в примерах могут быть показаны требования, которые явно не прописаны в инструкциях.
* Полностью прочитайте каждый модуль перед началом! Действительно, сделай это.
* Во имя Одина, во имя Тора! Включи мозг!!!

	> Вам придется реализовать много классов. Это может показаться утомительным, если только вы не умеете писать сценарии в своем любимом текстовом редакторе.

	> Вам предоставляется определенная свобода для выполнения упражнений. Тем не менее, соблюдайте обязательные правила и не ленитесь. Вы упустите много полезной информации! Не стесняйтесь читать о теоретических концепциях.


### Новые правила ###

Отныне все ваши занятия должны быть оформлены в православной канонической форме, если прямо не указано иное. Затем они будут реализовывать четыре обязательные функции-члены ниже:
* Конструктор по умолчанию
* Конструктор копирования
* Копировать оператор присваивания
* Деструктор

## Глава III ##

### Упражнение 00: Mommy, when I grow up, I want to be a bureaucrat ###

Название программы  | Mommy, when I grow up, I want to be a bureaucrat!
:------------------:|:---------------
Каталог сдачи		| ex00/
Файлы для сдачи		| Makefile, main.cpp, Bureaucrat.{h, hpp}, Bureaucrat.cpp
Запрещенные функции	| Нет

	Обратите внимание, что классы исключений не обязательно должны быть разработаны в православной канонической форме. Но все остальные классы должны.

Давайте создадим искусственный кошмар из офисов, коридоров, бланков и очередей ожидания. Звучит смешно? Нет? Очень жаль.

Во-первых, начнем с самого маленького винтика в этой огромной бюрократической машине: `Bureaucrat`.

`Bureaucrat` должен иметь:
* const name.
* И оценка в диапазоне от 1 (самая высокая оценка) до 150 (самая низкая оценка).

Любая попытка создать экземпляр `Bureaucrat` с использованием недопустимой оценки должна вызвать исключение:
* либо `Bureaucrat::GradeTooHighException`
* либо `Bureaucrat::GradeTooLowException`

Вы предоставите геттеры для обоих этих атрибутов:
* `getName()`
* `getGrade()`

Реализуйте также две функции-члены для увеличения или уменьшения уровня бюрократа. Если оценка выходит за пределы диапазона, оба они будут генерировать те же исключения, что и конструктор.

	Помните. Поскольку 1-й разряд является высшим, а 150 — низшим, увеличение 3-го разряда должно дать бюрократу 2-й разряд.

Создаваемые исключения должны быть перехватываемыми с помощью блоков `try` и `catch`:

	try
	{
		/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		/* handle exception */
	}

Вы реализуете перегрузку оператора вставки («) для вывода чего-то вроде (без угловых скобок):

	<name>, bureaucrat grade <grade>.

Как обычно, проведите несколько тестов, чтобы убедиться, что все работает так, как ожидалось.

## Глава IV ##

### Упражнение 01: Form up, maggots ###

Название программы  |  Form up, maggots
:------------------:|:---------------
Каталог сдачи		| ex01/
Файлы для сдачи		| Files from previous exercise + Form.{h, hpp}, Form.cpp
Запрещенные функции	| Нет

Теперь, когда у вас есть бюрократы, давайте дадим им какое-нибудь дело. Что может быть лучше занятия, чем заполнение стопки форм?

Затем создадим класс `Form`. В нем есть:

* `const name`
* `bool signed`, указывающее, подписано ли оно (при построении — нет).
* `const grade_sign`, необходимая для его подписания.
* `const grade_execute`, необходимая для его выполнения.

Все эти атрибуты являются private, а не protected.

Оценки Формы следуют тем же правилам, которые применяются к Бюрократу. Таким образом, если оценка формы выходит за допустимые пределы, будут выброшены следующие исключения:
`Form::GradeTooHighException` и `Form::GradeTooLowException`.

Как и раньше, напишите геттеры для всех атрибутов и перегрузку оператора вставки (<<), который выводит всю информацию формы.

Добавьте также функцию-член `beSigned()` в форму, которая принимает `Bureaucrat` в качестве параметра. Он меняет статус формы на подписанный, если уровень бюрократа достаточно высок (выше или равен требуемому). Помните, что оценка 1 выше, чем оценка 2. Если оценка слишком низкая, сгенерируйте `Form::GradeTooLowException`.

Наконец, добавьте функцию-член `signForm()` в `Bureaucrat`. Если форма была подписана, она напечатает что-то вроде:

	<bureaucrat> signed <form>

В противном случае он будет печатать что-то вроде:

	<bureaucrat> couldn’t sign <form> because <reason>

Внедрите и сдайте несколько тестов, чтобы убедиться, что все работает так, как ожидалось.

## Глава V ##

### Упражнение 02: No, you need form 28B, not 28C ###

Название программы  |  No, you need form 28B, not 28C...
:------------------:|:---------------
Каталог сдачи		| ex02/
Файлы для сдачи		| Files from previous exercises + ShrubberyCreationForm.[{h, hpp},cpp], RobotomyRequestForm.[{h, hpp},cpp], PresidentialPardonForm.[{h, hpp},cpp]
Запрещенные функции	| Нет


Поскольку у вас теперь есть базовые формы, пришло время сделать еще несколько, которые действительно что-то делают.

Во всех случаях форма базового класса должна быть абстрактным классом. Имейте в виду, что атрибуты формы должны оставаться закрытыми и принадлежать базовому классу.

Добавьте следующие конкретные классы:

* `ShrubberyCreationForm`: Требуемые оценки: sign 145, exec 137.
Создайте файл `< target >_shrubbery` в рабочем каталоге и запишите в него ASCII-деревья.
* `RobotomyRequestForm`: Требуемые оценки: sign 72, exec 45
Издает некоторые звуки сверления. Затем сообщает, что `<target>` была успешно роботизирована в 50% случаев. В противном случае сообщает, что роботомия не удалась.
* `PresidentialPardonForm`: Required grades: sign 25, exec 5
Informs that `< target >` has been pardoned by Zaphod Beeblebrox.

Все они принимают в своем конструкторе только один параметр: цель формы. Например, «дом», если вы хотите посадить дома кустарник.

Теперь добавьте функцию-член `execute(Bureaucrat const & executor) const` в базовую форму и реализуйте функцию для выполнения действия формы для конкретных классов. Вы должны убедиться, что форма подписана и что уровень бюрократа, пытающегося заполнить форму, достаточно высок. В противном случае создайте соответствующее исключение.

Хотите ли вы проверить требования в каждом конкретном классе или в базовом классе (затем вызвать другую функцию для выполнения формы) зависит от вас. Тем не менее, один способ красивее, чем другой.

Наконец, добавьте функцию-член `executeForm (Form const & form)` в `Bureaucrat`. Он должен попытаться выполнить форму. В случае успеха напечатайте что-то вроде:

	<bureaucrat> executed <form>

Если нет, выведите явное сообщение об ошибке.

Внедрите и сдайте несколько тестов, чтобы убедиться, что все работает как положено.

## Глава VI ##

### Упражнение 03: At least this beats coffee-making ###

Название программы  |  At least this beats coffee-making
:------------------:|:---------------
Каталог сдачи		| ex03/
Файлы для сдачи		| Files from previous exercises + Intern.{h, hpp}, Intern.cpp
Запрещенные функции	| Нет

Поскольку заполнение форм достаточно раздражает, было бы жестоко просить наших бюрократов делать это целыми днями. К счастью, есть стажеры. В этом упражнении вам нужно реализовать класс Intern. У стажера нет ни имени, ни ранга, ни уникальных характеристик. Единственное, о чем заботятся бюрократы, это о том, чтобы они выполняли свою работу.

Однако у стажера есть одна важная возможность: функция `makeForm()`. Требуется две `строки`. Первое — это `name` формы, а второе — `target` формы. Он возвращает указатель на объект формы (имя которого передается в качестве параметра), цель которого будет инициализирована вторым параметром.

Он напечатает что-то вроде:

	Intern creates <form>

Если имя формы, переданное в качестве параметра, не существует, выведите явное сообщение об ошибке.

Вы должны избегать нечитаемых и уродливых решений, таких как использование леса if/elseif/else. Такие вещи не будут приняты в процессе оценки. Вы больше не в Piscine (бассейне). Как обычно, вы должны проверить, что все работает как положено.

Например, приведенный ниже код создает форму RobotomyRequestForm, нацеленную на «Бендера»:

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
