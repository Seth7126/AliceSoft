// 函数: sub_5a42e0
// 地址: 0x5a42e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73eb90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_7 = (eax_3 - esi_1) s/ 0x34c
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x4da637d, arg1[1] - *arg1)
        int32_t edx_4 = edx_3 s>> 4
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            void* esi_2 = *arg1
            int32_t eax_21
            int32_t edx_8
            edx_8:eax_21 = muls.dp.d(0x4da637d, arg1[2] - esi_2)
            int32_t edx_9 = edx_8 s>> 4
            
            if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
                if (esi_2 != 0)
                    sub_5a4a60(esi_2, arg1[1])
                    void* esi_5 = *arg1
                    int32_t eax_27
                    int32_t edx_12
                    edx_12:eax_27 = muls.dp.d(0x4da637d, arg1[2] - esi_5)
                    int32_t edx_13 = edx_12 s>> 4
                    sub_403160(esi_5, (edx_13 u>> 0x1f) + edx_13, 0x34c)
                
                int32_t eax_31
                int32_t edx_14
                edx_14:eax_31 = muls.dp.d(0x4da637d, ebx[1] - *ebx)
                int32_t edx_15 = edx_14 s>> 4
                
                if (sub_5a4a90(arg1, (edx_15 u>> 0x1f) + edx_15) != 0)
                    int32_t var_8_1 = 0
                    arg1[1] = sub_5a6740(*ebx, ebx[1], *arg1)
            else
                int32_t* ecx_11 = *ebx
                int32_t* eax_25 = *arg1
                void* esi_4 = eax_11 * 0x34c + ecx_11
                int32_t* eax_26
                int32_t ecx_12
                eax_26, ecx_12 = sub_5a6710(eax_25, esi_4, ecx_11, eax_25)
                int32_t var_34_2 = 0
                int32_t var_38_1 = ecx_12
                arg1[1] = sub_5a8000(eax_26, ebx[1], esi_4, arg1[1])
        else
            int32_t* eax_12 = *arg1
            sub_5a4a60(sub_5a6710(eax_12, ebx[1], esi_1, eax_12), arg1[1])
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x4da637d, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 4
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0x34c + *arg1
    else
        sub_5a4170(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
