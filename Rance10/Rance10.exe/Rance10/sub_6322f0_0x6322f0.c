// 函数: sub_6322f0
// 地址: 0x6322f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74572c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
*arg1 = 0
int32_t var_8_1 = 0
arg1[4] = std::locale::_Init(1)
int32_t var_8_2 = 1
arg1[1] = sub_633720(&arg1[3])
arg1[2] = sub_633850(&arg1[3])
void** ecx = arg2
int32_t var_8_3 = 2
int32_t esi_1 = ecx[5]
void** edx

if (esi_1 u< 8)
    edx = ecx
else
    edx = *ecx

void* eax_7 = edx + (ecx[4] << 1)

if (esi_1 u>= 8)
    ecx = *ecx

int32_t var_2c = 0
void** var_30_1 = ecx
sub_632eb0(arg1, ecx, eax_7)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
