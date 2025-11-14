// 函数: sub_539940
// 地址: 0x539940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c4040
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
        int32_t eax_7 = (ecx - eax_3) s/ 0x4c
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x6bca1af3, arg1[1] - esi_1)
        int32_t edx_4 = edx_3 s>> 5
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = muls.dp.d(0x6bca1af3, arg1[2] - esi_1)
            int32_t edx_9 = edx_8 s>> 5
            int32_t eax_22 = (edx_9 u>> 0x1f) + edx_9
            void* eax_23
            
            if (eax_7 u> eax_22)
                if (esi_1 != 0)
                    sub_539b60(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_25
                int32_t edx_12
                edx_12:eax_25 = muls.dp.d(0x6bca1af3, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 5
                int32_t ecx_18
                eax_23, ecx_18 = sub_539b00(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_23.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_7
                    int32_t var_34_6 = ecx_18
                    arg1[1] = sub_539c70(eax_23, ebx[1], *ebx, *arg1)
            else
                void* ecx_10 = *ebx
                int32_t var_30_3 = eax_7
                void* esi_3 = eax_11 * 0x4c + ecx_10
                int32_t ecx_11
                eax_23, ecx_11 = sub_539be0(eax_22, esi_3, ecx_10, *arg1)
                int32_t var_30_4 = eax_7
                int32_t var_34_4 = ecx_11
                arg1[1] = sub_539c70(eax_23, ebx[1], esi_3, arg1[1])
        else
            int32_t var_30_1 = eax_7
            sub_539b60(sub_539be0(eax_11, ebx[1], *ebx, esi_1), arg1[1])
            int32_t eax_13
            int32_t edx_6
            edx_6:eax_13 = muls.dp.d(0x6bca1af3, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 5
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0x4c + *arg1
    else
        sub_539ac0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
