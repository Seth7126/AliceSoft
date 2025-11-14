// 函数: sub_464ab0
// 地址: 0x464ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg1[5]
int32_t i = 0
int32_t edi = arg1[4]
char* eax

if (esi u< 0x10)
    eax = arg1
else
    eax = *arg1

char* eax_1

if (*eax != 0x2b)
    if (esi u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1

if (*eax == 0x2b || *eax_1 == 0x2d)
    i = 1

for (; i s< edi; i += 1)
    char* eax_2
    
    if (esi u< 0x10)
        eax_2 = arg1
    else
        eax_2 = *arg1
    
    if (eax_2[i] s< 0x30)
        break
    
    int32_t* eax_3
    
    if (esi u< 0x10)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    if (*(eax_3 + i) s> 0x39)
        break

int32_t result
result.b = edi == i
return result
