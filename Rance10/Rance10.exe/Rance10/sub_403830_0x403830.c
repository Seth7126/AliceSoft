// 函数: sub_403830
// 地址: 0x403830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* esi = arg1
char* var_18 = esi
int32_t edi_1 = arg2 | 0xf

if (edi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(esi + 0x14)
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> edi_1 u/ 3)
        edi_1 = ecx_1 + ebx_1
        
        if (ebx_1 u> 0xfffffffe - ecx_1)
            edi_1 = 0xfffffffe
else
    edi_1 = arg2

int32_t var_8_1 = 0
char* ebx_2

if (edi_1 == 0xffffffff)
    ebx_2 = nullptr
else if (edi_1 + 1 u< 0x1000)
    ebx_2 = sub_6e810c(edi_1 + 1)
else
    if (edi_1 + 0x24 u<= edi_1 + 1)
        sub_6d08ed()
        noreturn
    
    int32_t eax_7 = sub_6e810c(edi_1 + 0x24)
    ebx_2 = (eax_7 + 0x23) & 0xffffffe0
    *(ebx_2 - 4) = eax_7

if (arg3 != 0)
    char* ecx_3
    
    if (*(esi + 0x14) u< 0x10)
        ecx_3 = esi
    else
        ecx_3 = *esi
    
    if (arg3 != 0)
        sub_700660(ebx_2, ecx_3, arg3)

int32_t eax_10 = *(esi + 0x14)

if (eax_10 u>= 0x10)
    sub_403160(*esi, eax_10 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0
char* eax_12

if (cond:0)
    eax_12 = esi
else
    eax_12 = *esi

*eax_12 = 0
*esi = ebx_2
*(esi + 0x14) = edi_1
bool cond:1 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = arg3

if (not(cond:1))
    esi = ebx_2

*(esi + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
