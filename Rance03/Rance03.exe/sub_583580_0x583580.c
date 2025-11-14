// 函数: sub_583580
// 地址: 0x583580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c7440
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
void* edi_1 = arg4 - arg3
int32_t eax_3
void* edx
edx:eax_3 = muls.dp.d(0xae4c415d, edi_1)
int32_t edx_2 = (edx + edi_1) s>> 7
int32_t eax_6 = edi_1 s/ 0xbc

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t eax_10 = (arg1[2] - arg1[1]) s/ 0xbc
    
    if (eax_10 u< eax_6)
        int32_t ecx_5 = (arg1[1] - *arg1) s/ 0xbc
        
        if (0x15c9882 - ecx_5 u< eax_6)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t eax_14 = sub_57f660(arg1, ecx_5 + eax_6)
        struct sealengine::CPolyFace::VTable** eax_15 = sub_57f8b0(eax_14)
        int32_t var_8_1 = 0
        int32_t var_34_3 = arg2
        struct sealengine::CPolyFace::VTable** var_20 = eax_15
        struct sealengine::CPolyFace::VTable** var_18_1 = eax_15
        struct sealengine::CPolyFace::VTable** eax_16
        int32_t ecx_8
        eax_16, ecx_8 = sub_580b30(eax_15, arg2, *arg1, eax_15)
        struct sealengine::CPolyFace::VTable** var_18_2 = eax_16
        int32_t var_34_4 = arg2
        int32_t var_38_1 = ecx_8
        struct sealengine::CPolyFace::VTable** eax_17 = sub_580b30(eax_16, arg4, arg3, eax_16)
        struct sealengine::CPolyFace::VTable** var_18_3 = eax_17
        int32_t var_34_5 = arg2
        sub_580b30(eax_17, arg1[1], arg2, eax_17)
        int32_t var_8_2 = 0xffffffff
        int32_t ecx_12 = arg1[1] - *arg1
        int32_t* eax_22 = *arg1
        
        if (eax_22 != 0)
            sub_57f880(eax_22, arg1[1])
            j__free(*arg1)
        
        *arg1 = eax_15
        arg1[2] = eax_14 * 0xbc + eax_15
        void* eax_26 = (eax_6 + ecx_12 s/ 0xbc) * 0xbc + eax_15
        arg1[1] = eax_26
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_26
    
    int32_t var_34_8 = arg2
    void* var_38_3 = arg3
    sub_580b30(eax_10, arg4, arg3, arg1[1])
    int32_t edx_16 = arg1[1]
    int32_t esi_2 = eax_6 * 0xbc
    eax_6 = esi_2 + edx_16
    
    if (arg2 != edx_16 && edx_16 != eax_6)
        eax_6 = sub_583760(eax_6, edx_16, arg2, eax_6)
    
    arg1[1] += esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
