// 函数: sub_600e40
// 地址: 0x600e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cc7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_88
int32_t edx
sub_69bc05(&var_88, edx, arg1, &var_88)
char var_7c
int32_t ecx
int32_t edx_1
ecx, edx_1 = sub_69b98b(&var_7c, &var_88)
sub_69bc05(&var_88, edx_1, ecx, &var_88)
int32_t var_58
sub_69b98b(&var_58, &var_88)
int32_t var_b0_1 = var_58
int32_t var_54
int32_t var_b4 = var_54
int32_t var_50
int32_t var_b8 = var_50
int32_t var_70
int32_t var_bc = var_70
int32_t var_6c
int32_t var_c0 = var_6c + 1
int32_t var_68
int32_t var_c4 = var_68 + 0x76c
int32_t* var_34
sub_4691f0(&var_34, "Log%04d")
int32_t var_c_1 = 0
var_88 = &filedialog::CSaveFileDlg::`vftable'
int32_t* eax_8 = sub_69adc6(0x764)
int32_t* param0

if (eax_8 == 0)
    param0 = nullptr
else
    param0 = sub_6024a0(eax_8)

int32_t* param0_1 = param0
var_c_1.b = 1
int32_t var_44 = 0xf
int32_t var_48 = 0
var_58.b = 0
sub_402110(&var_58, "*.txt", 5)
var_c_1.b = 2
int32_t var_68_1 = 0xf
int32_t var_6c_1 = 0
var_7c = 0
sub_402110(&var_7c, 0x6ebb58, 0x10)
sub_6023e0(param0, &var_7c, &var_58)

if (var_68_1 u>= 0x10)
    j__free(var_7c.d)

var_c_1.b = 1
int32_t var_68_2 = 0xf
int32_t var_6c_2 = 0
var_7c = 0

if (var_44 u>= 0x10)
    j__free(var_58)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58.b = 0
sub_402110(&var_58, 0x6ebb54, 3)
var_c_1.b = 3
int32_t var_68_3 = 0xf
int32_t var_6c_3 = 0
var_7c = 0
sub_402110(&var_7c, 0x6ebadc, 0x12)
sub_6023e0(param0, &var_7c, &var_58)

if (var_68_3 u>= 0x10)
    j__free(var_7c.d)

var_c_1.b = 1
int32_t var_68_4 = 0xf
int32_t var_6c_4 = 0
var_7c = 0

if (var_44_1 u>= 0x10)
    j__free(var_58)

void** edx_2 = arg1 + 0xb4
param0[1] = arg2

if (edx_2[5] u>= 0x10)
    edx_2 = *edx_2

int32_t var_68_5 = 0xf
int32_t var_6c_5 = 0
var_7c = 0
void* ecx_8

if (*edx_2 != 0)
    void** ecx_9 = edx_2
    void* esi_2 = ecx_9 + 1
    HWND eax_10
    
    do
        eax_10.b = *ecx_9
        ecx_9 += 1
    while (eax_10.b != 0)
    ecx_8 = ecx_9 - esi_2
else
    ecx_8 = nullptr

sub_402110(&var_7c, edx_2, ecx_8)
char* eax_11 = &var_7c

if (var_68_5 u>= 0x10)
    eax_11 = var_7c.d

_strcpy_s(&param0[0x96], 0x104, eax_11)
param0[0xb] = &param0[0x96]

if (var_68_5 u>= 0x10)
    j__free(var_7c.d)

int32_t* edx_3 = &var_34
int32_t var_68_6 = 0xf
int32_t var_20

if (var_20 u>= 0x10)
    edx_3 = var_34

int32_t var_6c_6 = 0
var_7c = 0
void* ecx_11

if (*edx_3 != 0)
    int32_t* ecx_12 = edx_3
    void* esi_4 = ecx_12 + 1
    char i
    
    do
        i = *ecx_12
        ecx_12 += 1
    while (i != 0)
    ecx_11 = ecx_12 - esi_4
else
    ecx_11 = nullptr

sub_402110(&var_7c, edx_3, ecx_11)
char* eax_12 = &var_7c

if (var_68_6 u>= 0x10)
    eax_12 = var_7c.d

_strcpy_s(&param0[0x16], 0x200, eax_12)

if (var_68_6 u>= 0x10)
    j__free(var_7c.d)

*(param0[0x1d8] + param0 + 0x35d) = 0

if (GetSaveFileNameA(param0) != 0 && param0 != 0xffffffa8 && *(arg1 + 0x94) != 0)
    sub_401f60(&var_58, &param0[0x16])
    var_c_1.b = 4
    char eax_15 = sub_6000d0(*(arg1 + 0x94), &var_58)
    var_c_1.b = 1
    
    if (var_44_1 u>= 0x10)
        j__free(var_58)
    
    char* var_a8_19 = &param0[0x16]
    int32_t var_ac_6
    
    var_ac_6 = eax_15 == 0 ? 0x6ebb08 : 0x6ebac4
    
    PSTR lpText = sub_4691f0(&var_58, var_ac_6)
    void* lpCaption = arg1 + 0x9c
    
    if (*(lpCaption + 0x14) u>= 0x10)
        lpCaption = *lpCaption
    
    if (*(lpText + 0x14) u>= 0x10)
        lpText = *lpText
    
    MessageBoxA(arg2, lpText, lpCaption, MB_OK)
    
    if (var_44_1 u>= 0x10)
        j__free(var_58)

int32_t result = j__free(param0)

if (var_20 u>= 0x10)
    result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
