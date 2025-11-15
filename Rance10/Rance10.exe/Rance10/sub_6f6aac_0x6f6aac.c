// 函数: sub_6f6aac
// 地址: 0x6f6aac
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74acf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
void* const var_34_1 = &data_6f6ab8
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 0x1c) -= 1
*(arg1 + 0xa0) -= 1
int32_t* ebx_1 = arg3 * 0x34 + *(arg2 + 0x30)
int32_t* var_1c = ebx_1
int32_t eax = ebx_1[9]
*ebx_1 = 1

if (eax == *(arg1 + 0x90))
    *(arg1 + 0xa4) += 1

*(arg1 + 0xb0) -= ebx_1[9]
ebx_1[9] = 0

if (*(ebx_1 + 0x31) != 0)
    sub_6f6ccd(arg1, arg2, arg3)

void* esi_1 = arg1 + 0x20
ebx_1[0xc].b = 0
sub_6eaa5e(esi_1)
int32_t var_8 = 0
void* eax_2 = ebx_1[4]
void* const i_1

if (eax_2 == 0)
    i_1 = nullptr
else
    i_1 = *(eax_2 + 0x38)

if (i_1 != 0)
    void* const i
    
    do
        if (i_1 == ebx_1[4])
            i = nullptr
        else
            i = *(i_1 + 0x38)
        
        void* ecx_4 = *(i_1 + 0x1c)
        
        if (ecx_4 != 0)
            i_1.b = *(ecx_4 + 0x44)
            
            if (i_1.b == 0)
                *(ecx_4 + 0x44) = 1
                int32_t* ebx_2 = *(arg1 + 8)
                void* var_18 = ecx_4
                int32_t edi_1 = *(*ebx_2 + 0x10)
                j_sub_4033e0()
                edi_1(&var_18, 1)
                ebx_1 = var_1c
        
        i_1 = i
    while (i != 0)

int32_t var_8_1 = 1
int32_t result = sub_6eabaa(esi_1)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f6b93
return result
