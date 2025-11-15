// 函数: sub_6f9793
// 地址: 0x6f9793
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    *(arg1 + 0x14) += 1
    
    if (*(arg1 + 0x14) == 1)
        int32_t esi_1 = *(**(arg1 + 0x9c) + 0x20)
        j_sub_4033e0()
        esi_1()
    
    return 

int32_t eax_2 = *(arg1 + 0x14)

if (eax_2 == 0)
    void var_10
    std::bad_function_call::bad_function_call(&var_10)
    sub_70021b(&var_10, 0x7ddd98)
    noreturn

*(arg1 + 0x14) = eax_2 - 1

if (eax_2 != 1)
    return 

int32_t* eax = Concurrency::details::InternalContextBase::GetAndResetOversubscribedVProc(arg1 - 4, 
    *(arg1 + 0xa0))

if (eax != 0)
    sub_6f7dde(eax)
