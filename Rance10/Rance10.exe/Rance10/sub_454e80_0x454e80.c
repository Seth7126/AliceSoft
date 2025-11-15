// 函数: sub_454e80
// 地址: 0x454e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b66e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x2c)

for (void* i = *(arg1 + 0x28); i != edi; i += 0x3c)
    int32_t* ecx = *(i + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_2)

int32_t var_8_1 = 0
sub_432200(*(*(arg1 + 0x4c) + 4))
void* eax_5 = *(arg1 + 0x4c)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x4c)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x4c)
*(eax_7 + 8) = eax_7
*(arg1 + 0x50) = 0
int32_t var_8_2 = 1
sub_44dca0(*(*(arg1 + 0x44) + 4))
void* eax_9 = *(arg1 + 0x44)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x44)
*eax_10 = eax_10
void* eax_11 = *(arg1 + 0x44)
*(eax_11 + 8) = eax_11
*(arg1 + 0x48) = 0
int32_t var_8_3 = 2
sub_432200(*(*(arg1 + 0x3c) + 4))
void* eax_13 = *(arg1 + 0x3c)
*(eax_13 + 4) = eax_13
int32_t* eax_14 = *(arg1 + 0x3c)
*eax_14 = eax_14
void* eax_15 = *(arg1 + 0x3c)
*(eax_15 + 8) = eax_15
*(arg1 + 0x40) = 0
int32_t var_8_4 = 3
sub_432200(*(*(arg1 + 0x34) + 4))
void* eax_17 = *(arg1 + 0x34)
*(eax_17 + 4) = eax_17
int32_t* eax_18 = *(arg1 + 0x34)
*eax_18 = eax_18
void* eax_19 = *(arg1 + 0x34)
*(eax_19 + 8) = eax_19
*(arg1 + 0x38) = 0
int32_t edi_1 = *(arg1 + 0xc)

for (int32_t* i_1 = *(arg1 + 8); i_1 != edi_1; i_1 = &i_1[0x14])
    (*(*i_1 + 0x10))(0)

*(arg1 + 0xc) = *(arg1 + 8)
int32_t var_8_5 = 4
sub_432200(*(*(arg1 + 0x14) + 4))
void* eax_23 = *(arg1 + 0x14)
*(eax_23 + 4) = eax_23
int32_t* eax_24 = *(arg1 + 0x14)
*eax_24 = eax_24
void* eax_25 = *(arg1 + 0x14)
*(eax_25 + 8) = eax_25
*(arg1 + 0x18) = 0
int32_t edi_2 = *(arg1 + 0x20)

for (int32_t* i_2 = *(arg1 + 0x1c); i_2 != edi_2; i_2 = &i_2[0x11])
    (*(*i_2 + 0x14))(0)

*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t edi_3 = *(arg1 + 0x2c)
int32_t* result_1 = *(arg1 + 0x28)
int32_t* result

if (result_1 == edi_3)
    result = result_1
else
    do
        sub_458c50(result_1)
        result_1 = &result_1[0xf]
    while (result_1 != edi_3)
    
    result = *(arg1 + 0x28)

*(arg1 + 0x2c) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
