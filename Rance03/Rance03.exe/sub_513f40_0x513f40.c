// 函数: sub_513f40
// 地址: 0x513f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = data_75d4e4
*arg1 = &partsengine::CSoundManager::`vftable'
void* ecx = *(eax + 0x93c)

if (ecx != 0)
    int32_t var_8_1 = 2
    sub_46eb70(ecx + 0x94)
    eax = data_75d4e4

void* ecx_2 = *(eax + 0x93c)

if (ecx_2 != 0)
    int32_t var_8_2 = 3
    sub_46eb70(ecx_2 + 0x94)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
