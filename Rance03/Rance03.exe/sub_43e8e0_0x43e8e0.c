// 函数: sub_43e8e0
// 地址: 0x43e8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6618
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** i_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    void* ebx_1 = nullptr
    int32_t ebp_1 = 0
    void* esi_2 = *(*(arg1 + 4) + 4)
    int32_t edx_1 = sub_43e1b0(esi_2 + 8)
    void* ecx_1 = nullptr
    int32_t eax_4 = 0
    
    if (edx_1 s>= 2)
        int32_t ecx_3 = *(esi_2 + 0xc) + 0x28
        int32_t i_2 = ((edx_1 - 2) u>> 1) + 1
        eax_4 = i_2 * 2
        int32_t i
        
        do
            ebx_1 += *(ecx_3 - 0x18)
            ecx_3 += 0x30
            ebp_1 += *(ecx_3 - 0x30)
            i = i_2
            i_2 -= 1
        while (i != 1)
        ecx_1 = nullptr
    
    if (eax_4 s< edx_1)
        ecx_1 = *(*(esi_2 + 0xc) + eax_4 * 0x18 + 0x10)
    
    i_1 = ebx_1 + ebp_1
    
    if (ecx_1 != neg.d(i_1))
        struct anteater::CADVLog::VTable* var_28 = &anteater::CADVLog::`vftable'
        void var_24
        sub_43e6d0(&var_24, 1)
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        void* esi_3 = *(arg1 + 4)
        int32_t* eax_6 = sub_43f3f0(esi_3, *(esi_3 + 4), &var_28)
        int32_t eax_7 = *(arg1 + 8)
        
        if (0x71c71c6 - eax_7 u< 1)
            sub_69a551("list<T> too long")
            noreturn
        
        *(arg1 + 8) = eax_7 + 1
        *(esi_3 + 4) = eax_6
        int32_t var_4_1 = 0xffffffff
        *eax_6[1] = eax_6
        sub_43e140(&var_28)
        
        for (i_1 = *(arg1 + 8); i_1 s> *(arg1 + 0xc); i_1 = *(arg1 + 8))
            int32_t* esi_4 = **(arg1 + 4)
            *esi_4[1] = *esi_4
            *(*esi_4 + 4) = esi_4[1]
            *(arg1 + 8) -= 1
            (*esi_4[2])(0)
            j__free(esi_4)

fsbase->NtTib.ExceptionList = ExceptionList
return i_1
