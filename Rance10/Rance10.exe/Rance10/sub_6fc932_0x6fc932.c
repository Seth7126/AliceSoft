// 函数: sub_6fc932
// 地址: 0x6fc932
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1

if (Concurrency::details::WorkQueue::IsEmpty(arg1) != 0)
    return nullptr

int32_t* eax_2 = arg1[0x12]
void* ebx_1 = nullptr
int32_t* var_c_1 = eax_2
void* edi_1 = nullptr
char eax_4

if (eax_2 != 0 && eax_2[0x1c] s> 0)
    int32_t esi_1 = *(*eax_2 + 0x10)
    j_sub_4033e0()
    eax_4 = esi_1()

if (eax_2 == 0 || eax_2[0x1c] s<= 0 || eax_4 != 0)
    void* eax_1 = sub_6fc826(arg1, arg2)
    
    if (eax_1 != 0)
        return eax_1
    
    int32_t var_1c_3 = 0
    edi_1 = Concurrency::details::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::UnlockedSteal(
        &arg1[0x13], arg2)
    
    if (edi_1 != 0)
        void* ecx_6 = arg1[0x12]
        
        if (ecx_6 == 0 || *(*(edi_1 + 8) + 0xc) != ecx_6)
            Concurrency::details::_UnrealizedChore::_SetDetached(edi_1, 1)
        else
            sub_6f3e66(ecx_6)
            Concurrency::details::_UnrealizedChore::_SetDetached(edi_1, 0)
else
    if (arg1[0x18].b != 0)
        int32_t var_1c_1 = 1
        edi_1 = Concurrency::details::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::UnlockedSteal(
            &arg1[0x13], arg2)
    
    if (arg1[0x18].b != 0 && edi_1 != 0)
        Concurrency::details::_UnrealizedChore::_SetDetached(edi_1, 1)
    else
        void* eax_6 = sub_6f09b1()
        
        if (eax_6 != 0)
            ebx_1 = eax_6 - 4
        
        *(ebx_1 + 0xb3) |= 2

return edi_1
