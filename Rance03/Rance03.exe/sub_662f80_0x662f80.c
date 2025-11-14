// 函数: sub_662f80
// 地址: 0x662f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf97b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t i_2
int32_t eax_2 = __security_cookie ^ &i_2
int32_t __saved_edi
int32_t var_f8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_5 = (arg2 - arg3) s/ 0xc0
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x2aaaaaab, arg4 - arg3)
int32_t i_3 = i_5
int32_t i_6 = (arg4 - arg3) s/ 0xc0
i_2 = i_6
int32_t i_4 = i_6

if (i_5 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        int32_t eax_6
        int32_t edx_5
        edx_5:eax_6 = sx.q(i_7)
        i = mods.dp.d(edx_5:eax_6, i_3)
        result = divs.dp.d(edx_5:eax_6, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_4

if (i_4 s< i_6 && i_4 s> 0)
    result = i_5 * 0xc0
    int32_t result_1 = result
    void* ebx_3 = &arg3[i_4 * 0x30]
    int32_t* ecx_3 = arg3
    int32_t i_1
    
    do
        int32_t* esi = ebx_3 + result
        int32_t* edi_2 = ebx_3
        
        if (esi == arg4)
            esi = ecx_3
        
        do
            void var_d4
            sub_65b030(&var_d4, edi_2)
            int32_t var_4 = 0
            sub_65dc20(edi_2, esi)
            sub_65dc20(esi, &var_d4)
            int32_t var_4_1 = 0xffffffff
            struct dpparts::CListItem::VTable* const var_30_1 = &dpparts::CListItem::`vftable'
            char var_68
            int32_t var_54
            
            if (var_54 u>= 0x10)
                j__free(var_68.d)
            
            var_54 = 0xf
            int32_t var_58_1 = 0
            var_68 = 0
            int32_t var_6c
            int32_t var_80
            
            if (var_6c u>= 0x10)
                j__free(var_80)
            edi_2 = esi
            int32_t ecx_11 = (arg4 - esi) s/ 0xc0
            
            if (i_5 s>= ecx_11)
                result = result_1
                esi = &arg3[(i_5 - ecx_11) * 0x30]
            else
                result = result_1
                esi += result
        while (esi != ebx_3)
        
        ebx_3 -= 0xc0
        i_1 = i_2 - 1
        i_2 = i_1
        ecx_3 = arg3
    while (i_1 s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &i_2)
return result
