// 函数: sub_650740
// 地址: 0x650740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_64b990(arg1 + 0x50)
int32_t* esi = *(arg1 + 8)
HWND hWnd = *esi

if (hWnd != 0 && DestroyWindow(hWnd) != 0)
    *esi = 0

if (esi[0xb].b != 0 && UnregisterClassA(esi[0xa], esi[0x18]) != 0)
    esi[0xb].b = 0

int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_402110(&var_38, "DPLogViewer_TextChildWnd", 0x18)
int32_t var_4 = 0
int32_t eax_7 = data_75dd40
int32_t var_50_3 = eax_7
data_75dd40 = eax_7 + 1
char var_20
__swprintf_c(&var_20, 0x10, 0x70094c)
void* ecx_2

if (var_20 != 0)
    char* ecx_3 = &var_20
    char i
    
    do
        i = *ecx_3
        ecx_3 = &ecx_3[1]
    while (i != 0)
    void var_1f
    ecx_2 = ecx_3 - &var_1f
else
    ecx_2 = nullptr

sub_4057c0(&var_38, &var_20, ecx_2)
*(*(arg1 + 8) + 4) = 0xb
char* ecx_6 = *(arg1 + 8) + 0x30

if (ecx_6 != &var_38)
    sub_401ff0(ecx_6, &var_38, 0, 0xffffffff)

*(*(arg1 + 8) + 0x60) = arg3
*(*(arg1 + 8) + 0x64) = 0x200
*(*(arg1 + 8) + 0x68) = 0x40000000
*(*(arg1 + 8) + 0x7c) = arg2
void* eax_14 = *(arg1 + 8)
*(eax_14 + 0x6c) = 0
*(eax_14 + 0x70) = 0
*(eax_14 + 0x74) = 0x258
*(eax_14 + 0x78) = 0x190
*(*(arg1 + 8) + 0x84) = arg1
int32_t ebx
ebx.b = sub_698a60(*(arg1 + 8)) != 0

if (var_24 u>= 0x10)
    j__free(var_38.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return ebx.b
