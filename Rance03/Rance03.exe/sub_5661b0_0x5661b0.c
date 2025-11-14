// 函数: sub_5661b0
// 地址: 0x5661b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4e4 = 0xffffffff
int32_t (* var_4e8)(void* arg1) = sub_6c5b43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CEmitter::VTable* var_4e0
int32_t eax_2 = __security_cookie ^ &var_4e0
int32_t var_51c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4f0 = &var_51c
int32_t ebx = arg1[1]
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = muls.dp.d(0x1a6d01a7, arg3 - *arg1)
int32_t* var_4fc = arg1
int32_t edx_3 = edx_2 s>> 6
int32_t eax_9
int32_t edx_4
edx_4:eax_9 = muls.dp.d(0x1a6d01a7, arg1[2] - ebx)
int32_t edx_5 = edx_4 s>> 6

if ((edx_5 u>> 0x1f) + edx_5 u>= 1)
    struct sealengine::CEmitter::VTable** ecx_20
    
    if ((ebx - arg3) s/ 0x26c u>= 1)
        struct sealengine::CEmitter::VTable** eax_43 = sub_566540(&var_4e0, arg4)
        int32_t var_4e4_5 = 5
        struct sealengine::CEmitter::VTable** ebx_7 = arg1[1]
        int32_t* var_520_11 = arg2
        void* esi_2 = &ebx_7[-0x9b]
        void* ecx_23 = arg3
        arg1[1] = sub_569b40(eax_43, ebx_7, esi_2, ebx_7)
        
        if (ecx_23 != esi_2)
            void* ebx_8 = ebx_7 - esi_2
            
            do
                esi_2 -= 0x26c
                sub_568b50(ebx_8 + esi_2, esi_2)
                ecx_23 = arg3
            while (ecx_23 != esi_2)
        
        sub_567f40(&var_4e0, ecx_23 + 0x26c, ecx_23, &var_4e0)
        ecx_20 = &var_4e0
    else
        struct sealengine::CEmitter::VTable* var_274
        sub_566540(&var_274, arg4)
        int32_t var_4e4_3 = 2
        int32_t* var_520_8 = arg2
        sub_569b40(arg3 + 0x26c, arg1[1], arg3, arg3 + 0x26c)
        var_4e4_3.b = 3
        int32_t eax_37
        int32_t edx_17
        edx_17:eax_37 = muls.dp.d(0x1a6d01a7, arg1[1] - arg3)
        int32_t* var_520_9 = arg2
        int32_t edx_18 = edx_17 s>> 6
        sub_568ab0(&var_274, 1 - ((edx_18 u>> 0x1f) + edx_18), arg1[1], &var_274)
        int32_t var_4e4_4 = 2
        arg1[1] += 0x26c
        sub_567f40(&var_274, arg1[1] - 0x26c, arg3, &var_274)
        ecx_20 = &var_274
    
    sub_5368b0(ecx_20)
else
    int32_t eax_13
    int32_t edx_6
    edx_6:eax_13 = muls.dp.d(0x1a6d01a7, ebx - *arg1)
    int32_t edx_7 = edx_6 s>> 6
    int32_t ecx_4 = (edx_7 u>> 0x1f) + edx_7
    
    if (0x69b406 - ecx_4 u< 1)
        sub_69a551("vector<T> too long")
        noreturn
    
    int32_t eax_16 = sub_566e00(arg1, ecx_4 + 1)
    struct sealengine::CEmitter::VTable** eax_17 = sub_566f60(eax_16)
    int32_t eax_18
    int32_t edx_8
    edx_8:eax_18 = muls.dp.d(0x1a6d01a7, arg3 - *arg1)
    int32_t var_4e4_1 = 0
    int32_t* var_520_2 = arg2
    int32_t edx_9 = edx_8 s>> 6
    struct sealengine::CEmitter::VTable** var_508_1 = eax_17
    int32_t ebx_4 = (edx_9 u>> 0x1f) + edx_9
    int32_t var_500_1 = 0
    int32_t var_4f8_1 = ebx_4
    int32_t var_500_2 = 1
    int32_t* var_520_3 = arg2
    sub_569b40(sub_568ab0(eax_18, 1, ebx_4 * 0x26c + eax_17, arg4), arg3, *arg1, eax_17)
    int32_t var_500_3 = 2
    int32_t* var_520_4 = arg2
    void* eax_22 = (ebx_4 + 1) * 0x26c + eax_17
    sub_569b40(eax_22, arg1[1], arg3, eax_22)
    int32_t var_4e4_2 = 0xffffffff
    int32_t* ebx_5 = *arg1
    int32_t eax_23
    int32_t edx_12
    edx_12:eax_23 = muls.dp.d(0x1a6d01a7, arg1[1] - ebx_5)
    int32_t edx_13 = edx_12 s>> 6
    
    if (ebx_5 != 0)
        sub_5660c0(ebx_5, arg1[1])
        j__free(*arg1)
    
    *arg1 = eax_17
    arg1[2] = eax_16 * 0x26c + eax_17
    arg1[1] = ((edx_13 u>> 0x1f) + 1 + edx_13) * 0x26c + eax_17

*arg2 = ((edx_3 u>> 0x1f) + edx_3) * 0x26c + *arg1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4e0)
return arg2
