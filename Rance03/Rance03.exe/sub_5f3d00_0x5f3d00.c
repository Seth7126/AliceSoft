// 函数: sub_5f3d00
// 地址: 0x5f3d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *arg2
void* ecx = *arg3

if (*(*(eax + 0x48) + 8) s> *(*(ecx + 0x48) + 8))
    *arg2 = ecx
    *arg3 = eax

void* result = *arg4

if (*(*(result + 0x48) + 8) s> *(*(*arg2 + 0x48) + 8))
    *arg4 = *arg2
    *arg2 = result
    void* esi_3 = *arg3
    
    if (*(*(result + 0x48) + 8) s> *(*(esi_3 + 0x48) + 8))
        *arg2 = esi_3
        *arg3 = result

return result
