// 函数: sub_5a4580
// 地址: 0x5a4580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_358 = 0xffffffff
int32_t (* var_35c)(void* arg1) = sub_73ebc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_354
int32_t eax_2 = __security_cookie ^ &var_354
int32_t var_398 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_364 = &var_398
int32_t ebx = arg1[1]
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x4da637d, arg3 - *arg1)
int32_t* var_370 = arg1
int32_t edx_3 = edx_2 s>> 4
int32_t eax_9
int32_t edx_4
edx_4:eax_9 = muls.dp.d(0x4da637d, arg1[2] - ebx)
int32_t edx_5 = edx_4 s>> 4

if ((edx_5 u>> 0x1f) + edx_5 u>= 1)
    int32_t* ecx_20 = &var_354
    int32_t* var_39c_8
    void* eax_52
    int32_t* ecx_25
    void* edx_25
    
    if ((ebx - arg3) s/ 0x34c u>= 1)
        int32_t* eax_53
        int32_t ecx_26
        eax_53, ecx_26 = sub_5a4b90(ecx_20, arg4)
        int32_t var_358_4 = 5
        int32_t* ebx_5 = arg1[1]
        int32_t var_39c_9 = ecx_26
        int32_t var_3a0_7 = 0.d
        int32_t* esi_8 = &ebx_5[-0xd3]
        int32_t var_3a4_6 = ecx_26
        arg1[1] = sub_5a8000(eax_53, ebx_5, esi_8, ebx_5)
        eax_52 = arg3
        
        if (eax_52 != esi_8)
            void* ebx_6 = ebx_5 - esi_8
            
            do
                esi_8 -= 0x34c
                sub_5672c0(esi_8 + ebx_6, esi_8)
            while (esi_8 != eax_52)
            
            eax_52 = arg3
        
        var_39c_8 = &var_354
        edx_25 = eax_52 + 0x34c
        ecx_25 = eax_52
    else
        sub_5a4b90(ecx_20, arg4)
        int32_t var_358_2 = 2
        void* var_39c_6 = arg3
        int32_t var_3a0_5 = 0.d
        void* var_3a4_4 = arg3
        sub_5a8000(arg3 + 0x34c, arg1[1], arg3, arg3 + 0x34c)
        var_358_2.b = 3
        void* ecx_23 = arg1[1] - arg3
        int32_t var_378
        int32_t var_39c_7 = var_378
        void* var_3a0_6 = ecx_23
        sub_5a7610(&var_354, 1 - ecx_23 s/ 0x34c, arg1[1], &var_354)
        int32_t var_358_3 = 2
        arg1[1] += 0x34c
        eax_52 = &var_354
        ecx_25 = arg3
        edx_25 = arg1[1] - 0x34c
        var_39c_8 = &var_354
    
    sub_5a6770(eax_52, edx_25, ecx_25, var_39c_8)
    sub_59b2c0(&var_354)
else
    int32_t esi_1 = *arg1
    int32_t ecx_4 = (ebx - esi_1) s/ 0x34c
    
    if (0x4da637 - ecx_4 u< 1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = muls.dp.d(0x4da637d, arg1[2] - esi_1)
    int32_t ecx_8 = 0
    int32_t edx_9 = edx_8 s>> 4
    int32_t esi_4 = (edx_9 u>> 0x1f) + edx_9
    uint32_t eax_17 = esi_4 u>> 1
    
    if (0x4da637 - eax_17 u>= esi_4)
        ecx_8 = eax_17 + esi_4
    
    int32_t eax_19 = ecx_4 + 1
    
    if (ecx_8 u>= eax_19)
        eax_19 = ecx_8
    
    char var_36c
    var_36c.d = eax_19
    int32_t* eax_20 = sub_5a5640(eax_19)
    int32_t eax_21
    int32_t edx_10
    edx_10:eax_21 = muls.dp.d(0x4da637d, arg3 - *arg1)
    int32_t var_358_1 = 0
    int32_t* var_39c_1 = arg2
    int32_t edx_11 = edx_10 s>> 4
    int32_t* var_374_1 = eax_20
    int32_t eax_24 = (edx_11 u>> 0x1f) + edx_11
    int32_t var_380_1 = 0
    void* esi_5 = eax_24 * 0x34c
    int32_t var_370_1 = eax_24
    int32_t* ecx_11 = esi_5 + eax_20
    int32_t* var_3a0 = ecx_11
    struct _EXCEPTION_REGISTRATION_RECORD** eax_25
    int32_t ecx_12
    eax_25, ecx_12 = sub_5a7610(eax_24, 1, ecx_11, arg4)
    int32_t var_380_2 = 1
    int32_t var_39c_2 = ecx_12
    int32_t var_3a0_1 = 0
    int32_t var_3a4_1 = ecx_12
    int32_t ecx_14 = sub_5a8000(eax_25, arg3, *arg1, eax_20)
    void* eax_27 = &eax_20[0xd3] + esi_5
    int32_t var_380_3 = 2
    int32_t var_39c_3 = ecx_14
    int32_t var_3a0_2 = 0
    int32_t var_3a4_2 = ecx_14
    sub_5a8000(eax_27, arg1[1], arg3, eax_27)
    void* esi_6 = *arg1
    int32_t eax_28
    int32_t edx_14
    edx_14:eax_28 = muls.dp.d(0x4da637d, arg1[1] - esi_6)
    int32_t edx_15 = edx_14 s>> 4
    
    if (esi_6 != 0)
        sub_5a4a60(esi_6, arg1[1])
        void* esi_7 = *arg1
        int32_t eax_32
        int32_t edx_16
        edx_16:eax_32 = muls.dp.d(0x4da637d, arg1[2] - esi_7)
        int32_t edx_17 = edx_16 s>> 4
        sub_403160(esi_7, (edx_17 u>> 0x1f) + edx_17, 0x34c)
    
    arg1[2] = eax_19 * 0x34c + eax_20
    arg1[1] = ((edx_15 u>> 0x1f) + edx_15 + 1) * 0x34c + eax_20
    *arg1 = eax_20

*arg2 = ((edx_3 u>> 0x1f) + edx_3) * 0x34c + *arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_354)
return arg2
