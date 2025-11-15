// 函数: sub_631de0
// 地址: 0x631de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7456c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* esi = arg1
int32_t* var_18 = esi
int32_t edi_1 = arg2 | 7

if (edi_1 u<= 0x7ffffffe)
    int32_t ebx_1 = esi[5]
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> edi_1 u/ 3)
        edi_1 = ecx_1 + ebx_1
        
        if (ebx_1 u> 0x7ffffffe - ecx_1)
            edi_1 = 0x7ffffffe
else
    edi_1 = arg2

int32_t var_8_1 = 0
char* eax_7 = sub_437ce0(edi_1 + 1)

if (arg3 != 0)
    char* ecx_3
    
    if (esi[5] u< 8)
        ecx_3 = esi
    else
        ecx_3 = *esi
    
    if (arg3 != 0)
        sub_700660(eax_7, ecx_3, arg3 * 2)

int32_t eax_9 = esi[5]

if (eax_9 u>= 8)
    sub_403160(*esi, eax_9 + 1, 2)

esi[5] = 7
bool cond:0 = esi[5] u< 8
esi[4] = 0
int32_t* eax_11

if (cond:0)
    eax_11 = esi
else
    eax_11 = *esi

*eax_11 = 0
*esi = eax_7
esi[5] = edi_1
bool cond:1 = esi[5] u< 8
esi[4] = arg3

if (not(cond:1))
    esi = eax_7

*(esi + (arg3 << 1)) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
