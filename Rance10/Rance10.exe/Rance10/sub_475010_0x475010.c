// 函数: sub_475010
// 地址: 0x475010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x20)
int32_t edi = 0
uint32_t ebx_3 = (*(arg1 + 0x24) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x24))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (*(*ecx + 0x30))(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

*(arg1 + 0x24) = *(arg1 + 0x20)
int32_t var_8_1 = 0
sub_432200(*(*(arg1 + 0x2c) + 4))
void* eax_6 = *(arg1 + 0x2c)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x2c)
*eax_7 = eax_7
void* result = *(arg1 + 0x2c)
*(result + 8) = result
*(arg1 + 0x30) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
