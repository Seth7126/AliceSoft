// 函数: sub_4802c0
// 地址: 0x4802c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728322
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
char* esi = data_7fcc9c

if (edi u< esi)
    ecx = data_7fcc98

if (edi u>= esi || ecx u> edi)
    if (esi == data_7fcca0)
        int32_t var_24_2 = ecx
        result = sub_480780()
        esi = data_7fcc9c
    
    arg1 = esi
    char* var_14_2 = esi
    int32_t var_8_2 = 1
else
    int32_t edx_1
    edx_1:result = muls.dp.d(0x4ec4ec4f, edi - ecx)
    int32_t edx_2 = edx_1 s>> 4
    
    if (esi == data_7fcca0)
        int32_t var_24_1 = ecx
        result = sub_480780()
        esi = data_7fcc9c
        ecx = data_7fcc98
    
    arg1 = esi
    char* var_14_1 = esi
    edi = ((edx_2 u>> 0x1f) + edx_2) * 0x34 + ecx
    int32_t var_8_1 = 0

if (esi != 0)
    *esi = *edi
    *(esi + 4) = *(edi + 4)
    *(esi + 0x1c) = 0xf
    *(esi + 0x18) = 0
    esi[8] = 0
    sub_403590(&esi[8], edi + 8, 0, 0xffffffff)
    *(esi + 0x20) = *(edi + 0x20)
    esi[0x24] = *(edi + 0x24)
    *(esi + 0x28) = *(edi + 0x28)
    *(esi + 0x2c) = *(edi + 0x2c)
    result = *(edi + 0x30)
    *(esi + 0x30) = result
    esi = data_7fcc9c

data_7fcc9c = &esi[0x34]
fsbase->NtTib.ExceptionList = ExceptionList
return result
