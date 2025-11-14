// 函数: sub_4b1fd0
// 地址: 0x4b1fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bd4c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_74
int32_t edi = arg1[1]
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t* var_54 = arg1
int32_t edx_3 = edx_2 s>> 2
int32_t eax_9
int32_t edx_4
edx_4:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - edi)
int32_t edx_5 = edx_4 s>> 2

if ((edx_5 u>> 0x1f) + edx_5 u>= 1)
    if ((edi - arg3) s/ 0x18 u>= 1)
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int32_t* eax_41 = sub_401ff0(&var_48, arg4, 0, 0xffffffff)
        int32_t var_8_4 = 5
        char* edx_22 = arg1[1]
        int32_t* var_78_11 = arg2
        void* esi_2 = &edx_22[0xffffffe8]
        char* ecx_25 = arg3
        arg1[1] = sub_410d50(eax_41, edx_22, esi_2, edx_22)
        
        if (ecx_25 != esi_2)
            void* edi_8 = esi_2 + 0x18
            
            do
                esi_2 -= 0x18
                edi_8 -= 0x18
                
                if (edi_8 != esi_2)
                    sub_401ff0(edi_8, esi_2, 0, 0xffffffff)
                    ecx_25 = arg3
            while (ecx_25 != esi_2)
        
        sub_4b2340(&var_48, &ecx_25[0x18], ecx_25, &var_48)
        
        if (var_34_1 u>= 0x10)
            j__free(var_48.d)
    else
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_401ff0(&var_30, arg4, 0, 0xffffffff)
        int32_t var_8_2 = 2
        int32_t* var_78_7 = arg2
        sub_410d50(&arg3[0x18], arg1[1], arg3, &arg3[0x18])
        var_8_2.b = 3
        int32_t eax_35
        int32_t edx_17
        edx_17:eax_35 = muls.dp.d(0x2aaaaaab, arg1[1] - arg3)
        int32_t* var_78_8 = arg2
        int32_t edx_18 = edx_17 s>> 2
        ___std_fs_copy_file@12(&var_30, 1 - ((edx_18 u>> 0x1f) + edx_18), arg1[1], &var_30)
        int32_t var_8_3 = 2
        arg1[1] += 0x18
        sub_4b2340(&var_30, arg1[1] - 0x18, arg3, &var_30)
        
        if (var_1c_1 u>= 0x10)
            j__free(var_30.d)
else
    int32_t eax_13
    int32_t edx_6
    edx_6:eax_13 = muls.dp.d(0x2aaaaaab, edi - *arg1)
    int32_t edx_7 = edx_6 s>> 2
    int32_t ecx_4 = (edx_7 u>> 0x1f) + edx_7
    
    if (0xaaaaaaa - ecx_4 u< 1)
        sub_69a551("vector<T> too long")
        noreturn
    
    int32_t eax_16 = sub_410800(arg1, ecx_4 + 1)
    char* eax_17 = sub_4108f0(eax_16)
    int32_t eax_18
    int32_t edx_8
    edx_8:eax_18 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
    int32_t var_8_1 = 0
    int32_t* var_78_2 = arg2
    int32_t edx_9 = edx_8 s>> 2
    char* var_60_1 = eax_17
    int32_t edi_4 = (edx_9 u>> 0x1f) + edx_9
    int32_t var_58_1 = 0
    int32_t var_50_1 = edi_4
    int32_t eax_19 = edi_4 * 3
    int32_t var_58_2 = 1
    int32_t* var_78_3 = arg2
    sub_410d50(___std_fs_copy_file@12(eax_19, 1, &eax_17[eax_19 << 3], arg4), arg3, *arg1, eax_17)
    int32_t var_58_3 = 2
    void* eax_23 = &eax_17[(edi_4 + 1) * 0x18]
    int32_t* var_78_4 = arg2
    sub_410d50(eax_23, arg1[1], arg3, eax_23)
    int32_t* edi_5 = *arg1
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 = muls.dp.d(0x2aaaaaab, arg1[1] - edi_5)
    int32_t edx_13 = edx_12 s>> 2
    
    if (edi_5 != 0)
        sub_4107c0(edi_5, arg1[1])
        j__free(*arg1)
    
    *arg1 = eax_17
    arg1[2] = &eax_17[eax_16 * 0x18]
    arg1[1] = &eax_17[((edx_13 u>> 0x1f) + 1 + edx_13) * 0x18]

*arg2 = *arg1 + ((edx_3 u>> 0x1f) + edx_3) * 0x18
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &__saved_ebp)
return arg2
