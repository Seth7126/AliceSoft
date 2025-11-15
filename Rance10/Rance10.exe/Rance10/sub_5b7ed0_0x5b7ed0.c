// 函数: sub_5b7ed0
// 地址: 0x5b7ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg5 != 0)
    struct common::CEXTreeReader::VTable* const var_5c_1 = &common::CEXTreeReader::`vftable'
    int32_t* var_58_1 = arg5
    int32_t var_8_1 = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, 0x769eb0, 0xe)
    var_8_1.b = 1
    char* ecx_1 = &var_48
    
    if (var_34_1 u>= 0x10)
        ecx_1 = var_48.d
    
    int32_t* eax_4
    int32_t ecx_3
    eax_4, ecx_3 = (*(*arg5 + 0x2c))(ecx_1)
    struct common::CEXArrayReader::VTable* const var_64_1 = &common::CEXArrayReader::`vftable'
    int32_t* var_60_1 = eax_4
    var_8_1.b = 3
    
    if (var_34_1 u>= 0x10)
        ecx_3 = sub_403160(var_48.d, var_34_1 + 1, 1)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    int32_t xmm0_1
    float xmm1_1[0x4]
    int64_t xmm2_1
    
    if (eax_4 != 0)
        int32_t var_7c_2 = ecx_3
        int32_t var_7c_3 = (*(*eax_4 + 0x10))(2, 0)
        int32_t var_7c_4 = (*(*eax_4 + 0x10))(1, 0)
        (*(*eax_4 + 0x10))(0, 0)
        xmm2_1 = fconvert.s(arg3)
        xmm0_1 = fconvert.s(arg2)
        xmm1_1 = fconvert.s(arg4)
    else
        xmm0_1 = (zx.o(0)).d
        xmm2_1 = (zx.o(0)).q
        xmm1_1 = zx.o(0)
    
    *(arg1 + 0x24) = _mm_unpacklo_ps(xmm1_1, xmm2_1)
    *(arg1 + 0x2c) = xmm0_1
    int32_t var_1c_2 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x769ef4, 8)
    var_8_1.b = 4
    char* ecx_10 = &var_30
    
    if (var_1c_2 u>= 0x10)
        ecx_10 = var_30.d
    
    char* var_7c_5 = ecx_10
    (*(*arg5 + 0xc))(ecx_10, 0x3f800000)
    float var_4c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
    unimplemented  {fstp dword [ebp-0x48], st0}
    var_8_1.b = 3
    *(arg1 + 0x30) = var_4c_2
    
    if (var_1c_2 u>= 0x10)
        sub_403160(var_30.d, var_1c_2 + 1, 1)
    
    int32_t var_1c_3 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    sub_403490(&var_30, 0x769ee4, 0xc)
    var_8_1.b = 5
    char* ecx_13 = &var_30
    
    if (var_1c_3 u>= 0x10)
        ecx_13 = var_30.d
    
    char* var_7c_6 = ecx_13
    (*(*arg5 + 0xc))(ecx_13, 0x3dcccccd)
    float var_4c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
    unimplemented  {fstp dword [ebp-0x48], st0}
    var_8_1.b = 3
    *(arg1 + 0x34) = var_4c_3
    
    if (var_1c_3 u>= 0x10)
        sub_403160(var_30.d, var_1c_3 + 1, 1)
    
    sub_5b8110(arg1, arg5)
    sub_5b8cb0(arg1, arg5)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
