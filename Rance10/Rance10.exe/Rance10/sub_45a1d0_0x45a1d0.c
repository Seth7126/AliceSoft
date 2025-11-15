// 函数: sub_45a1d0
// 地址: 0x45a1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bbd0
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
        arg2 = (eax_3 - esi_1) s/ 0x2c
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = muls.dp.d(0x2e8ba2e9, arg1[1] - *arg1)
        int32_t edx_4 = edx_3 s>> 3
        int32_t eax_14 = (edx_4 u>> 0x1f) + edx_4
        
        if (arg2 u> eax_14)
            int32_t* esi_2 = *arg1
            int32_t eax_22
            int32_t edx_8
            edx_8:eax_22 = muls.dp.d(0x2e8ba2e9, arg1[2] - esi_2)
            int32_t edx_9 = edx_8 s>> 3
            
            if (arg2 u> (edx_9 u>> 0x1f) + edx_9)
                if (esi_2 != 0)
                    sub_459670(esi_2, arg1[1])
                    void* esi_5 = *arg1
                    int32_t eax_28
                    int32_t edx_12
                    edx_12:eax_28 = muls.dp.d(0x2e8ba2e9, arg1[2] - esi_5)
                    int32_t edx_13 = edx_12 s>> 3
                    sub_403160(esi_5, (edx_13 u>> 0x1f) + edx_13, 0x2c)
                
                int32_t eax_32
                int32_t edx_14
                edx_14:eax_32 = muls.dp.d(0x2e8ba2e9, ebx[1] - *ebx)
                int32_t edx_15 = edx_14 s>> 3
                
                if (sub_4595b0(arg1, (edx_15 u>> 0x1f) + edx_15) != 0)
                    int32_t var_8_1 = 0
                    arg1[1] = sub_45a550(*ebx, ebx[1], *arg1)
            else
                void* ecx_12 = *ebx
                void* eax_26 = *arg1
                void* esi_4 = eax_14 * 0x2c + ecx_12
                void* eax_27
                int32_t ecx_13
                eax_27, ecx_13 = sub_45a520(eax_26, esi_4, ecx_12, eax_26)
                int32_t var_34_2 = 0
                int32_t var_38_1 = ecx_13
                arg1[1] = sub_459730(eax_27, ebx[1], esi_4, arg1[1])
        else
            void* eax_15 = *arg1
            sub_459670(sub_45a520(eax_15, ebx[1], esi_1, eax_15), arg1[1])
            int32_t eax_17
            int32_t edx_6
            edx_6:eax_17 = muls.dp.d(0x2e8ba2e9, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 3
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0x2c + *arg1
    else
        int32_t ebx_1 = arg1[1]
        
        for (int32_t* i = *arg1; i != ebx_1; i = &i[0xb])
            (*(*i + 0x10))(0)
        
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
