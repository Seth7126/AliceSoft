// 函数: sub_462f40
// 地址: 0x462f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_72c1d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_40 = &fileimage::CFileImageMaker::`vftable'
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_14_1 = 0
sub_6ca100(&var_40, arg1)
int128_t* var_30
sub_4630a0(&var_30, &var_3c)
int32_t var_2c
int32_t edi = var_2c
int128_t* edx = var_30
void* esi_1 = edi - edx
int32_t i = 0

if (edx u> edi)
    esi_1 = nullptr

int128_t* eax_3 = edx

if (esi_1 != 0)
    if (esi_1 u>= 0x20)
        int128_t xmm2_1 = *"eeeeeeeeeeeeeeee"
        
        do
            i += 0x20
            *eax_3 ^= xmm2_1
            eax_3[1] ^= xmm2_1
            eax_3 = &eax_3[2]
        while (i != (esi_1 & 0xffffffe0))
        
        edi = var_2c
    
    for (; i != esi_1; i += 1)
        *eax_3 ^= 0x65
        eax_3 += 1

uint32_t result = edx + 4
uint32_t xmm0_2

if (result u> edi)
    xmm0_2 = (zx.o(0)).d
else
    result = zx.d(*edx)
    xmm0_2 = ((zx.d(*(edx + 3)) << 8 | zx.d(*(edx + 2))) << 8 | zx.d(*(edx + 1))) << 8 | result

uint32_t var_24_2 = xmm0_2
int32_t var_28

if (edx != 0)
    result = sub_403160(edx, var_28 - edx, 1)
void* ecx_9 = var_3c

if (ecx_9 != 0)
    result = sub_403160(ecx_9, var_34 - ecx_9, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
