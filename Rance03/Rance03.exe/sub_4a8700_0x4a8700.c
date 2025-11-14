// 函数: sub_4a8700
// 地址: 0x4a8700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x44)
void* eax = *(result + 4)

if (eax != 0)
    eax = *(eax + 0x2c)

if (eax == arg2)
    return result

for (void* i = *(arg1 + 0x4c); i != *(arg1 + 0x48); i -= 4)
    void* ecx_1 = *(*(i - 4) + 4)
    
    if (ecx_1 != 0)
        ecx_1 = *(ecx_1 + 0x2c)
    
    if (ecx_1 == arg2)
        return *(i - 4)

return 0
