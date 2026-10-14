#include <iostream>
#include <clocale>
#include "FoodProduct.h"
#include "RadioGood.h"
#include "ProductItem.h"
#include "Transistor.h"
#include "DairyProduct.h"


int mait() {
  std::setlocale(LC_ALL, "Uk_UA.UTF-8") ;

  std::cout<<"Демонстрація ієрархії окремих класів\n\n";

  //1
  std::cout << "[Базовий Товар]\n";
  ProductItem baseItem("Універсальна коробка");
  baseItem.showInfo();
  std::cout << "-------------------------------\n";

  //2
  std::cout << "[Радіотовари]\n";
  RadioGood radio("Антена підсилювальна", "Прийом сигналу");
  radio.showInfo();
  std::cout << "-----------------------------\n";

  //3
  std::cout << "[Транзистор]\n";
  Transistor trans("Біполярний елемент", "Посилення струму", "n-p-n", "BC547");
  trans.showInfo();
  std::cout << "------------------------\n";

  //4

  std::cout << "[Харчовий продукт]\n";
  FoodProduct bread("Хліб Житній", "Бакалія");
  bread.showInfo();
  std::cout << "---------------------------\n";

  //5

  std::cout << "[Молочний продукт]\n";
  DairyProduct milk("Молоко домашнє", "Молочний відділ", "Пастеризоване", "14.10.2026");
  milk.showInfo();
  std::cout << "------------------\n";

  std::cout << "[Тестування аксесорів для молока]\n";
  std::cout << "Стара назва: " << milk.getName() << "\n";
  milk.setName("Молоко Особливе 3.2%");
  std::cout << "Оновлена назва через геттер: " << milk.getName() << "\n";

return 0;
};
