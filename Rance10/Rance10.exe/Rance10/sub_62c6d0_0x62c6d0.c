// 函数: sub_62c6d0
// 地址: 0x62c6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_RunAndWait@_StructuredTaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_80 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t var_14 = 0

if (esi != 0 && *esi == 0)
    struct std::codecvt_base::std::codecvt<wchar_t, char, struct _Mbstatet>::VTable** eax_3 =
        sub_6e810c(0x34)
    arg1 = eax_3
    int32_t var_8_1 = 0
    void* edx_1 = *(arg2 + 4)
    void* const ecx_2
    
    if (edx_1 != 0)
        ecx_2 = *(edx_1 + 0x18)
        
        if (ecx_2 == 0)
            ecx_2 = edx_1 + 0x1c
    else
        ecx_2 = &data_794c78
    
    void var_74
    sub_62c000(&var_74, ecx_2)
    eax_3[1] = 0
    *eax_3 = &std::codecvt<wchar_t, char, struct _Mbstatet>::`vftable'{for `std::codecvt_base'}
    void var_40
    int32_t* eax_4 = __Getcvt(&var_40)
    *(eax_3 + 8) = *eax_4
    *(eax_3 + 0x18) = *(eax_4 + 0x10)
    *(eax_3 + 0x28) = *(eax_4 + 0x20)
    eax_3[0xc] = eax_4[0xa]
    *esi = eax_3
    sub_62c1c0(&var_74)

fsbase->NtTib.ExceptionList = ExceptionList
return 2
