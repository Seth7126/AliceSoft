// 函数: sub_5ee7c0
// 地址: 0x5ee7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24

if (data_75d518 == 0)
    struct textfile::CTextFileWriter::VTable** eax_2 = sub_69adc6(0x18)
    
    if (eax_2 == 0)
        eax_2 = nullptr
    else
        *eax_2 = &textfile::CTextFileWriter::`vftable'
        eax_2[1] = &filesystem::CFile::`vftable'
        eax_2[2] = 0xffffffff
        eax_2[3] = 0
        eax_2[4] = 0
        eax_2[5].b = 0
    
    data_75d518 = eax_2

char* edx = (**arg1)()
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_4.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_20, edx, ecx_1)
void* eax_5 = data_75d518
*(eax_5 + 0x14) = 0
HANDLE hObject = *(eax_5 + 8)

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    *(eax_5 + 8) = 0xffffffff

int32_t ebx
ebx.b = sub_604970(eax_5 + 4, &var_20) == 0

if (var_c u>= 0x10)
    j__free(var_20.d)

sub_69a5bc(eax_1 ^ &var_24)
return ebx.b == 0
