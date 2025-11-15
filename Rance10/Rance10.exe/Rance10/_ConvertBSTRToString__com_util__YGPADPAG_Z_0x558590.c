// 函数: ?ConvertBSTRToString@_com_util@@YGPADPAG@Z
// 地址: 0x558590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73afa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* edx = *(*edi + 4)
int32_t* esi

if (edx != 0)
    int32_t ecx = arg3
    
    if (*(ecx + 0x14) u>= 0x10)
        ecx = *ecx
    
    int32_t* eax_5
    eax_5, arg1 = (*(*edx + 0x2c))(ecx)
    esi = eax_5
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_18 = &common::CEXArrayReader::`vftable'
int32_t* var_14 = esi
int32_t var_8_1 = 0
int32_t xmm0
int32_t xmm1

if (esi != 0)
    int32_t* var_2c_2 = arg1
    arg1 = (*(*esi + 0x10))(0, 0)
    xmm1 = fconvert.s(arg2)
    xmm0 = (zx.o(0)).d
else
    xmm0 = (zx.o(0)).d
    xmm1 = (zx.o(0)).d

*(edi[1] + (arg4 << 3) + 8) = xmm1

if (esi != 0)
    int32_t* var_2c_3 = arg1
    (*(*esi + 0x10))(1, 0)
    arg3 = fconvert.s(unimplemented  {fstp dword [ebp+0x8], st0})
    unimplemented  {fstp dword [ebp+0x8], st0}
    xmm0 = arg3

int32_t result = edi[1]
*(result + (arg4 << 3) + 0xc) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return result
