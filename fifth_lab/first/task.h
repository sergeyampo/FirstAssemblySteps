//
// Created by sergeyampo on 10.12.2020.
//

#ifndef LAB_FIRST_FIFTH_LAB_FIRST_TASK_H_
#define LAB_FIRST_FIFTH_LAB_FIRST_TASK_H_
#include <type_traits>


template<typename T, typename = std::enable_if_t<std::is_floating_point<T>::value>>
T compute(const T&, const T&);

#include "task.cpp"


#endif //LAB_FIRST_FIFTH_LAB_FIRST_TASK_H_
