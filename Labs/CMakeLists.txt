cmake_minimum_required(VERSION 3.20)
project(Labs C)

set(CMAKE_C_STANDARD 11)

add_executable(Labs
        introdution/src/function.c
        introdution/headers/function.h
        sapi_sales/headers/models/user.h
        sapi_sales/src/models/user.c
        sapi_sales/src/models/product.c
        sapi_sales/headers/models/product.h
        sapi_sales/src/manager/lab2.c
        sapi_sales/headers/manager/lab2.h
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/src/main.c shared/src/errors.c
        shared/headers/errors.h shared/headers/constans.h
        shared/src/messages.c shared/headers/messages.h sapi_sales/src/array/product_array.c sapi_sales/headers/array/product_array.h sapi_sales/src/array/user_array.c sapi_sales/headers/array/user_array.h sapi_sales/src/manager/lab4.c sapi_sales/headers/manager/lab4.h sapi_sales/src/queue/user_queue.c sapi_sales/headers/queue/user_queue.h sapi_sales/src/manager/lab8.c sapi_sales/headers/manager/lab8.h sapi_sales/src/stack/stack.c sapi_sales/headers/stack/stack.h sapi_sales/src/list/user_list.c sapi_sales/headers/list/user_list.h sapi_sales/src/UserBST/user_bst.c sapi_sales/headers/UserBST/user_bst.h)
include_directories(Labs introdution/headers
        sapi_sales/headers/models
        sapi_sales/headers/manager
        shared/headers
        sapi_sales/headers/array
        )