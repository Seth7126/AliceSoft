// 函数: sub_6089c0
// 地址: 0x6089c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742a18
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
        int32_t var_28_3 = ecx
        result = sub_608c90(arg1)
    
    edi = arg1[1]
    arg2 = edi
    void* var_14_2 = edi
    int32_t var_8_2 = 2
    
    if (edi != 0)
        *edi = *ebx
        sub_4275f0(edi + 4, ebx + 4)
        var_8_2.b = 3
        result = sub_608d90(edi + 0x10, ebx + 0x10)
else
    int32_t ebx_1 = ebx - result
    
    if (ecx == arg1[2])
        int32_t var_28_1 = ecx
        sub_608c90(arg1)
    
    result = *arg1
    edi = arg1[1]
    arg2 = edi
    void* var_14_1 = edi
    ebx = &result[ebx_1 s/ 0x1c * 7]
    int32_t var_8_1 = 0
    
    if (edi != 0)
        *edi = *ebx
        sub_4275f0(edi + 4, ebx + 4)
        var_8_1.b = 1
        result = sub_608d90(edi + 0x10, ebx + 0x10)
arg1[1] = &arg1[1][7]
fsbase->NtTib.ExceptionList = ExceptionList
return result
