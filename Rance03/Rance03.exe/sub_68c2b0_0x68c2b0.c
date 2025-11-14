// 函数: sub_68c2b0
// 地址: 0x68c2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d16f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 0
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_4 = 0
int32_t var_3c_1 = 1
int32_t eax_5 = GetScrollPos(*(arg1 + 0x24c), *(arg1 + 0x258))
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x78787879, arg3[1] - *arg3)
int32_t edx_1 = edx s>> 5
int32_t edi_2 = (edx_1 u>> 0x1f) + edx_1
*(arg1 + 0x34)
int32_t esi_1 = divs.dp.d(sx.q(arg4), *(arg1 + 0x34)) + 1

if (esi_1 + eax_5 u> edi_2)
    esi_1 = edi_2 - eax_5

var_4c = 0
int32_t* result

if (esi_1 == 0)
    result = arg2
else
    int32_t edi_3 = eax_5
    int32_t var_40_1 = edi_3
    int32_t ebx_4 = eax_5 * 0x44
    
    while (edi_2 u> edi_3)
        void* edx_5 = *arg3 + ebx_4
        int32_t eax_11 = sub_68c490(arg1, edx_5)
        int32_t eax_15
        
        if (eax_11.b != 0)
            int32_t var_4_1 = 1
            int32_t var_2c
            sub_412d60(arg2, sub_689920(edx_5, &var_2c))
            var_4_1.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            eax_15 = var_4c
        else
            int32_t* var_64_2 = arg2
            sub_68cec0(eax_11, arg3[1], edx_5 + 0x44, edx_5)
            void* edi_4 = arg3[1]
            
            for (int32_t* i = edi_4 - 0x44; i != edi_4; i = &i[0x11])
                (**i)(0)
            
            arg3[1] -= 0x44
            int32_t eax_13
            int32_t edx_7
            edx_7:eax_13 = muls.dp.d(0x78787879, arg3[1] - *arg3)
            edi_3 = var_40_1 - 1
            int32_t edx_8 = edx_7 s>> 5
            eax_15 = var_4c - 1
            esi_1 = (edx_8 u>> 0x1f) + edx_8 - eax_5
            ebx_4 -= 0x44
        
        edi_3 += 1
        ebx_4 += 0x44
        var_4c = eax_15 + 1
        var_40_1 = edi_3
        
        if (eax_15 + 1 u>= esi_1)
            break
    
    result = arg2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
