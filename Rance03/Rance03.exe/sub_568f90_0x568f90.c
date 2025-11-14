// 函数: sub_568f90
// 地址: 0x568f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c5f60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t eax_3 = *ebx
    int32_t ecx = ebx[1]
    
    if (eax_3 != ecx)
        char* esi_1 = *arg1
        int32_t eax_8 = (ecx - eax_3) s/ 0x18
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, arg1[1] - esi_1)
        int32_t edx_4 = edx_3 s>> 2
        int32_t eax_12 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_8 u> eax_12)
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_1)
            int32_t edx_9 = edx_8 s>> 2
            char* eax_25
            
            if (eax_8 u> (edx_9 u>> 0x1f) + edx_9)
                if (esi_1 != 0)
                    sub_4107c0(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_27
                int32_t edx_12
                edx_12:eax_27 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 2
                int32_t ecx_18
                eax_25, ecx_18 = sub_43e720(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_25.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_9 = eax_8
                    int32_t var_34_5 = ecx_18
                    arg1[1] = sub_43f600(eax_25, ebx[1], *ebx, *arg1)
            else
                void** ecx_10 = *ebx
                int32_t eax_24 = eax_12 * 3
                void* esi_2 = &ecx_10[eax_24 * 2]
                int32_t ecx_11
                eax_25, ecx_11 = sub_569b10(eax_24, esi_2, ecx_10, *arg1)
                int32_t var_30_5 = eax_8
                int32_t var_34_3 = ecx_11
                arg1[1] = sub_43f600(eax_25, ebx[1], esi_2, arg1[1])
        else
            sub_4107c0(sub_569b10(eax_12, ebx[1], *ebx, esi_1), arg1[1])
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 2
            arg1[1] = *arg1 + ((edx_7 u>> 0x1f) + edx_7) * 0x18
    else
        sub_4107c0(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
