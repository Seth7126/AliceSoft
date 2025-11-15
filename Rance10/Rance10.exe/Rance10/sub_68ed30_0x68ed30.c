// 函数: sub_68ed30
// 地址: 0x68ed30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747889
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
char* var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t* var_78 = &var_54
int32_t* arg_4
bool eax_3 = sub_682290(arg1 + 0x10, arg_4)
char* ebx = var_54
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (eax_3 == 0)
label_68ee80:
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76f44c, 0x2c)
    var_8_1.b = 1
    var_8_1.b = 2
    char var_44
    sub_6c52e0(sub_4351a0(&arg_4, &var_2c, &var_44, &arg_4))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = nullptr
else
    eax_3 = ebx == var_50
    
    if (eax_3 != 0)
        goto label_68ee80
    
    void var_38
    void var_20
    int32_t ecx_2
    int32_t* edx
    
    if (arg2 == eax_3)
        edx = sub_690ea0(&var_38)
        ecx_2 = 2
    else
        edx = sub_690e20(&var_20)
        ecx_2 = 1
    
    void* edi_1 = *edx
    int32_t var_5c_1 = edx[1]
    int32_t eax_7 = edx[2]
    *edx = 0
    edx[1] = 0
    void* var_60 = edi_1
    edx[2] = 0
    int32_t var_8_2 = 4
    
    if ((ecx_2.b & 2) != 0)
        sub_4043e0(&var_38)
        ecx_2 &= 0xfffffffd
    
    var_8_2.b = 5
    
    if ((ecx_2.b & 1) != 0)
        sub_4043e0(&var_20)
    
    result = sub_6867b0(*(arg1 + 4))
    
    if (result == 0)
        result = nullptr
    else
        int32_t* var_78_1 = &var_60
        
        if (sub_694b30(result, ebx, var_50 - ebx) != 0)
            edi_1 = var_60
        else
            (*result)->vFunc_1(eax_2)
            edi_1 = var_60
            result = nullptr
    
    if (edi_1 != 0)
        sub_403160(edi_1, (eax_7 - edi_1) s>> 2, 4)

if (ebx != 0)
    sub_403160(ebx, var_4c - ebx, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
