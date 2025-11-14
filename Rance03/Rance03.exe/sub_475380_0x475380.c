// 函数: sub_475380
// 地址: 0x475380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b9d60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_esi
int32_t var_5c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
float var_50 = 0.800000012f
long double result

if (ecx == 0)
label_47546a:
    
    if (data_75d534 == 0)
        result = fconvert.t(0.800000012f)
    else
        int32_t* var_60_4 = ecx
        int32_t* eax_8 = sub_6203f0()
        
        if (eax_8 == 0)
            result = fconvert.t(0.800000012f)
        else
            void* eax_9 = (**eax_8)(0x6dd7f4)
            
            if (eax_9 == 0)
                result = fconvert.t(0.800000012f)
            else
                int32_t esi_1 = *(eax_9 + 0x94)
                int32_t eax_13
                
                if (arg2 s< (*(eax_9 + 0x98) - esi_1) s>> 5)
                    eax_13 = *((arg2 << 5) + esi_1 + 0x1c)
                
                if (arg2 s>= (*(eax_9 + 0x98) - esi_1) s>> 5 || eax_13 == 0xffffffff)
                    var_50 = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0xbc))) * 0.00999999978f
                    result = fconvert.t(var_50)
                else
                    var_50 = _mm_cvtepi32_ps(zx.o(eax_13)) * 0.00999999978f
                    result = fconvert.t(var_50)
else
    char eax_7
    eax_7, ecx = (*(*ecx + 0x2c))(0x6dd66c)
    
    if (eax_7 == 0)
        goto label_47546a
    
    void* var_34
    sub_401f60(&var_34, 0x6dd654)
    int32_t var_c_1 = 0
    char var_4c
    sub_401f60(&var_4c, 0x6dd7d8)
    var_c_1.b = 1
    var_50 = sub_4756b0(arg1, &var_4c, arg2, &var_34, &var_50)
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result = fconvert.t(var_50)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
