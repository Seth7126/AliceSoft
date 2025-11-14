// 函数: sub_68c6c0
// 地址: 0x68c6c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6d1720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x78787879, arg4 - arg3)
int32_t edx_3 = edx_2 s>> 5
int32_t ebx_2 = (arg4 - arg3) s/ 0x44

if (edx_3 u>> 0x1f != neg.d(edx_3))
    int32_t eax_4
    int32_t edx_6
    edx_6:eax_4 = muls.dp.d(0x78787879, arg1[2] - arg1[1])
    int32_t edx_7 = edx_6 s>> 5
    int32_t eax_7 = (edx_7 u>> 0x1f) + edx_7
    struct dpsound::CSoundData::VTable** edx_8 = arg1[1]
    
    if (eax_7 u< ebx_2)
        int32_t eax_8
        int32_t edx_10
        edx_10:eax_8 = muls.dp.d(0x78787879, edx_8 - *arg1)
        int32_t edx_11 = edx_10 s>> 5
        int32_t ecx_3 = (edx_11 u>> 0x1f) + edx_11
        
        if (0x3c3c3c3 - ecx_3 u< ebx_2)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t eax_11 = sub_579440(arg1, ecx_3 + ebx_2)
        struct dpsound::CSoundData::VTable** eax_12 = sub_68a6a0(eax_11)
        int32_t var_8_1 = 0
        void* var_34_3 = arg2
        struct dpsound::CSoundData::VTable** var_20 = eax_12
        struct dpsound::CSoundData::VTable** var_18 = eax_12
        struct dpsound::CSoundData::VTable** eax_13
        int32_t ecx_6
        eax_13, ecx_6 = sub_68a790(eax_12, arg2, *arg1, eax_12)
        struct dpsound::CSoundData::VTable** var_18_1 = eax_13
        void* var_34_4 = arg2
        int32_t var_38_1 = ecx_6
        struct dpsound::CSoundData::VTable** eax_14 = sub_68a790(eax_13, arg4, arg3, eax_13)
        struct dpsound::CSoundData::VTable** var_18_2 = eax_14
        void* var_34_5 = arg2
        sub_68a790(eax_14, arg1[1], arg2, eax_14)
        int32_t var_8_2 = 0xffffffff
        int32_t eax_15
        int32_t edx_15
        edx_15:eax_15 = muls.dp.d(0x78787879, arg1[1] - *arg1)
        int32_t edx_16 = edx_15 s>> 5
        int32_t* eax_19 = *arg1
        
        if (eax_19 != 0)
            sub_68a4e0(eax_19, arg1[1])
            j__free(*arg1)
        
        *arg1 = eax_12
        arg1[2] = &eax_12[eax_11 * 0x11]
        void* eax_27 = &eax_12[(ebx_2 + (edx_16 u>> 0x1f) + edx_16) * 0x11]
        arg1[1] = eax_27
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_27
    
    void* var_34_8 = arg2
    void* var_38_3 = arg3
    sub_68a790(eax_7, arg4, arg3, edx_8)
    int32_t edx_18 = arg1[1]
    int32_t esi_5 = ebx_2 * 0x44
    eax_3 = esi_5 + edx_18
    
    if (arg2 != edx_18 && edx_18 != eax_3)
        eax_3 = sub_68eb90(eax_3, edx_18, arg2, eax_3)
    
    arg1[1] += esi_5

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
