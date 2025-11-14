// 函数: sub_4e1650
// 地址: 0x4e1650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c0248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_1 = arg1[0x3e] - arg1[0x3f]
int32_t var_38
int32_t* eax_5 = &var_38
var_38 = edx_1
int32_t var_3c = 0

if (edx_1 s<= 0)
    eax_5 = &var_3c

int32_t ebx
ebx.b = *eax_5 != 0
int32_t* result = sub_4a26a0(arg1[0x80], arg2)
char ecx_1

if (result.b == 0 || arg1[0x3c] == 0)
    ecx_1 = 0
else
    ecx_1 = 1

void* edx_2 = arg1[0x24]

if (*(edx_2 + 0x8c) != ecx_1)
    *(edx_2 + 0x8c) = ecx_1
    *(edx_2 + 0x70) = 1

if (result.b == 0 || arg1[0x3d] == 0)
    ecx_1 = 0
else
    ecx_1 = 1

void* edx_3 = arg1[0x25]

if (*(edx_3 + 0x8c) != ecx_1)
    *(edx_3 + 0x8c) = ecx_1
    *(edx_3 + 0x70) = 1

if (ebx.b == 0 || result.b == 0)
    ecx_1 = 0
else
    ecx_1 = 1

void* edx_4 = arg1[0x26]

if (*(edx_4 + 0x8c) != ecx_1)
    *(edx_4 + 0x8c) = ecx_1
    *(edx_4 + 0x70) = 1

void* ecx_2 = arg1[0x23]

if (*(ecx_2 + 0x8c) != result.b)
    *(ecx_2 + 0x8c) = result.b
    *(ecx_2 + 0x70) = 1

if (result.b != 0)
    sub_4e1cc0(arg1)
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_103162322ddfe5395845b53a6a0d414c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const var_6c = &std::_Func_impl<struct std::_Callable_obj<class <lambda_103162322ddfe5395845b53a6a0d414c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_68_1 = arg1
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<struct std::_Callable_obj<class <lambda_103162322ddfe5395845b53a6a0d414c>,0>,class std::allocator<class std::_Func_class<void,class partsengine::CGUIComponent*> >,void,class partsengine::CGUIComponent*>::VTable
        * const* var_5c_1 = &var_6c
    int32_t var_c_1 = 0xffffffff
    sub_47eb70(&arg1[0xe], var_6c)
    int32_t var_34
    char* eax_6 = sub_4a3390(arg1[0x80], &var_34, 3)
    int32_t var_c_2 = 1
    void* edi_1 = arg1[0x24]
    
    if (sub_4058a0(*(edi_1 + 0x480) + 0x48, eax_6) == 0)
        char* ecx_9 = *(edi_1 + 0x480) + 0x48
        
        if (ecx_9 != eax_6)
            sub_401ff0(ecx_9, eax_6, 0, 0xffffffff)
        
        *(edi_1 + 0x70) = 1
    
    int32_t var_c_3 = 0xffffffff
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    char* eax_8 = sub_4a3390(arg1[0x80], &var_34, 3)
    int32_t var_c_4 = 2
    void* edi_2 = arg1[0x25]
    char* ecx_13
    result, ecx_13 = sub_4058a0(*(edi_2 + 0x480) + 0x48, eax_8)
    
    if (result.b == 0)
        ecx_13 = *(edi_2 + 0x480) + 0x48
        
        if (ecx_13 != eax_8)
            result, ecx_13 = sub_401ff0(ecx_13, eax_8, 0, 0xffffffff)
        
        *(edi_2 + 0x70) = 1
    
    int32_t var_c_5 = 0xffffffff
    
    if (var_20 u>= 0x10)
        result, ecx_13 = j__free(var_34)
    
    int32_t edx_7 = arg1[0x40]
    float xmm0_1 = arg1[0x2c]
    ecx_13.b = arg1[0x2b] == edx_7
    float temp1_1 = arg1[0x41]
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        result.b = 0
    else
        result.b = 1
    
    if (ecx_13.b == 0 || result.b == 0)
        int32_t* eax_9 = &var_3c
        int32_t ecx_16 = arg1[0x3e] - arg1[0x3f]
        var_3c = ecx_16
        int32_t var_58_7 = 0
        
        if (ecx_16 s<= 0)
            eax_9 = &var_38
        
        var_38 = 0
        sub_485ce0(&arg1[2], edx_7, *eax_9, var_58_7)
        arg1[0x2b] = arg1[0x40]
        result = arg1[0x41]
        arg1[0x2c] = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
