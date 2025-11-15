// 函数: sub_51ed40
// 地址: 0x51ed40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7390a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceProperty::VTable* var_64
sub_6437f0(&var_64)
int32_t var_8_1 = 0
sub_520410(arg1, &var_64)
int32_t var_60
void* const edx_1

if (var_60 s>= 0x100)
    edx_1 = &data_796e58
else
    switch (var_60)
        case 1
            edx_1 = &data_796e3c
        case 2
            edx_1 = &data_796e2c
        case 3
            edx_1 = &data_796e68
        default
            edx_1 = &data_796e48

bool cond:0 = *edx_1 != 0
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx_2

if (cond:0)
    void* const ecx_3 = edx_1
    void* esi_1 = ecx_3 + 1
    int32_t eax_3
    
    do
        eax_3.b = *ecx_3
        ecx_3 += 1
    while (eax_3.b != 0)
    ecx_2 = ecx_3 - esi_1
else
    ecx_2 = nullptr

sub_403490(&var_2c, edx_1, ecx_2)
var_8_1.b = 1
int32_t var_5c
int32_t ebx = var_5c
int32_t edi = ebx

if ((ebx.b & 1) != 0)
    edi = ebx + 1

float var_44
int32_t eax_4 = int.d(sub_4a78b0(var_44))
int32_t esi_2 = ebx

if (eax_4 s< ebx)
    esi_2 = eax_4

float var_48
int32_t eax_5 = int.d(sub_4a78b0(var_48))

if (eax_5 s< ebx)
    ebx = eax_5

if (ebx s< esi_2)
    ebx = esi_2

void* esi_3 = data_7fcbbc
float xmm0_4

if (esi_3 != 0)
    if (sub_63c080(esi_3) != 0)
        (*(**(esi_3 + 0x2c) + 0x60))(eax_2)
        xmm0_4 = fconvert.s(arg2)
    else
        xmm0_4 = 1f
else
    xmm0_4 = 1f

void* esi_4 = data_7fcb68

if (*(esi_4 + 4) != 0)
label_51ee9e:
    char* eax_11 = &var_2c
    
    if (result_1 u>= 0x10)
        eax_11 = var_2c.d
    
    (*(**(esi_4 + 4) + 8))(int.d(_mm_cvtepi32_ps(zx.o(edi + (ebx << 1))) * xmm0_4), eax_11, 0)
else
    int32_t* ecx_7 = data_7fcb88
    
    if (ecx_7 != 0)
        int32_t eax_10 = (**ecx_7)(0x75ff30)
        *(esi_4 + 4) = eax_10
        
        if (eax_10 != 0)
            goto label_51ee9e

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
