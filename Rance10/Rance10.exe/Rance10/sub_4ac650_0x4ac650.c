// 函数: sub_4ac650
// 地址: 0x4ac650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7319a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34

if (arg1 != arg2)
    int32_t* esi_1 = *arg2
    int32_t eax_4 = arg2[1]
    
    if (esi_1 != eax_4)
        int32_t* edi_1 = *arg1
        void* ecx_4 = arg1[1] - edi_1
        int32_t eax_9 = (eax_4 - esi_1) s/ 0xc
        int32_t eax_13 = ecx_4 s/ 0xc
        
        if (eax_9 u> eax_13)
            void* ecx_11 = arg1[2] - edi_1
            int32_t eax_24
            
            if (eax_9 u> ecx_11 s/ 0xc)
                if (edi_1 != 0)
                    int32_t* var_38_6 = arg2
                    void* var_3c_4 = ecx_11
                    sub_4ac600(edi_1, arg1[1])
                    void* esi_2 = *arg1
                    int32_t eax_26
                    int32_t edx_15
                    edx_15:eax_26 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_2)
                    int32_t edx_16 = edx_15 s>> 1
                    sub_403160(esi_2, (edx_16 u>> 0x1f) + edx_16, 0xc)
                
                int32_t eax_30
                int32_t edx_17
                edx_17:eax_30 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
                int32_t edx_18 = edx_17 s>> 1
                int32_t ecx_22
                eax_24, ecx_22 = sub_4ac840(arg1, (edx_18 u>> 0x1f) + edx_18)
                
                if (eax_24.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_38_8 = ecx_22
                    int32_t var_3c_5 = 0
                    int32_t var_40_2 = ecx_22
                    arg1[1] = sub_4aca70(eax_24, arg2[1], *arg2, *arg1)
            else
                eax_24 = eax_13 * 3
                int32_t* ecx_12 = &esi_1[eax_24]
                
                while (esi_1 != ecx_12)
                    eax_24 = sub_4274a0(edi_1, esi_1)
                    esi_1 = &esi_1[3]
                    edi_1 = &edi_1[3]
                
                int32_t* var_38_5 = ecx_12
                int32_t var_3c_3 = 0
                int32_t* var_40_1 = ecx_12
                arg1[1] = sub_4aca70(eax_24, arg2[1], ecx_12, arg1[1])
        else
            while (esi_1 != eax_4)
                ecx_4 = sub_4274a0(edi_1, esi_1)
                esi_1 = &esi_1[3]
                edi_1 = &edi_1[3]
            
            int32_t* var_38_3 = arg2
            void* var_3c_2 = ecx_4
            sub_4ac600(edi_1, arg1[1])
            int32_t eax_14
            int32_t edx_8
            edx_8:eax_14 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
            int32_t edx_9 = edx_8 s>> 1
            arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0xc
    else
        int32_t* var_38_1 = arg2
        int32_t* var_3c_1 = arg1
        sub_4ac600(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
