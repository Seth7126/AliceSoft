// 函数: sub_57ee40
// 地址: 0x57ee40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5db2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
void* ebx = arg2

if (ebx u< ecx)
    result = *arg1

void* edi_3

if (ebx u>= ecx || result u> ebx)
    if (ecx == arg1[2])
        int32_t var_24_2 = ecx
        result = sub_57f190(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_10_2 = edi_3
    int32_t var_4_1 = 1
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x66666667, ebx - result)
    int32_t edx_2 = edx_1 s>> 4
    
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_57f190(arg1)
    
    result = *arg1
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_10_1 = edi_3
    ebx = &result[((edx_2 u>> 0x1f) + edx_2) * 0xa]
    int32_t var_4 = 0

if (edi_3 != 0)
    *edi_3 = &sealengine::CPolyTexture::`vftable'
    *(edi_3 + 0x18) = 0xf
    *(edi_3 + 0x14) = 0
    *(edi_3 + 4) = 0
    sub_401ff0(edi_3 + 4, ebx + 4, 0, 0xffffffff)
    *(edi_3 + 0x1c) = *(ebx + 0x1c)
    *(edi_3 + 0x20) = *(ebx + 0x20)
    result = *(ebx + 0x24)
    *(edi_3 + 0x24) = result

arg1[1] = &arg1[1][0xa]
fsbase->NtTib.ExceptionList = ExceptionList
return result
