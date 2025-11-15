// 函数: sub_416df0
// 地址: 0x416df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728360
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_20 = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_7 = (eax_3 - esi_1) s/ 0x28
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x66666667, arg1[1] - *arg1)
        int32_t edx_4 = edx_3 s>> 4
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_22
            int32_t edx_8
            edx_8:eax_22 = muls.dp.d(0x66666667, arg1[2] - *arg1)
            int32_t edx_9 = edx_8 s>> 4
            
            if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
                void* eax_29 = *arg1
                
                if (eax_29 != 0)
                    sub_40ccd0(eax_29, arg1[1])
                    void* esi_4 = *arg1
                    int32_t eax_30
                    int32_t edx_12
                    edx_12:eax_30 = muls.dp.d(0x66666667, arg1[2] - esi_4)
                    int32_t edx_13 = edx_12 s>> 4
                    sub_403160(esi_4, (edx_13 u>> 0x1f) + edx_13, 0x28)
                
                int32_t eax_34
                int32_t edx_14
                edx_14:eax_34 = muls.dp.d(0x66666667, ebx[1] - *ebx)
                int32_t edx_15 = edx_14 s>> 4
                
                if (sub_417360(arg1, (edx_15 u>> 0x1f) + edx_15) != 0)
                    int32_t var_8_1 = 0
                    arg1[1] = sub_417a60(*ebx, ebx[1], *arg1)
            else
                int32_t eax_27 = eax_11 * 5
                void* esi_3 = &esi_1[eax_27 * 2]
                int32_t* eax_28
                int32_t ecx_14
                eax_28, ecx_14 = sub_417a30(eax_27, esi_3, *ebx, *arg1)
                int32_t var_38_1 = 0
                int32_t var_3c_1 = ecx_14
                arg1[1] = sub_417f10(eax_28, ebx[1], esi_3, arg1[1])
        else
            int32_t* eax_12 = *arg1
            int32_t* esi_2 = sub_417a30(eax_12, ebx[1], esi_1, eax_12)
            int32_t eax_14 = arg1[1]
            
            if (esi_2 != eax_14)
                do
                    sub_40ae10(esi_2)
                    esi_2 = &esi_2[0xa]
                while (esi_2 != eax_14)
                
                ebx = arg2
            
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = muls.dp.d(0x66666667, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 4
            arg1[1] = *arg1 + ((edx_7 u>> 0x1f) + edx_7) * 0x28
    else
        sub_4173c0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
