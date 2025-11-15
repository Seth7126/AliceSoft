// 函数: sub_41aca0
// 地址: 0x41aca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::CDPLog::`vftable'{for `common::SuicideRefCounter<class IOutputLog>'}
int32_t i = 0
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x38e38e39, arg1[3] - arg1[2])
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    void* esi_1 = nullptr
    void* var_14_1 = nullptr
    int32_t edx_5
    
    do
        int32_t eax_9 = &arg1[2]->vFunc_6
        int32_t* esi_2 = esi_1 + eax_9
        int32_t* ecx
        
        if (esi_2[5] u< 0x10)
            ecx = esi_2
        else
            ecx = *esi_2
        
        int32_t eax_10 = sub_406ac0(eax_9, 0x75ccf2, ecx, 0)
        
        if (eax_10 != 0 || esi_2[4] u> eax_10)
            if (esi_2[5] u>= 0x10)
                esi_2 = *esi_2
            
            sub_41b230(arg1, i, esi_2)
        
        i += 1
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = muls.dp.d(0x38e38e39, arg1[3] - arg1[2])
        esi_1 = var_14_1 + 0x48
        edx_5 = edx_4 s>> 4
        var_14_1 = esi_1
    while (i s< (edx_5 u>> 0x1f) + edx_5)

int32_t result = sub_41bbd0(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
