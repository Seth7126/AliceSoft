// 函数: sub_4eb4c0
// 地址: 0x4eb4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_60
int32_t edi = arg1[1]
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t* var_3c = arg1
int32_t edx_3 = edx_2 s>> 2
int32_t eax_9
int32_t edx_4
edx_4:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - edi)
int32_t edx_5 = edx_4 s>> 2
int32_t var_40

if ((edx_5 u>> 0x1f) + edx_5 u>= 1)
    int32_t var_1c_1 = 0xf
    char var_30
    char* ecx_23 = &var_30
    int32_t var_20_1 = 0
    var_30 = 0
    
    if ((edi - arg3) s/ 0x18 u>= 1)
        int32_t* eax_49
        int32_t ecx_29
        eax_49, ecx_29 = sub_403590(ecx_23, arg4, 0, 0xffffffff)
        int32_t var_64_8 = ecx_29
        int32_t var_8_4 = 5
        int32_t* edi_5 = arg1[1]
        int32_t var_68_6 = 0.d
        int32_t var_6c_6 = ecx_29
        char* eax_50 = sub_417fb0(eax_49, edi_5, &edi_5[-6], edi_5)
        int32_t var_74_2 = 0.d
        arg1[1] = eax_50
        sub_4eb870(eax_50, &edi_5[-6], arg3, edi_5)
        sub_4eb840(&var_30, &arg3[6], arg3, &var_30)
    else
        sub_403590(ecx_23, arg4, 0, 0xffffffff)
        int32_t var_8_2 = 2
        int32_t* var_64_5 = arg3
        int32_t var_68_4 = 0.d
        int32_t* var_6c_4 = arg3
        sub_417fb0(&arg3[6], arg1[1], arg3, &arg3[6])
        var_8_2.b = 3
        void* ecx_26 = arg1[1] - arg3
        int32_t var_64_6 = var_40
        void* var_68_5 = ecx_26
        sub_4eb920(&var_30, 1 - ecx_26 s/ 0x18, arg1[1], &var_30)
        int32_t var_8_3 = 2
        arg1[1] += 0x18
        sub_4eb840(&var_30, arg1[1] - 0x18, arg3, &var_30)
    
    sub_403320(&var_30)
else
    int32_t esi_1 = *arg1
    int32_t ecx_4 = (edi - esi_1) s/ 0x18
    
    if (0xaaaaaaa - ecx_4 u< 1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edi_2 = ecx_4 + 1
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_1)
    int32_t ecx_7 = 0
    int32_t edx_9 = edx_8 s>> 2
    int32_t esi_4 = (edx_9 u>> 0x1f) + edx_9
    uint32_t eax_17 = esi_4 u>> 1
    
    if (0xaaaaaaa - eax_17 u>= esi_4)
        ecx_7 = eax_17 + esi_4
    
    if (ecx_7 u>= edi_2)
        edi_2 = ecx_7
    
    char var_34
    var_34.d = edi_2
    char* eax_19 = sub_417580(edi_2)
    int32_t eax_20
    int32_t edx_11
    edx_11:eax_20 = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
    int32_t var_8_1 = 0
    int32_t* var_64_1 = arg2
    int32_t edx_12 = edx_11 s>> 2
    char* var_48_1 = eax_19
    int32_t eax_23 = (edx_12 u>> 0x1f) + edx_12
    int32_t var_44_1 = 0
    int32_t var_3c_1 = eax_23
    int32_t esi_6 = eax_23 * 0x18
    char* ecx_10 = &eax_19[esi_6]
    char* var_68 = ecx_10
    struct _EXCEPTION_REGISTRATION_RECORD** eax_24
    int32_t ecx_11
    eax_24, ecx_11 = sub_4eb920(eax_23, 1, ecx_10, arg4)
    int32_t var_44_2 = 1
    int32_t var_64_2 = ecx_11
    int32_t var_68_1 = 0
    int32_t var_6c_1 = ecx_11
    int32_t ecx_13 = sub_417fb0(eax_24, arg3, *arg1, eax_19)
    void* eax_26 = &eax_19[0x18 + esi_6]
    int32_t var_44_3 = 2
    int32_t var_64_3 = ecx_13
    int32_t var_68_2 = 0
    int32_t var_6c_2 = ecx_13
    sub_417fb0(eax_26, arg1[1], arg3, eax_26)
    void* esi_7 = *arg1
    int32_t eax_27
    int32_t edx_15
    edx_15:eax_27 = muls.dp.d(0x2aaaaaab, arg1[1] - esi_7)
    int32_t edx_16 = edx_15 s>> 2
    int32_t ecx_19 = (edx_16 u>> 0x1f) + edx_16
    
    if (esi_7 != 0)
        int32_t var_64_4 = var_40
        int32_t var_68_3 = ecx_19
        sub_417d50(esi_7, arg1[1])
        void* esi_8 = *arg1
        int32_t eax_28
        int32_t edx_18
        edx_18:eax_28 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_8)
        int32_t edx_19 = edx_18 s>> 2
        sub_403160(esi_8, (edx_19 u>> 0x1f) + edx_19, 0x18)
    
    arg1[2] = &eax_19[var_34.d * 0x18]
    arg1[1] = &eax_19[(ecx_19 + 1) * 0x18]
    *arg1 = eax_19
*arg2 = *arg1 + ((edx_3 u>> 0x1f) + edx_3) * 0x18
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
