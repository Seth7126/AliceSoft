// 函数: sub_4270b0
// 地址: 0x4270b0
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

void* edi_3

if (ebx u>= ecx || result u> ebx)
    if (ecx == arg1[2])
        int32_t var_28_2 = ecx
        result = sub_4271e0(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_14_2 = edi_3
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
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_14_1 = edi_3
    ebx = &result[((edx_2 u>> 0x1f) + edx_2) * 6]
    int32_t var_8_1 = 0

if (edi_3 != 0)
    *edi_3 = &advengine::CValueSyntax::`vftable'
    result.b = *(ebx + 4)
    *(edi_3 + 4) = result.b
    sub_4275f0(edi_3 + 8, ebx + 8)
    result = *(ebx + 0x14)
    *(edi_3 + 0x14) = result

arg1[1] = &arg1[1][6]
fsbase->NtTib.ExceptionList = ExceptionList
return result
