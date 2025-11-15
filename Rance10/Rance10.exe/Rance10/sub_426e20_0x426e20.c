// 函数: sub_426e20
// 地址: 0x426e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
void* ebx = arg2

if (ebx u< ecx)
    result = *arg1

void* edi

if (ebx u>= ecx || result u> ebx)
    if (ecx == arg1[2])
        int32_t var_28_2 = ecx
        result = sub_4271e0(arg1)
    
    edi = arg1[1]
    arg2 = edi
    void* var_14_2 = edi
    int32_t var_8_2 = 1
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x2aaaaaab, ebx - result)
    int32_t edx_2 = edx_1 s>> 2
    
    if (ecx == arg1[2])
        int32_t var_28_1 = ecx
        sub_4271e0(arg1)
    
    result = *arg1
    edi = arg1[1]
    arg2 = edi
    void* var_14_1 = edi
    ebx = &result[((edx_2 u>> 0x1f) + edx_2) * 6]
    int32_t var_8_1 = 0

if (edi != 0)
    *edi = &advengine::CValueSyntax::`vftable'
    result.b = *(ebx + 4)
    *(edi + 4) = result.b
    sub_4275f0(edi + 8, ebx + 8)
    result = *(ebx + 0x14)
    *(edi + 0x14) = result

arg1[1] = &arg1[1][6]
fsbase->NtTib.ExceptionList = ExceptionList
return result
