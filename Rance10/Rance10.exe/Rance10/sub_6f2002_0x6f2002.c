// 函数: sub_6f2002
// 地址: 0x6f2002
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x180)
*(arg1 + 0x180) += 1

if (edi == 0)
    if (*(arg1 + 0x18c) s<= 0)
        *(arg1 + 0x18c)
        *(arg1 + 0x18c) = 1
    else
        void* eax_1 = sub_6f09b1()
        int32_t eax_2
        
        if (eax_1 != 0 && *(eax_1 + 0x4c) == 0)
            eax_2 = sub_4866a0(eax_1)
        
        if (eax_1 == 0 || *(eax_1 + 0x4c) != 0 || eax_2 != arg1)
            void var_10
            Concurrency::invalid_operation::invalid_operation(&var_10)
            sub_70021b(&var_10, 0x7dd648)
            noreturn
        
        Concurrency::details::SchedulerBase::Resurrect(arg1)

return edi + 1
