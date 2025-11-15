// 函数: sub_50d360
// 地址: 0x50d360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x124)
void* const edx

if (eax_3 s>= 0x100)
    edx = &data_796e58
else
    switch (eax_3)
        case 1
            edx = &data_796e3c
        case 2
            edx = &data_796e2c
        case 3
            edx = &data_796e68
        default
            edx = &data_796e48

bool cond:0 = *edx != 0
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (cond:0)
    void* const ecx_1 = edx
    void* edi_1 = ecx_1 + 1
    
    do
        eax_3.b = *ecx_1
        ecx_1 += 1
    while (eax_3.b != 0)
    
    ecx = ecx_1 - edi_1
else
    ecx = nullptr

sub_403490(&var_2c, edx, ecx)
int32_t var_8_1 = 0
int32_t edi_2 = *(arg1 + 0x128)
int32_t ebx = edi_2

if ((ebx.b & 1) != 0)
    ebx += 1

int32_t eax_4 = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t esi_1 = edi_2

if (eax_4 s< edi_2)
    esi_1 = eax_4

int32_t eax_6 = int.d(sub_4a78b0(*(arg1 + 0x13c)))

if (eax_6 s< edi_2)
    edi_2 = eax_6

if (edi_2 s< esi_1)
    edi_2 = esi_1

void* esi_2 = data_7fcbbc
float xmm0_4

if (esi_2 != 0)
    if (sub_63c080(esi_2) != 0)
        (*(**(esi_2 + 0x2c) + 0x60))(eax_2)
        xmm0_4 = fconvert.s(arg2)
    else
        xmm0_4 = 1f
else
    xmm0_4 = 1f

void* esi_3 = data_7fcb68

if (*(esi_3 + 4) != 0)
label_50d4bb:
    char* eax_12 = &var_2c
    
    if (result_1 u>= 0x10)
        eax_12 = var_2c.d
    
    (*(**(esi_3 + 4) + 8))(int.d(_mm_cvtepi32_ps(zx.o(ebx + (edi_2 << 1))) * xmm0_4), eax_12, 0)
else
    int32_t* ecx_5 = data_7fcb88
    
    if (ecx_5 != 0)
        int32_t eax_11 = (**ecx_5)(0x75ff30)
        *(esi_3 + 4) = eax_11
        
        if (eax_11 != 0)
            goto label_50d4bb

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
