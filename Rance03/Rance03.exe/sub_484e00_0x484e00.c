// 函数: sub_484e00
// 地址: 0x484e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ba940
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
        void* esi_1 = *arg1
        int32_t eax_7 = (ecx - eax_3) s/ 0xc0
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x2aaaaaab, arg1[1] - esi_1)
        int32_t edx_4 = edx_3 s>> 5
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_1)
            int32_t edx_9 = edx_8 s>> 5
            void* eax_25
            
            if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
                if (esi_1 != 0)
                    sub_481350(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_27
                int32_t edx_12
                edx_12:eax_27 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 5
                int32_t ecx_18
                eax_25, ecx_18 = sub_484d10(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_25.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_7
                    int32_t var_34_6 = ecx_18
                    arg1[1] = sub_481720(eax_25, ebx[1], *ebx, *arg1)
            else
                void* ecx_10 = *ebx
                int32_t var_30_3 = eax_7
                void* esi_4 = eax_11 * 0xc0 + ecx_10
                int32_t ecx_11
                eax_25, ecx_11 = sub_485040(eax_11, esi_4, ecx_10, *arg1)
                int32_t var_30_4 = eax_7
                int32_t var_34_4 = ecx_11
                arg1[1] = sub_481720(eax_25, ebx[1], esi_4, arg1[1])
        else
            int32_t var_30_1 = eax_7
            sub_481350(sub_485040(eax_11, ebx[1], *ebx, esi_1), arg1[1])
            int32_t eax_13
            int32_t edx_6
            edx_6:eax_13 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 5
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0xc0 + *arg1
    else
        sub_481310(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
