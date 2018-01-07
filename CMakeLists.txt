cmake_minimum_required(VERSION 3.6)
project(untitled5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp zad1/Client.h zad1/Film.h zad1/zad1.h zad2/zad2.h zad3/zad3.h zad3/okrag.h zad3/punkt.h zad3/odcinek.h zad4/zad4.h zad5/zad5.h zad5/Produkt.cpp zad5/Produkt.h zad5/Zamowienie.cpp zad5/Zamowienie.h zad6/zad6.h zad6/Pracownik.cpp zad6/Pracownik.h zad6/Kierownik.cpp zad6/Kierownik.h zad6/Informatyk.cpp zad6/Informatyk.h prog/4/4.1.h prog/4/4.2.h prog/4/4.3.h prog/4/4.4.h prog/4/4.5.h prog/4/4.6.h prog/4/4.7.h prog/4/4.8.h prog/4/4.h zad7/zad7.h zad7/Zwierzeta.cpp zad7/Zwierzeta.h zad7/kot.cpp zad7/kot.h zad7/pies.cpp zad7/pies.h prog/4b/4b.1.h prog/4b/4b.2.h prog/4b/4b.h prog/4c/4c.h prog/4c/4c.1.h prog/4c/4c.2.h zad8/zad8.h zad8/Node.cpp zad8/Node.h zad8/Node1D.cpp zad8/Node1D.h zad8/Node2D.cpp zad8/Node2D.h zad8/Node3D.cpp zad8/Node3D.h zad8/Element.h prog/5/5.h prog/5/5.5.h zad9/zad9.h zad9/Osoba.cpp zad9/Osoba.h zad9/Prowadzacy.cpp zad9/Prowadzacy.h zad9/Student.cpp zad9/Student.h zad9/View.cpp zad9/View.h zad9/File.cpp zad9/File.h prog/6/6.h zad10/zad10.h zad10/Student.10.cpp zad10/Student.10.h zad10/Error.cpp zad10/Error.h)
add_executable(untitled5 ${SOURCE_FILES})