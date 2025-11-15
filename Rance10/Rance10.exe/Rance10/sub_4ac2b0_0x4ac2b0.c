// 函数: sub_4ac2b0
// 地址: 0x4ac2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1[1]
int32_t* edi = arg2
int32_t ecx

if (edi u< result)
    ecx = *arg1

int32_t* ebx

if (edi u>= result || ecx u> edi)
    if (result == arg1[2])
        result = sub_4ac370(arg1, 1)
    
    ebx = arg1[1]
    arg2 = ebx
    int32_t* var_14_2 = ebx
    int32_t var_8_2 = 1
else
    if (result == arg1[2])
        result = sub_4ac370(arg1, 1)
    
    ebx = arg1[1]
    edi = ((edi - ecx) & 0xfffffff0) + *arg1
    arg2 = ebx
    int32_t* var_14_1 = ebx
    int32_t var_8_1 = 0

if (ebx != 0)
    sub_4ac900(ebx, edi)
    ebx[3].b = edi[3].b
    *(ebx + 0xd) = *(edi + 0xd)
    *(ebx + 0xe) = *(edi + 0xe)
    result = zx.d(*(edi + 0xf))
    *(ebx + 0xf) = result.b

arg1[1] += 0x10
fsbase->NtTib.ExceptionList = ExceptionList
return result
