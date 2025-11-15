// 函数: sub_4d4be0
// 地址: 0x4d4be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733ff2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
void* ebx = arg2

if (ebx u< ecx)
    result = *arg1

int128_t* edi_3

if (ebx u>= ecx || result u> ebx)
    if (ecx == arg1[2])
        int32_t var_2c_3 = ecx
        result = sub_4d4dc0(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    int128_t* var_14_1 = edi_3
    int32_t var_8_2 = 2
    
    if (edi_3 != 0)
        sub_526a90(edi_3, ebx)
        var_8_2.b = 3
        result = sub_4d5190(&edi_3[0xc], ebx + 0xc0)
else
    int32_t ebx_1 = ebx - result
    int32_t edx_1
    edx_1:result = muls.dp.d(0xa0a0a0a1, ebx_1)
    
    if (ecx == arg1[2])
        int32_t var_2c_1 = ecx
        result = sub_4d4dc0(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    int128_t* var_14 = edi_3
    ebx = &(*arg1)[ebx_1 s/ 0xcc * 0x33]
    int32_t var_8_1 = 0
    
    if (edi_3 != 0)
        sub_526a90(edi_3, ebx)
        var_8_1.b = 1
        result = sub_4d5190(&edi_3[0xc], ebx + 0xc0)
arg1[1] = &arg1[1][0x33]
fsbase->NtTib.ExceptionList = ExceptionList
return result
