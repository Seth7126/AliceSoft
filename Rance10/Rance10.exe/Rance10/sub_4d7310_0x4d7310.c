// 函数: sub_4d7310
// 地址: 0x4d7310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7343dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x3c) = 0
sub_403490(arg1 + 0x24, 0x75d066, nullptr)
sub_403490(arg1 + 0xc, 0x75d065, nullptr)
int32_t* esi = *(arg1 + 0x58)
void* i = *esi
void* i_2 = i

for (; i != esi; i = i_2)
    (*(**(i + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x58) + 4))
void* eax_5 = *(arg1 + 0x58)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x58)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x58)
int32_t var_8_2 = 0xffffffff
*(eax_7 + 8) = eax_7
*(arg1 + 0x5c) = 0
int32_t* esi_1 = *(arg1 + 0x50)
void* i_1 = *esi_1
i_2 = i_1

for (; i_1 != esi_1; i_1 = i_2)
    (*(**(i_1 + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_3 = 1
uint32_t ecx_8 = sub_42e7b0(*(*(arg1 + 0x50) + 4))
void* eax_10 = *(arg1 + 0x50)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(arg1 + 0x50)
*eax_11 = eax_11
void* eax_12 = *(arg1 + 0x50)
int32_t var_8_4 = 0xffffffff
*(eax_12 + 8) = eax_12
*(arg1 + 0x54) = 0
int32_t ebx = *(arg1 + 0x48)
void* i_3 = *(arg1 + 0x44)
int32_t var_20 = ebx
i_2 = i_3

while (i_3 != ebx)
    int32_t* esi_2 = *i_3
    ecx_8 = (*(i_3 + 4) - esi_2 + 3) u>> 2
    
    if (esi_2 u> *(i_3 + 4))
        ecx_8 = 0
    
    uint32_t var_18_1 = ecx_8
    
    if (ecx_8 != 0)
        uint32_t ebx_1 = ecx_8
        int32_t edi_1 = 0
        
        do
            ecx_8 = (*(**esi_2 + 4))(eax_2)
            edi_1 += 1
            esi_2 = &esi_2[1]
        while (edi_1 != ebx_1)
        
        i_3 = i_2
        ebx = var_20
    
    i_3 += 0xc
    i_2 = i_3

void* var_38_2 = arg1
uint32_t var_3c = ecx_8
sub_4ac600(*(arg1 + 0x44), *(arg1 + 0x48))
int32_t result = *(arg1 + 0x44)
*(arg1 + 0x48) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
