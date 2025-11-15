// 函数: sub_5c33c0
// 地址: 0x5c33c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ff68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = nullptr
int32_t var_24 = 0
var_28 = sub_4f2cd0()
int32_t var_8_1 = 0
int32_t eax_4 = *(arg1 + 0x28)
int32_t* ebx_1 = *(arg1 + 0x24)
int32_t* arg_4

while (ebx_1 != eax_4)
    int32_t i_1 = 3
    int32_t i_2 = 3
    int32_t i
    
    do
        int32_t edx_1 = *ebx_1 * 9
        int32_t ecx_2 = *arg_4
        int32_t edi_1 = *(ecx_2 + (edx_1 << 2) + 0x10)
        int32_t esi_1 = *(ecx_2 + (edx_1 << 2) + 0xc)
        
        if (esi_1 != edi_1)
            do
                int32_t* var_44_1 = arg_4
                int32_t var_48_1 = esi_1
                int32_t* var_30
                ecx_2 = sub_514cb0(&var_28, &var_30, ecx_2)
                esi_1 += 4
            while (esi_1 != edi_1)
            
            i_1 = i_2
        
        ebx_1 = &ebx_1[0xa]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

sub_5c34b0(arg1, &var_28)
int32_t* eax_5 = var_28
int32_t* var_44_3 = eax_5
sub_513f00(&var_28, &arg_4, *eax_5)
int32_t result = sub_403160(var_28, 1, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
