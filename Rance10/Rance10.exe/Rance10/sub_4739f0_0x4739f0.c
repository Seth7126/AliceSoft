// 函数: sub_4739f0
// 地址: 0x4739f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dd20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_20 = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_7 = (eax_3 - esi_1) s/ 0x38
        int32_t eax_11 = (arg1[1] - *arg1) s/ 0x38
        
        if (eax_7 u> eax_11)
            void* eax_27
            
            if (eax_7 u> (arg1[2] - *arg1) s/ 0x38)
                int32_t* eax_29 = *arg1
                
                if (eax_29 != 0)
                    sub_467940(eax_29, arg1[1])
                    void* esi_4 = *arg1
                    sub_403160(esi_4, (arg1[2] - esi_4) s/ 0x38, 0x38)
                
                int32_t ecx_21 = ebx[1] - *ebx
                int32_t eax_34
                int32_t edx_19
                edx_19:eax_34 = muls.dp.d(0x92492493, ecx_21)
                *arg1 = 0
                arg1[1] = 0
                int32_t edx_21 = (edx_19 + ecx_21) s>> 5
                arg1[2] = 0
                int32_t esi_7 = ecx_21 s/ 0x38
                
                if (edx_21 u>> 0x1f != neg.d(edx_21))
                    if (esi_7 u> 0x4924924)
                        sub_6d0927("vector<T> too long")
                        noreturn
                    
                    void* eax_35 = sub_467970(esi_7)
                    *arg1 = eax_35
                    arg1[1] = eax_35
                    int32_t ecx_23 = esi_7 * 7
                    int32_t var_8_1 = 0
                    int32_t var_34_5 = ecx_23
                    int32_t var_38_6 = 0
                    eax_27 = *arg1 + (ecx_23 << 3)
                    arg1[2] = eax_27
                    int32_t var_3c_3 = ecx_23
                    arg1[1] = sub_469260(eax_27, ebx[1], *ebx, *arg1)
            else
                int32_t var_34_2 = 0
                int32_t eax_26 = eax_11 * 7
                void* esi_3 = esi_1 + (eax_26 << 3)
                int32_t ecx_14
                eax_27, ecx_14 = sub_474900(eax_26, esi_3, *ebx, *arg1)
                int32_t var_38_3 = 0
                int32_t var_3c_1 = ecx_14
                arg1[1] = sub_469260(eax_27, ebx[1], esi_3, arg1[1])
        else
            void* eax_12 = *arg1
            int32_t var_34_1 = 0
            void* esi_2 = sub_474900(eax_12, ebx[1], esi_1, eax_12)
            int32_t eax_14 = arg1[1]
            
            if (esi_2 != eax_14)
                do
                    sub_408940(esi_2)
                    esi_2 += 0x38
                while (esi_2 != eax_14)
                
                ebx = arg2
            
            arg1[1] = *arg1 + (ebx[1] - *ebx) s/ 0x38 * 0x38
    else
        sub_46d1a0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
