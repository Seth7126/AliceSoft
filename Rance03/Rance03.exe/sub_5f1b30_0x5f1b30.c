// 函数: sub_5f1b30
// 地址: 0x5f1b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ecx = arg2

if (ecx[4] == 0)
    return 0

int32_t edx = ecx[5]
int32_t result = *(arg1 + 8)
char* esi

if (edx u< 0x10)
    esi = ecx
else
    esi = *ecx

char* esi_1

if (*esi u>= 0x81)
    if (edx u< 0x10)
        esi_1 = ecx
    else
        esi_1 = *ecx

if (*esi u< 0x81 || *esi_1 u> 0x9f)
    char* esi_2
    
    if (edx u< 0x10)
        esi_2 = ecx
    else
        esi_2 = *ecx
    
    if (*esi_2 u>= 0xe0 && edx u>= 0x10)
        ecx = *ecx
    
    if (*esi_2 u< 0xe0 || *ecx u> 0xef)
        return (result + 1) s>> 1

return result
