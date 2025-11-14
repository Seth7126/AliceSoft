// 函数: sub_5b8960
// 地址: 0x5b8960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c91d8
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
        int32_t var_24_3 = ecx
        result = sub_5b8d50(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_10_2 = edi_3
    int32_t var_4_1 = 2
    
    if (edi_3 != 0)
        *edi_3 = *ebx
        sub_453d80(edi_3 + 4, ebx + 4)
        var_4_1.b = 3
        result = sub_5b9690(edi_3 + 0x10, ebx + 0x10)
else
    int32_t ebx_1 = ebx - result
    
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_5b8d50(arg1)
    
    result = *arg1
    edi_3 = arg1[1]
    arg2 = edi_3
    void* var_10_1 = edi_3
    ebx = &result[ebx_1 s/ 0x1c * 7]
    int32_t var_4 = 0
    
    if (edi_3 != 0)
        *edi_3 = *ebx
        sub_453d80(edi_3 + 4, ebx + 4)
        var_4.b = 1
        result = sub_5b9690(edi_3 + 0x10, ebx + 0x10)
arg1[1] = &arg1[1][7]
fsbase->NtTib.ExceptionList = ExceptionList
return result
