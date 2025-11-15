// 函数: sub_57cc20
// 地址: 0x57cc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** i_1 = 0xffffffff
void* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
sub_422540(&var_24, 0x400, &i_1)
int32_t var_8_1 = 0
int32_t* esi = arg1[3]
void* ebx = var_24
struct _EXCEPTION_REGISTRATION_RECORD** i = *esi
i_1 = i

for (; i != esi; i = i_1)
    *(ebx + (i[4] << 2)) = i[5]
    sub_429080(&i_1)

int32_t edi_1 = arg1[1]
int32_t* esi_2 = *arg1

if (esi_2 != edi_1)
    do
        i = sub_57c730(esi_2, &var_24, arg2)
        esi_2 = &esi_2[0xf]
    while (esi_2 != edi_1)
    
    ebx = var_24

if (ebx != 0)
    i = sub_403160(ebx, (var_1c - ebx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return i
