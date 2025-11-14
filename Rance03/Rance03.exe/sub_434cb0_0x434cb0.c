// 函数: sub_434cb0
// 地址: 0x434cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_10_3 = ecx
        sub_434dd0(arg1)
    
    char* ebx_1 = arg1[1]
    
    if (ebx_1 != 0)
        sub_403000(ebx_1, arg2)
        *(ebx_1 + 0x18) = arg2[6]
else
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_434dd0(arg1)
    
    char* edi_5 = arg1[1]
    void* ebx = *arg1 + (arg2 - eax) s/ 0x1c * 0x1c
    
    if (edi_5 != 0)
        sub_403000(edi_5, ebx)
        *(edi_5 + 0x18) = *(ebx + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
