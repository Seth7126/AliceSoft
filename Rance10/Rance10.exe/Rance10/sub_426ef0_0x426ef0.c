// 函数: sub_426ef0
// 地址: 0x426ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7297e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_7 = (eax_3 - esi_1) s/ 0x18
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_4 = edx_3 s>> 2
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_21
            int32_t edx_8
            edx_8:eax_21 = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
            int32_t edx_9 = edx_8 s>> 2
            
            if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
                int32_t* eax_28 = *arg1
                
                if (eax_28 != 0)
                    sub_427270(eax_28, arg1[1])
                    void* esi_3 = *arg1
                    int32_t eax_29
                    int32_t edx_12
                    edx_12:eax_29 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_3)
                    int32_t edx_13 = edx_12 s>> 2
                    sub_403160(esi_3, (edx_13 u>> 0x1f) + edx_13, 0x18)
                
                int32_t eax_33
                int32_t edx_14
                edx_14:eax_33 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
                int32_t edx_15 = edx_14 s>> 2
                
                if (sub_4272a0(arg1, (edx_15 u>> 0x1f) + edx_15) != 0)
                    int32_t var_8_1 = 0
                    arg1[1] = sub_427400(*ebx, ebx[1], *arg1)
            else
                int32_t var_30_3 = 0
                int32_t eax_26 = eax_11 * 3
                void* esi_2 = esi_1 + (eax_26 << 3)
                void* eax_27
                int32_t ecx_13
                eax_27, ecx_13 = sub_427460(eax_26.b, esi_2, *ebx, *arg1)
                int32_t var_34_4 = 0
                int32_t var_38_1 = ecx_13
                arg1[1] = sub_427650(eax_27, ebx[1], esi_2, arg1[1])
        else
            void* eax_12 = *arg1
            int32_t var_30_1 = 0
            sub_427270(sub_427460(eax_12.b, ebx[1], esi_1, eax_12), arg1[1])
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 2
            arg1[1] = *arg1 + ((edx_7 u>> 0x1f) + edx_7) * 0x18
    else
        sub_426de0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
